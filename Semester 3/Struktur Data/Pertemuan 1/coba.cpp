#include <iostream>
#define maks 7
using namespace std;
struct dataDiri{
    string provinsi;
    string kab;
    string nik;
    string nama;
    string golDarah;
    string ttl;
    string desa;
    string kecamatan;
    string jenis;
    string almt; 
	string rtrw;
	string agama;
	string status;
	string pekerjaan;
	string warga;
};

class KTP{
    public:
        void sortKtp();
        void tampung();
    private:
        dataDiri data[maks];
};

 

void KTP::sortKtp() {
    for (int i = 0; i < maks; i ++){
        for (int j = i+1; j < maks; j++){
            if (data[i].nama > data[j].nama){
                swap(data[i], data[j]);
            }
        }
    }
}