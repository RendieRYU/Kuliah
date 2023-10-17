#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#define maks 7
using namespace std;

struct dataDiri {
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

class KTP {
public:
	void tambah();
	void masukkan();
	void cetak();
	void sortKtp();
	void cariJenisKelamin(char jenis);
    void masukkanDataJenisKelamin();
private:
	dataDiri data[maks];
    vector<dataDiri> lakiLaki;
	vector<dataDiri> perempuan;
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
        if(data[i].jenis == "LAKI-LAKI") {
			lakiLaki.push_back(data[i]);
		}
        if(data[i].jenis == "PEREMPUAN") {
			perempuan.push_back(data[i]);
		}
    }
}

void KTP::sortKtp() {
	for (int i = 0; i < maks; i ++) {
		for (int j = i+1; j < maks; j++) {
			if (data[i].nama > data[j].nama) {
				swap(data[i], data[j]);
			}
		}
	}
}

void KTP::masukkan() {
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

void KTP::masukkanDataJenisKelamin() {
    vector<dataDiri> *dataJenisKelamin;
	ofstream outFile("dataKtpSortingJenisKelamin.txt", ios_base::app | ios_base::out );
	if (!outFile) {
        cout << "Tidak ada data"; 
        exit(-1);
    }
    else{
	    dataJenisKelamin = &lakiLaki;
        for (int i = 0; i < (*dataJenisKelamin).size(); i++){
            outFile << "Data Laki-Laki: " << endl;
            outFile << "\033[44m==================================================================\033[m" << endl;
            outFile << left << "\033[44m||                  PROVINSI " << setw(35) << (*dataJenisKelamin)[i].provinsi << "||\033[m" << endl;
            outFile << left << "\033[44m||                 KABUPATEN " << setw(35) << (*dataJenisKelamin)[i].kab << "||\033[m"<<endl ;
            outFile << "\033[44m||                                                              ||\033[m" << endl;
            outFile << left << "\033[44m|| NIK              : " << setw(42) << (*dataJenisKelamin)[i].nik       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Nama             : " << setw(42) << (*dataJenisKelamin)[i].nama      << "||\033[m" << endl;
            outFile << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << (*dataJenisKelamin)[i].ttl       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << (*dataJenisKelamin)[i].jenis     
                                           << "Gol. Darah   : " << setw(9)  << (*dataJenisKelamin)[i].golDarah  << "||\033[m" << endl;
            outFile << left << "\033[44m|| Alamat           : " << setw(42) << (*dataJenisKelamin)[i].almt      << "||\033[m" << endl;
            outFile << left << "\033[44m||     RT/RW        : " << setw(42) << (*dataJenisKelamin)[i].rtrw      << "||\033[m" << endl;
            outFile << left << "\033[44m||     Kel/Desa     : " << setw(42) << (*dataJenisKelamin)[i].desa      << "||\033[m" <<endl;
            outFile << left << "\033[44m||     Kecamatan    : " << setw(42) << (*dataJenisKelamin)[i].kecamatan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Agama            : " << setw(42) << (*dataJenisKelamin)[i].agama     << "||\033[m" << endl;
            outFile << left << "\033[44m|| Status Perkawinan: " << setw(42) << (*dataJenisKelamin)[i].status    << "||\033[m" << endl;
            outFile << left << "\033[44m|| Pekerjaan        : " << setw(42) << (*dataJenisKelamin)[i].pekerjaan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << (*dataJenisKelamin)[i].warga     << "||\033[m" << endl;
            outFile << left << setw(69)  << "\033[44m|| Berlaku Hingga   : SEUMUR HIDUP"      << "||\033[m" << endl;
            outFile << "\033[44m||                                                              ||\033[m" << endl;
            outFile << "\033[44m==================================================================\033[m" << endl << endl;
        }

        dataJenisKelamin = &perempuan;
        for (int i = 0; i < (*dataJenisKelamin).size(); i++){
            outFile << "Data Perempuan: " << endl;
            outFile << "\033[44m==================================================================\033[m" << endl;
            outFile << left << "\033[44m||                  PROVINSI " << setw(35) << (*dataJenisKelamin)[i].provinsi << "||\033[m" << endl;
            outFile << left << "\033[44m||                 KABUPATEN " << setw(35) << (*dataJenisKelamin)[i].kab << "||\033[m"<<endl ;
            outFile << "\033[44m||                                                              ||\033[m" << endl;
            outFile << left << "\033[44m|| NIK              : " << setw(42) << (*dataJenisKelamin)[i].nik       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Nama             : " << setw(42) << (*dataJenisKelamin)[i].nama      << "||\033[m" << endl;
            outFile << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << (*dataJenisKelamin)[i].ttl       << "||\033[m" << endl;
            outFile << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << (*dataJenisKelamin)[i].jenis     
                                           << "Gol. Darah   : " << setw(9)  << (*dataJenisKelamin)[i].golDarah  << "||\033[m" << endl;
            outFile << left << "\033[44m|| Alamat           : " << setw(42) << (*dataJenisKelamin)[i].almt      << "||\033[m" << endl;
            outFile << left << "\033[44m||     RT/RW        : " << setw(42) << (*dataJenisKelamin)[i].rtrw      << "||\033[m" << endl;
            outFile << left << "\033[44m||     Kel/Desa     : " << setw(42) << (*dataJenisKelamin)[i].desa      << "||\033[m" <<endl;
            outFile << left << "\033[44m||     Kecamatan    : " << setw(42) << (*dataJenisKelamin)[i].kecamatan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Agama            : " << setw(42) << (*dataJenisKelamin)[i].agama     << "||\033[m" << endl;
            outFile << left << "\033[44m|| Status Perkawinan: " << setw(42) << (*dataJenisKelamin)[i].status    << "||\033[m" << endl;
            outFile << left << "\033[44m|| Pekerjaan        : " << setw(42) << (*dataJenisKelamin)[i].pekerjaan << "||\033[m" << endl;
            outFile << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << (*dataJenisKelamin)[i].warga     << "||\033[m" << endl;
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

void KTP::cariJenisKelamin(char jenis) {
    ifstream inFile("dataKtpSortingJenisKelamin.txt");
	vector<dataDiri> *dataJenisKelamin;
    string line;

	if(jenis == 'L') {
	    dataJenisKelamin = &lakiLaki;
	} else if(jenis == 'P') {
	    dataJenisKelamin = &perempuan;
    } else{
       cout<<"Input tidak valid."<<endl ;
	   return;
    }
    while (getline(inFile, line)) {
        if (line.find("Data") != string::npos && line.find(jenis) != string::npos) {
            for (int i = 0; i < 19; ++i) {
                cout << line << endl;
                getline(inFile, line);
            }
        }
    }

}


int main(){
	KTP ktp;
	bool repeat = true;
	do{
	    cout<<"1. Tambah Data"<<endl ;
	    cout<<"2. Tampilkan Semua Data"<<endl ;
	    cout<<"3. Cari Berdasarkan Jenis Kelamin"<<endl ;
	    cout<<"4. Keluar"<<endl ;

	    int pilihan ;
        cout << "Masukkan Pilihan : ";
	    cin >> pilihan ;

	    switch(pilihan){
	       case 1:
	           ktp.tambah();
	           ktp.sortKtp();
	           ktp.masukkan();
               ktp.masukkanDataJenisKelamin();
	           break ;

	       case 2:
	           ktp.cetak();
	           break ;

	       case 3: {
	            char jk ;
	            cin.ignore() ;
	            cout<<"Masukan Jenis Kelamin [L/P]: ";
	            cin>>jk ;
	            if(jk == 'L' || jk == 'P') {   
	                ktp.cariJenisKelamin(jk);  
	            } else{
	                cout << "Input tidak valid." << endl ;
	            }
                break ;    
            }

            case 4:
                repeat=false ;    
                break ;    

            default :
                repeat=true ;    
                break ;    
        }

        system("pause");
        system("cls");

    } while(repeat);
    return 0;
}