#include <iostream>
#include <fstream>
#include <iomanip>
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
        void tambah();
        void masukkan();
        void cetak();
        void sortKtp();
    private:
        dataDiri data[maks];
};

void KTP::tambah(){
    cin.ignore();
    for (int i = 0; i < maks; i++){
        cout << "Data Ke-" << i + 1 << endl;
        cout << "Masukan Provinsi : ";
        getline(cin, data[i].provinsi);
        cout << "Masukan Kabupaten : ";
        getline(cin, data[i].kab );
        cout << "Masukan NIK : ";
        getline(cin, data[i].nik);
        cout << "Masukan nama : ";
        getline(cin, data[i].nama);
        cout << "masukan ttl : ";
        getline(cin, data[i].ttl);
        cout << "masukan jenis kelamin : ";
        getline(cin, data[i].jenis);
        cout << "Masukan Golongan Darah : ";
        getline(cin, data[i].golDarah);
        cout << "masukan alamat : ";
        getline(cin, data[i].almt);
        cout << "masukan rt/rw : ";
        getline(cin, data[i].rtrw);
        cout << "masukan Kelurahan/Desa : ";
        getline(cin,data[i].desa);
        cout << "Masukan Kecamatan : ";
        getline(cin, data[i].kecamatan);
        cout << "masukan agama : ";
        getline(cin, data[i].agama);
        cout << "masukan status perkawinan : ";
        getline(cin, data[i].status);
        cout << "masukan pekerjaan : ";
        getline(cin, data[i].pekerjaan);
        cout << "masukan kewarganegaraan : ";
        getline(cin, data[i].warga);
        cout << endl;
    }
}

void KTP::sortKtp() {
    for (int i = 0; i < maks; i ++){
        for (int j = i+1; j < maks; j++){
            if (data[i].nama > data[j].nama){
                swap(data[i], data[j]);
            }
        }
    }
}

void KTP::masukkan(){
    ofstream outFile("dataKtp.txt", ios_base::app | ios_base::out );
    if (!outFile) {
        cout << "Tidak ada data"; 
        exit(-1);
    }
    else{
        for (int i = 0; i < maks; i++){
            outFile << "\033[44m==================================================================\033[m" << endl;
            outFile << left << "\033[44m||                  PROVINSI " << setw(35) << data[i].provinsi << "||\033[m" << endl;
            outFile << left << "\033[44m||                 KABUPATEN " << setw(35) << data[i].kab << "||\033[m"<<endl ;
            outFile << "\033[44m||                                                              ||\033[m" << endl;
            outFile << left << "\033[44m|| NIK              : " << setw(42) << data[i].nik       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Nama             : " << setw(42) << data[i].nama      << "||\033[m" << endl;
            outFile << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << data[i].ttl       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << data[i].jenis     
                                           << "Gol. Darah   : " << setw(9)  << data[i].golDarah  << "||\033[m" << endl;
            outFile << left << "\033[44m|| Alamat           : " << setw(42) << data[i].almt      << "||\033[m" << endl;
            outFile << left << "\033[44m||     RT/RW        : " << setw(42) << data[i].rtrw      << "||\033[m" << endl;
            outFile << left << "\033[44m||     Kel/Desa     : " << setw(42) << data[i].desa      << "||\033[m" <<endl;
            outFile << left << "\033[44m||     Kecamatan    : " << setw(42) << data[i].kecamatan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Agama            : " << setw(42) << data[i].agama     << "||\033[m" << endl;
            outFile << left << "\033[44m|| Status Perkawinan: " << setw(42) << data[i].status    << "||\033[m" << endl;
            outFile << left << "\033[44m|| Pekerjaan        : " << setw(42) << data[i].pekerjaan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << data[i].warga     << "||\033[m" << endl;
            outFile << left << setw(69)  << "\033[44m|| Berlaku Hingga   : SEUMUR HIDUP"      << "||\033[m" << endl;
            outFile << "\033[44m||                                                              ||\033[m" << endl;
            outFile << "\033[44m==================================================================\033[m" << endl << endl;
        }
    }
}

void KTP::cetak(){
    string line;
    int totalKtp = 0;
    ifstream inFile ("dataKtp.txt");
    if(!inFile){
        cout<<"Data tidak tersedia"<<endl;
        exit(-2);
    }
    else{
        while(getline(inFile, line)){
            cout << line << endl;
            totalKtp++;
        }
        cout << "Total KTP : " << totalKtp / 20 << endl;
    }
}

int main(){
    KTP ktp;
    bool repeat = true;
    do{
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Semua Data" << endl;
        cout << "3. keluar" << endl;
        int pilihan;
        cout << "Pilih : ";
        cin >> pilihan;
        switch(pilihan){
            case 1:
                ktp.tambah();
                ktp.sortKtp();
                ktp.masukkan();
                break;
            case 2:
                ktp.cetak();
                break;
            case 3:
                repeat = false; 
                break;
            default:
                cout<<"Pilihan anda salah"; 
                break;
        }
        system("pause");
        system("cls");
    } while(repeat);
    return 0;
}