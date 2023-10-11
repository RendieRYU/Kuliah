#include <iostream>
#include <fstream>
#include <iomanip>
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
    private:
        dataDiri data;
};

void KTP::tambah(){
    cin.ignore();
    cout << "Masukan Provinsi : ";
    getline(cin, data.provinsi);
    cout << "Masukan Kabupaten : ";
    getline(cin, data.kab );
    cout << "Masukan NIK : ";
    getline(cin, data.nik);
    cout << "Masukan nama : ";
	getline(cin, data.nama);
	cout << "masukan ttl : ";
	getline(cin, data.ttl);
	cout << "masukan jenis kelamin : ";
	getline(cin, data.jenis);
    cout << "Masukan Golongan Darah : ";
    getline(cin, data.golDarah);
	cout << "masukan alamat : ";
	getline(cin, data.almt);
	cout << "masukan rt/rw : ";
	getline(cin, data.rtrw);
    cout << "masukan Kelurahan/Desa : ";
    getline(cin,data.desa);
    cout << "Masukan Kecamatan : ";
    getline(cin, data.kecamatan);
	cout << "masukan agama : ";
	getline(cin, data.agama);
	cout << "masukan status perkawinan : ";
	getline(cin, data.status);
	cout << "masukan pekerjaan : ";
	getline(cin, data.pekerjaan);
	cout << "masukan kewarganegaraan : ";
	getline(cin, data.warga);
}

void KTP::masukkan(){
    ofstream outFile("dataKtp.txt", ios_base::app | ios_base::out );
    if (!outFile) {
        cout << "Tidak ada data"; 
        exit(-1);
    }
    else{
        outFile << "\033[44m==================================================================\033[m" << endl;
        outFile << left << "\033[44m||                  PROVINSI " << setw(35) << data.provinsi << "||\033[m" << endl;
        outFile << left << "\033[44m||                 KABUPATEN " << setw(35) << data.kab << "||\033[m"<<endl ;
        outFile << "\033[44m||                                                              ||\033[m" << endl;
        outFile << left << "\033[44m|| NIK              : " << setw(42) << data.nik       << "||\033[m" << endl;
        outFile << left << "\033[44m|| Nama             : " << setw(42) << data.nama      << "||\033[m" << endl;
        outFile << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << data.ttl       << "||\033[m" << endl;
        outFile << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << data.jenis     
                                       << "Gol. Darah   : " << setw(9) << data.golDarah << "||\033[m" << endl;
        outFile << left << "\033[44m|| Alamat           : " << setw(42) << data.almt      << "||\033[m" << endl;
        outFile << left << "\033[44m||     RT/RW        : " << setw(42) << data.rtrw      << "||\033[m" << endl;
        outFile << left << "\033[44m||     Kel/Desa     : " << setw(42) << data.desa      << "||\033[m" <<endl;
        outFile << left << "\033[44m||     Kecamatan    : " << setw(42) << data.kecamatan << "||\033[m" << endl;
        outFile << left << "\033[44m|| Agama            : " << setw(42) << data.agama     << "||\033[m" << endl;
        outFile << left << "\033[44m|| Status Perkawinan: " << setw(42) << data.status    << "||\033[m" << endl;
        outFile << left << "\033[44m|| Pekerjaan        : " << setw(42) << data.pekerjaan << "||\033[m" << endl;
        outFile << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << data.warga     << "||\033[m" << endl;
        outFile << left << setw(69)  << "\033[44m|| Berlaku Hingga   : SEUMUR HIDUP"      << "||\033[m" << endl;
        outFile << "\033[44m||                                                              ||\033[m" << endl;
        outFile << "\033[44m==================================================================\033[m" << endl << endl;

    }
}

void KTP::cetak(){
    string line;
    ifstream inFile ("dataKtp.txt");
    if(!inFile){
        cout<<"Data tidak tersedia"<<endl;
        exit(-2);
    }
    else{
        while(getline(inFile, line)){
            cout << line << endl;
        }
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