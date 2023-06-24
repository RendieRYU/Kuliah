#include <iostream>
#include <iomanip>

using namespace std;

void printMatriks(int values[][4], int rowSize, int colSize, int colSummation[]){
    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            cout << left << setw(3) << values[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "----------------------+" << endl;
    for (int i = 0; i < colSize; i++){
        cout << left << setw(3) << colSummation[i] << " | ";
    }
}

int* matrixSummation(int values[][4], int rowSize, int colSize){
    static int colSum[4];
    for (int col = 0; col < colSize; col++){
        int sum = 0;
        for (int row = 0; row < rowSize; row++){
            sum += values[row][col];
        }
        colSum[col] = sum;
    }
    return colSum;
}

int main(){
    int rowSize = 3;
    int colSize = 4;
    int values[3][4] = {
        {4, 10, 1, 2},
        {22, 9, 11, 12},
        {41, 110, 7, 82},
    };

    int *colSummation = matrixSummation(values, rowSize, colSize);
    printMatriks(values, rowSize, colSize, colSummation);
}