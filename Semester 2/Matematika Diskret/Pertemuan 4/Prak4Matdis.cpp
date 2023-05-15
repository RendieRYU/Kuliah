#include <iostream>
using namespace std;
class hitung {
    public:
        int proses();
        int rekursif();
        void input();
        void watermark();

    private:
        int n;
        float rumus, jumlah, total;
};
void hitung::watermark(){
    cout<<"+===================================+"<<endl;
    cout<<"|  Nama  : Rendie Abdi Saputra      |"<<endl;
    cout<<"|  NIM   : 2200018094               |"<<endl;
    cout<<"|  Prodi : Informatika              |"<<endl;
    cout<<"|  Kelas : A                        |"<<endl;
    cout<<"|  Slot  : Selasa 10.30             |"<<endl;
    cout<<"+===================================+"<<endl;
}
void hitung::input(){
    cout<<"Masukkan nilai n: ";
    cin>>n;
}
int hitung::rekursif(){
    rumus = -1;
    if (n == 1){
        cout<<"("<<n<<")";
        return rumus;
    }
    else{
        rumus = rumus * -1;
        cout<<"("<<rumus<<"/"<<n<<")";
        return rumus / n + rekursif();
    }
}
int hitung::proses(){
    jumlah = 0; total = 0; rumus = -1;
    for(int i = 1; i<=n; i++){
        rumus = rumus * -1;
        total = rumus / i;
        jumlah += total;
        if (i == 1){
            cout<<"("<<total<<")";
        }
        if (i > 1){
            cout<<"+("<<total<<")";
        }      
    }
    cout<<endl;
    cout<<"Hasil penjumlahan deret = "<<jumlah;
    return jumlah;
}
int main(){
    cout<<"Program sederhana menghitung jumlah dari rumus 1 - (1/2) + (1/3) - (1/4) + ... + (1/n)"<<endl;
    hitung deret;
    deret.watermark();
    deret.input();
    deret.proses();
    return 0;
}