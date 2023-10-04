#include <iostream>
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
int main(){
    dataDiri data;
    data.provinsi = "KALIMANTAN TENGAH";
    data.kab = "KOTAWARINGIN BARAT";
    data.nik = "6201052907040001";
    data.nama = "Rendie Abdi Saputra";
    data.ttl = "PANGKALAN BUN, 29-07-2004";
    data.golDarah = "B";
    data.jenis ="LAKI-LAKI";
    data.almt = "JL. A. YANI";
    data.rtrw = "006/003";
    data.desa = "SUMBER AGUNG";
    data.kecamatan = "PANGKALAN LADA";
    data.agama ="ISLAM";
    data.status = "BELUM KAWIN";
    data.pekerjaan = "PELAJAR/MAHASISWA";
    data.warga = "WNI";


        cout << "\033[44m==================================================================\033[m" << endl;
        cout << left << "\033[44m||                  PROVINSI " << setw(35) << data.provinsi << "||\033[m" << endl;
        cout << left << "\033[44m||                 KABUPATEN " << setw(35) << data.kab << "||\033[m"<<endl ;
        cout << "\033[44m||                                                              ||\033[m" << endl;
        cout << left << "\033[44m|| NIK              : " << setw(42) << data.nik       << "||\033[m" << endl;
        cout << left << "\033[44m|| Nama             : " << setw(42) << data.nama      << "||\033[m" << endl;
        cout << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << data.ttl       << "||\033[m" << endl;
        cout << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << data.jenis     << "Gol. Darah   : " << setw(9) << data.golDarah << "||\033[m" << endl;
        cout << left << "\033[44m|| Alamat           : " << setw(42) << data.almt      << "||\033[m" << endl;
        cout << left << "\033[44m||     RT/RW        : " << setw(42) << data.rtrw      << "||\033[m" << endl;
        cout << left << "\033[44m||     Kel/Desa     : " << setw(42) << data.desa      << "||\033[m" <<endl;
        cout << left << "\033[44m||     Kecamatan    : " << setw(42) << data.kecamatan << "||\033[m" << endl;
        cout << left << "\033[44m|| Agama            : " << setw(42) << data.agama     << "||\033[m" << endl;
        cout << left << "\033[44m|| Status Perkawinan: " << setw(42) << data.status    << "||\033[m" << endl;
        cout << left << "\033[44m|| Pekerjaan        : " << setw(42) << data.pekerjaan << "||\033[m" << endl;
        cout << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << data.warga     << "||\033[m" << endl;
        cout << left << setw(69)  << "\033[44m|| Berlaku Hingga   : SEUMUR HIDUP"      << "||\033[m" << endl;
        cout << "\033[44m||                                                              ||\033[m" << endl;
        cout << "\033[44m==================================================================\033[m" << endl;
}