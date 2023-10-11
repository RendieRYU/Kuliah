#include <bits/stdc++.h>
using namespace std;

class statistic{
    private:
        int data[100];
        int totalData;
        int clas;
        int range;
        int width;
    public:
        void inputData();
        void sortData();
        void printData();
        void countClass();
};

void statistic::inputData(){
    cout << "Masukkan Jumlah Data: ";
    cin >> totalData;
    for(int i = 0; i < totalData; i++){
        cout << "data ke-"<<i+1<<": ";
        cin >> data[i];
    }
}

void statistic::sortData(){
    for (int i = 0; i < totalData; i++){
        for (int j = i+1; j < totalData; j++){
            if (data[i] > data[j]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void statistic::printData(){
    for (int i = 0; i < totalData; i++){
        cout << data[i] << endl;
    }
}

void statistic::countClass(){
    range = data[totalData - 1] - data[0];
    clas = ceil(1 + (3.22 * log10(totalData)));
    width = ceil(range / clas);
}

int main(){
    statistic statis;
    statis.inputData();
    statis.sortData();
    statis.countClass();
    statis.printData();
}