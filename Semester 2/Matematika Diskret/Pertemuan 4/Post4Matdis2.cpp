#include <iostream> //Rendie Abdi Saputra - 2200018094
using namespace std; //anggap saja ini wm, malas bikin wm yang seperti biasanya. Ehe :v
class hitung{
    public:
        int proses();
        void input();
    private:
        int n;
        int f1;
        int f2;
        int jumlah;
};
void hitung::input(){
    cout << "Masukkan nilai n: ";
    cin >> n;
}
int hitung::proses(){
    f1 = 0;
    f2 = 1;
    if (n == 0){
        return f1;
    }
    for (int i = 1; i < n; i++){
        jumlah = f1 + f2;
        f1 = f2;
        f2 = jumlah;
    }
    cout << "Bilangan fibonacci ke-" << n << " = " << jumlah; 
    return jumlah;
}
int main(){
    cout << "Program sederhana operasi fibonacci" << endl;
    hitung fibonacci;
    fibonacci.input();
    fibonacci.proses();
    return 0;
}

