#include <iostream>
using namespace std;
int main(){
    //inisialisasi variable
    string a[]={"changmin", "jaejoong"};
    string b[]={"f8291", "n4810", "b0637"};
    int c[]={2, 3, 4};
    int d[]={2, 4, 8, 10, 12};

    //watermark
    cout<<endl;
    cout<<"+===========================================+"<<endl;
    cout<<"| Nama  : Rendie Abdi Saputra               |"<<endl;
    cout<<"| NIM   : 2200018094                        |"<<endl;
    cout<<"| Kelas : A                                 |"<<endl;
    cout<<"| Slot  : Selasa 10.30                      |"<<endl;
    cout<<"+===========================================+"<<endl;
    cout<<endl;

    cout<<"Hasil penggabungan himpunan a dan b  : { ";
    for (int i = 0; i<2; i++){
        for (int j = 0; j<3; j++){
            cout<<"("<<a[i]<<", "<<b[j]<<") ";
        }
    } cout<<"}"<<endl;

    cout<<"Hasil himpunan c habis membagi d     : { ";
    for (int i = 0; i<3; i++){
        for (int j = 0; j<5; j++){
            if (d[j]%c[i]==0){
                cout<<"("<<c[i]<<", "<<d[j]<<"), ";
            }
        }
    } cout<<"}"<<endl;
    system("pause");
    return 0;
}