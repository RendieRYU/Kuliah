#include<iostream>
using namespace std;

int main() {

    int jumlah_vertex, edge, origin, destinasi;
    cout << "Masukkan jumlah vertex: ";
    cin >> jumlah_vertex;
    cout << "Masukkan jumlah edge: ";
    cin >> edge;
    int adj_matrix[jumlah_vertex][jumlah_vertex];

    // Inisialisasi matriks dengan 0
    for(int i = 0; i < jumlah_vertex; i++) {
        for(int j = 0; j < jumlah_vertex; j++) {
            adj_matrix[i][j] = 0;
        }
    }

    // Membaca edge dan mengisi matriks
    for(int i = 0; i < edge; i++) {
        cout << "Masukkan origin dan destinasi untuk edge " << i+1 << ": ";
        cin >> origin >> destinasi;
        adj_matrix[origin-1][destinasi-1] = 1;
    }

    // Menampilkan matriks
    cout << "Adjacency Matrix: " << endl;
    for(int i = 0; i < jumlah_vertex; i++) {
        for(int j = 0; j < jumlah_vertex; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
