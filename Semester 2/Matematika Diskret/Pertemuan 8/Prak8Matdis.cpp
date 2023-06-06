#include <iostream>
#include <cstdlib>
using namespace std;

class Matdis{
    public:
        void pilih();
        void permutasi();
        void kombinasi();
        int fak(int value);
    private:
        int q[100];
};
int Matdis::fak(int value){
    if (value == 1 || value == 0){
        return 1;
    }
    else{
        return value * fak(value - 1);
    }
}

void Matdis::pilih(){
    int n;
    cout << "\n1. Permutasi \n2. Kombinasi";
    cout << "\nPilihan anda: ";
    cin >> n;
    if (n == 1)
        permutasi();
    if (n == 2)
        kombinasi();
    else 
        cout << "\n \n ***selesai***\n\n";
}
void Matdis::permutasi(){
    system("cls");
    int n;
    int N;
    int k;
    int K;
    int p;
    cout << "\n masukkan nilai n = ";
    cin >> n;
    cout << "\n masukkan nilai r = ";
    cin >> k;
    if (k > n){
        cout << "\n Nilai r harus kurang dari dari n";
        permutasi();
    }
    N = fak(n);
    K = fak(p);
    cout << "\n Maka hasil permutasi : " << N / K;
    cout << "\n \n";
    pilih();
}
void Matdis::kombinasi(){
    system("cls");
    int n;
    int N = 1;
    int k;
    int K = 1;
    int p;
    int P = 1;
    cout << "\n masukkan nilai n = ";
    cin >> n;
    cout << "\n masukkan nilai r = ";
    cin >> k;
    if (k > n){
        cout << "\n Nilai r harus kurang dari dari n";
        kombinasi();
    }
    p = n - k;
    N = fak(n);
    K = fak(k);
    cout << "\n (n-r)! -> ";
    P = fak(p);
    cout << "\n Maka hasil kombinasi : " << N/(K * P);
    cout << "\n \n";
    pilih();
}
int main(int argc, char *argv[]){
    Matdis z;
    z.pilih();
    system("pause");
    return 0;
}