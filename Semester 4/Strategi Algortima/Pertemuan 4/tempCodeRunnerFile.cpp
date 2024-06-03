#include <iostream>
using namespace std;

int main(){
  int bul;
  int pel;
  int to;
  int so=0;
  cout << "masukkan jumlah saku bulan: ";
  cin >> bul;
  cout << "masukkan jumlah pengeluaran: ";
  cin >> pel;

  for (int i = 1; i <= pel; i++){
    cout << "masukkan tabungan bulan ke-" << i << ": ";
    cin >> to;
     so = so + to;
  }
  cout << "total pengeluaran: " <<  so << endl;
  cout << "total uang tabungan: " << bul << endl;
  cout << "sisa uang tabungan: " << bul-so << endl;
}