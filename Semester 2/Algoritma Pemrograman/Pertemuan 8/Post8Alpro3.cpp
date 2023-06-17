#include <bits/stdc++.h>
using namespace std;

void inputMatriks(int matriks[][100], int batas) {
    int i, j;
    for (i = 0; i < batas; i++) {
        for (j = 0; j < batas; j++) {
            cout << "Masukkan data ke [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriks[i][j];
        }
    }
}

void printMatriks(int matriks[][100], int batas) {
    int i, j;
    for (i = 0; i < batas; i++) {
        cout << "| ";
        for (j = 0; j < batas; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

void checkIdentity(int matriks[][100], int batas) {
    int i, j;
    bool isIdentity = true;
    for (i = 0; i < batas; i++) {
        for (j = 0; j < batas; j++) {
            if (i == j && matriks[i][j] != 1) {
                isIdentity = false;
            } else if (i != j && matriks[i][j] != 0) {
                isIdentity = false;
            }
        }
    }
    if (isIdentity) {
        cout << "Matriks diatas termasuk matriks identitas" << endl;
    } else {
        cout << "Matriks diatas tidak termasuk matriks identitas" << endl;
    }
}

int main() {
    int batas, matriks[100][100], i, j;

    cout << "Masukkan batas : ";
    cin >> batas;

    for (i = 0; i < batas; i++) {
        for (j = 0; j < batas; j++) {
            matriks[i][j] = 0;
        }
    }
    inputMatriks(matriks, batas);
    printMatriks(matriks, batas);
    checkIdentity(matriks, batas);
    return 0;
}
