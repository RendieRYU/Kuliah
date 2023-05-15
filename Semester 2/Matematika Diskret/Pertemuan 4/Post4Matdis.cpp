#include <iostream> //Rendie Abdi Saputra - 2200018094
using namespace std; //anggap saja ini wm, malas bikin wm yang seperti biasanya. Ehe :v
class hitung{
    public:
        int proses();
        void input();

    private:
        int n;
        int jumlah;
};
void hitung::input(){
    cout << "Masukkan nilai n: ";
    cin >> n;
}
int hitung::proses(){
    jumlah = 1;
    cout << "!"<< n << " = ";
    for (int i = n; i >= 1; i--){
        jumlah = jumlah * i;
        cout << i;
        if (i > 1){
            cout << " x ";
        }
        if (i == 1){
            cout << " = " << jumlah;
        }
    }
    return jumlah;
}
main(){
    cout << "Program sederhana menghitung faktorial" << endl;
    hitung faktorial;
    faktorial.input();
    faktorial.proses();
    return 0;
}