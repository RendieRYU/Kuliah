// Praktikum 6: BFS dan DFS
// Penerapan contoh di slide kuliah Strategi Algoritma - BFS dan DFS hal 14
// header
#include <windows.h>
#include <iostream>
#include <list> 

#include "GL/draws.h"

using namespace std;
//drawLine
void drawLine(vector<Vec3> nodePosition, int nodeIdx1, int nodeIdx2, Vec3 color, float radius, float lineWidth, bool isDirected){
	glLineWidth(lineWidth);
	glColor3f(color.X, color.Y, color.Z);
	glBegin(GL_LINES);
		glVertex3f(nodePosition[nodeIdx1].X, nodePosition[nodeIdx1].Y, nodePosition[nodeIdx1].Z);
		glVertex3f(nodePosition[nodeIdx2].X, nodePosition[nodeIdx2].Y, nodePosition[nodeIdx2].Z);
	glEnd();
	
	if (isDirected){
		glPushMatrix();
		Vec3 direction(nodePosition[nodeIdx2].X-nodePosition[nodeIdx1].X, nodePosition[nodeIdx2].Y-nodePosition[nodeIdx1].Y, nodePosition[nodeIdx2].Z-nodePosition[nodeIdx1].Z);
		Vec3 normal(-direction.Y, direction.X, 0.0f);
		Vec3 normal2(direction.Y, -direction.X, 0.0f);
		Vec3 normal3(-direction.X, -direction.Y, 0.0f);
		Vec3 normal4(direction.X, direction.Y, 0.0f);
		Vec3 normal5(-direction.X, direction.Y, 0.0f);
		Vec3 normal6(direction.X, -direction.Y, 0.0f);
		Vec3 normal7(-direction.Y, -direction.X, 0.0f);
		Vec3 normal8(direction.Y, direction.X, 0.0f);
		Vec3 normal9(-direction.X, direction.Y, 0.0f);
		Vec3 normal10(direction.X, -direction.Y, 0.0f);
		Vec3 normal11(-direction.Y, direction.X, 0.0f);
		Vec3 normal12(direction.Y, -direction.X, 0.0f);
		Vec3 normal13(-direction.X, -direction.Y, 0.0f);
		Vec3 normal14(direction.X, direction.Y, 0.0f);
		Vec3 normal15(-direction.X, direction.Y, 0.0f);
		Vec3 normal16(direction.X, -direction.Y, 0.0f);
		Vec3 normal17(-direction.Y, -direction.X, 0.0f);
		Vec3 normal18(direction.Y, direction.X, 0.0f);
		Vec3 normal19(-direction.X, direction.Y, 0.0f);
		Vec3 normal20(direction.X, -direction.Y, 0.0f);
		Vec3 normal21(-direction.Y, direction.X, 0.0f);
	}
}
Graph graph;
// buffer untuk simpan teks
char markText[10];
// hasil dari penerapan algoritma
vector<int>* pathResult;
vector<int> pathSequence;

// fungsi untuk menggambar jalur hasil pencarian dengan OpenGL
void drawResult(){
	glPushMatrix();
	// gambar garis dengan anak panah
	float radius = 15.0f;
	for (int i=0; i<graph.getNumNodes(); i++){
		for (int j=0; j<pathResult[i].size(); j++){
			int nodeIdx = pathResult[i].at(j);
			Vec3 color(1.0f,0.0f,1.0f);
			drawLine(graph.getNodePosition(), i, nodeIdx, color, radius, 2.0f, graph.getIsDirected());
		}
	}
	
	// gambar urutan hasil pencarian
	for (int i=0; i<pathSequence.size(); i++){
		int nodeIdx = pathSequence.at(i);
		if (i == 0)
			sprintf(markText,"%s","start");
		else
			sprintf(markText,"%d",i);
		Vec3 position(graph.getNodePosition()[nodeIdx].getX()+2.0f*radius, graph.getNodePosition()[nodeIdx].getY()+2.0f*radius, 0.0f);
		Vec3 color(1.0f,0.0f,1.0f);
		drawText(position, color, markText, radius, 2.0f);
	}
	glPopMatrix();
}

