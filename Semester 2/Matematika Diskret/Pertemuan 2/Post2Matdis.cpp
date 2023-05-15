#include <iostream>
using namespace std;
int main(){
    //inisialisasi variablea
    int A;
    int B;
    int C;
    int D;
    string a[10];
    string b[10];
    int c[10];
    int d[10];

    //warna
    system("COLOR 02");

    //watermark
    cout<<endl;
    cout<<"+===========================================+"<<endl;
    cout<<"| Nama  : Rendie Abdi Saputra               |"<<endl;
    cout<<"| NIM   : 2200018094                        |"<<endl;
    cout<<"| Kelas : A                                 |"<<endl;
    cout<<"| Slot  : Selasa 10.30                      |"<<endl;
    cout<<"+===========================================+"<<endl;
    cout<<endl;

    //Himpunan a
    cout<<"Masukkan banyak elemen himpunan a : ";
    cin>>A;
    for(int i = 0; i<A; i++){
        cout<<"Masukkan elemen himpunan a ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<endl;

    //Himpunan b
    cout<<"Masukkan banyak elemen himpunan b : ";
    cin>>B;
    for(int i = 0; i<B; i++){
        cout<<"Masukkan elemen himpunan b ke-"<<i+1<<" : ";
        cin>>b[i];
    }
    cout<<endl;

    //Himpunan c
    cout<<"Masukkan banyak elemen himpunan c : ";
    cin>>C;
    for(int i = 0; i<C; i++){
        cout<<"Masukkan elemen himpunan c ke-"<<i+1<<" : ";
        cin>>c[i];
    }
    cout<<endl;

    //Himpunan d
    cout<<"Masukkan banyak elemen himpunan d : ";
    cin>>D;
    for(int i = 0; i<D; i++){
        cout<<"Masukkan elemen himpunan d ke-"<<i+1<<" : ";
        cin>>d[i];
    }
    cout<<endl;

    cout<<"Hasil penggabungan himpunan a dan b  : { ";
    for (int i = 0; i<A; i++){
        for (int j = 0; j<B; j++){
            cout<<"("<<a[i]<<", "<<b[j]<<") ";
        }
    } cout<<"}"<<endl;

    cout<<"Hasil himpunan d habis membagi c     : { ";
    for (int i = 0; i<C; i++){
        for (int j = 0; j<D; j++){
            if (c[i]%d[j]==0){
                cout<<"("<<d[j]<<", "<<c[i]<<"), ";
            }
        }
    } cout<<"}"<<endl;
    system("pause");
    return 0;
}