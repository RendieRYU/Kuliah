#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>

const float PI = 3.14159265;
const int radius = 200; // Radius lingkaran tempat vertex ditempatkan
const int windowSize = 500; // Ukuran window SFML
const sf::Vector2f center(windowSize / 2, windowSize / 2); // Pusat lingkaran

int main() {
    int jumlah_vertex = 5; // Ganti dengan jumlah vertex Anda
    int adj_matrix[5][5] = { // Ganti dengan matriks adjacency Anda
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0}
    };

    // Membuat window SFML
    sf::RenderWindow window(sf::VideoMode(windowSize, windowSize), "Graf");

    // Membuat vertex dan edge
    std::vector<sf::CircleShape> vertices(jumlah_vertex);
    std::vector<sf::RectangleShape> edges;
    for (int i = 0; i < jumlah_vertex; i++) {
        // Membuat vertex
        vertices[i] = sf::CircleShape(5);
        float angle = 2 * PI * i / jumlah_vertex;
        vertices[i].setPosition(center.x + radius * cos(angle) - vertices[i].getRadius(), center.y + radius * sin(angle) - vertices[i].getRadius());

        // Membuat edge
        for (int j = 0; j < i; j++) {
            if (adj_matrix[i][j]) {
                sf::RectangleShape edge(sf::Vector2f(sqrt(pow(vertices[i].getPosition().x - vertices[j].getPosition().x, 2) + pow(vertices[i].getPosition().y - vertices[j].getPosition().y, 2)), 1));
                edge.setPosition(vertices[j].getPosition().x + vertices[j].getRadius(), vertices[j].getPosition().y + vertices[j].getRadius());
                edge.setRotation(atan2(vertices[i].getPosition().y - vertices[j].getPosition().y, vertices[i].getPosition().x - vertices[j].getPosition().x) * 180 / PI);
                edges.push_back(edge);
            }
        }
    }

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (const auto& edge : edges)
            window.draw(edge);
        for (const auto& vertex : vertices)
            window.draw(vertex);
        window.display();
    }

    return 0;
}