// taruh semua obyek yang akan digambar di fungsi display()
void displayGraph(){
	// bersihkan dan reset layar dan buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	
	// posisikan kamera pandang
	gluLookAt(0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	
	// panggil fungsi untuk menggambar obyek
	drawNodes();
	if (!pathSequence.empty())
		drawResult();
	drawEdges();
	
	// tampilkan obyek ke layar
	glutSwapBuffers();
}

// fungsi untuk menerapkan Breadth First Search (BFS) pada graf
// graph = graf
// startIdx = indeks node mulai 
void BFS(Graph graph, int startIdx) { 
	// tandai semua node yang belum dikunjungi 
	bool* visited = new bool[graph.getNumNodes()]; 
	for(int i = 0; i < graph.getNumNodes(); i++) 
	visited[i] = false; 
	
	// buat antrian node
	list<int> queue; 
	
	// tandai node sekarang sebagai node yang dikunjungi 
	visited[startIdx] = true; 
	queue.push_back(startIdx); 
	
	pathSequence.clear();
	pathResult = new vector<int>[graph.getNumNodes()];
	while(!queue.empty()){ 
		// keluarkan node dari antrian dan cetak indeksnya 
		startIdx = queue.front();
		cout << startIdx << " ";
		pathSequence.push_back(startIdx);
		queue.pop_front(); 
	 
		// ambil semua node yang bertetangga dengan node sekarang 
		// dari daftar antrian node
		for (int i=0; i<graph.getAdjNodes()[startIdx].size(); i++){ 
			// jika node tetangganya belum dikunjungi maka tandai 
			// telah dikunjungi dan keluarkan dari antrian
			int nodeIdx = graph.getAdjNodes()[startIdx].at(i);
			if (!visited[nodeIdx]){ 
				visited[nodeIdx] = true; 
				queue.push_back(nodeIdx); 
				pathResult[startIdx].push_back(nodeIdx);
			} 
		}
		
		// jika antrian kosong tapi masih ada node yang belum dikunjungi
		// maka buat node tersebut sebagai titik awal lagi 
		if (queue.empty()){
			int j=0; 
			// cari node yang belum dikunjungi
			while (visited[j] && j<graph.getNumNodes()) 
				j++;
	
			// bila ada node yang belum dikunjungi maka masukan di antrian
			if (!visited[j] && j<graph.getNumNodes()){
				visited[j] = true; 
				queue.push_back(j); 
			}
		} 
	} 
}

// fungsi rekursi untuk Depth First Search (DFS)
void DFSRecursive(Graph graph, int startIdx, int endIdx, bool visited[]){ 
	// tandai node sekarang sebagai node yang dikunjungi 
	visited[startIdx] = true; 
	cout << startIdx << " ";
	pathSequence.push_back(startIdx);
	 
	// rekursi ke semua node yang bertetangga
	for (int i=0; i<graph.getAdjNodes()[startIdx].size(); i++){ 
		int nodeIdx = graph.getAdjNodes()[startIdx].at(i);
		if (!visited[nodeIdx]){
			DFSRecursive(graph, nodeIdx, startIdx, visited); 
			pathResult[startIdx].push_back(nodeIdx);
		}
	}
	// jika semua node cabang pada node awal sudah habis maka
	// tentukan node baru yang belum dikunjungi sebagai node awal
	if (startIdx == endIdx){
		int j=0; 
		// cari node yang belum dikunjungi
		while (visited[j] && j<graph.getNumNodes()) 
			j++;
		// bila ada node yang belum dikunjungi maka masukan dalam antrian
		if (!visited[j] && j<graph.getNumNodes()) 
			DFSRecursive(graph, j, j, visited); 
	}
} 
// fungsi untuk menerapkan Depth First Search (DFS) pada graf
// graph = graf
// startIdx = indeks node mulai 
void DFS(Graph graph, int startIdx){ 
	// tandai semua node yang belum dikunjungi 
	bool* visited = new bool[graph.getNumNodes()]; 
	for(int i = 0; i < graph.getNumNodes(); i++) 
		visited[i] = false; 
	
	pathSequence.clear();
	pathResult = new vector<int>[graph.getNumNodes()];
	
	// rekursi DFS
	DFSRecursive(graph, startIdx, startIdx, visited); 
}

// kode tester
int main(int argc, char** argv){
	// inisialisasi graf
	graph.setIsDirected(true);
	graph.setNumLevels(4);
	graph.setNumNodes(7);
//	
//	// tambahkan nodes
	graph.addNode(0, 0, 1.1f);
	graph.addNode(1, 0, 0.95f);
	graph.addNode(2, 1, 0.9f);
	graph.addNode(3, 1, 1.05f);
	graph.addNode(4, 3, 1.1f);
	graph.addNode(5, 2, 0.85f);
	graph.addNode(6, 3, 0.95f);
//	
//	// tambahkan edges
	graph.addEdge(0, 1); 
	graph.addEdge(0, 3); 
	graph.addEdge(2, 0); 
	graph.addEdge(2, 3); 
	graph.addEdge(2, 4); 
	graph.addEdge(2, 6);
	graph.addEdge(3, 1); 
	graph.addEdge(4, 5); 
	graph.addEdge(4, 6); 
	graph.addEdge(5, 2); 
	graph.addEdge(6, 3); 
//
//	graph.setIsDirected(true);
//	graph.setNumLevels(4);
//	graph.setNumNodes(6);
//	
//	graph.addNode(0, 1, 1.0f);
//	graph.addNode(1, 0, 1.0f);
//	graph.addNode(2, 0, 1.0f);
//	graph.addNode(3, 2, 1.0f);
//	graph.addNode(4, 3, 1.0f);
//	graph.addNode(5, 3, 1.0f);
//	
//	graph.addEdge(0, 1); 
//	graph.addEdge(0, 2); 
//	graph.addEdge(2, 1); 
//	graph.addEdge(1, 4);
//	graph.addEdge(0, 3);
//	graph.addEdge(3, 4);
//	graph.addEdge(3, 5);    
//	graph.addEdge(4, 5);
//	graph.addEdge(5, 2); 
	
	// perkiraan posisi node
	graph.setNodePosition();
	 
	// terapkan BFS
	int startIdx = 0;
	cout << "DFS mulai dari node " << startIdx << "\n"; 
	DFS(graph, startIdx); 
	 
	// inisialisasi jendela OpenGL
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	// set ukuran jendela tampilan dalam piksel
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	// posisi jendela dilayar komputer dalam piksel
	glutInitWindowPosition(100, 100);
	// judul jendela (isi dengan NAMA / NIM - JUDUL PRAKTIKUM)
	glutCreateWindow("NAMA / NIM - PRAKTIKUM STIMA");
	// panggil fungsi init untuk inisialisasi awal
	initView();
	// event handler untuk display
	glutDisplayFunc(displayGraph); 
	glutReshapeFunc(reshapeView);
	
	// looping
	glutMainLoop();
	return 0;
}

