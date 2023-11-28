#include <iostream>
#include <iomanip>
using namespace std;

struct KTP{
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

struct Node {
    KTP data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() : head(NULL) {}
        void enqueue(KTP data);
        void dequeue();
        void printQueue();
        void outputDataHeader(string data);
};

void LinkedList::enqueue(KTP data) {
    Node* newNode = new Node();
    newNode->data = data;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void LinkedList::dequeue() {
    if (head == NULL) {
        cout << "Data antrian linked list kosong" << endl;
    } else {
        Node* temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            head = head->next;
            delete temp->next;
            temp->next = head;
        }
        cout << "Berhasil menghapus antrian data" << endl;
    }
}

void LinkedList::outputDataHeader(string data){
    cout << left << "\033[44m||";
    if (data.length() == 66){
        cout << data;
    } else {
        if (data.length() % 2 == 0){
            for(int j = 31; j > data.length()/2; j--){
                cout << " ";
            }
            cout << data;
            for(int j = 31; j > data.length()/2; j--){
                cout << " ";
            }
        }
        else {
            for(int j = 30; j > data.length()/2; j--){
                cout << " ";
            }
            cout << data;
            for(int j = 31; j > data.length()/2; j--){
                cout << " ";
            }
        }
    }
    cout << "||\033[m" << endl;
}

void LinkedList::printQueue() {
    if (head == NULL) {
        cout << "Data antrian linked list masih kosong" << endl;
    } else {
        Node* temp = head;
        int count = 1;  
        do{
            cout << "Data ke-" << count << endl;
            cout << "\033[44m==================================================================\033[m" << endl;
            outputDataHeader(temp->data.provinsi);
            outputDataHeader(temp->data.kab);
            cout << "\033[44m||                                                              ||\033[m" << endl;
            cout << left << "\033[44m|| NIK              : " << setw(42) << temp->data.nik       << "||\033[m" << endl;
            cout << left << "\033[44m|| Nama             : " << setw(42) << temp->data.nama      << "||\033[m" << endl;
            cout << left << "\033[44m|| Tempat/Tgl Lahir : " << setw(42) << temp->data.ttl       << "||\033[m" << endl;
            cout << left << "\033[44m|| Jenis Kelamin    : " << setw(18) << temp->data.jenis     
                                        << "Gol. Darah   : " << setw(9)  << temp->data.golDarah  << "||\033[m" << endl;
            cout << left << "\033[44m|| Alamat           : " << setw(42) << temp->data.almt      << "||\033[m" << endl;
            cout << left << "\033[44m||     RT/RW        : " << setw(42) << temp->data.rtrw      << "||\033[m" << endl;
            cout << left << "\033[44m||     Kel/Desa     : " << setw(42) << temp->data.desa      << "||\033[m" <<endl;
            cout << left << "\033[44m||     Kecamatan    : " << setw(42) << temp->data.kecamatan << "||\033[m" << endl;
            cout << left << "\033[44m|| Agama            : " << setw(42) << temp->data.agama     << "||\033[m" << endl;
            cout << left << "\033[44m|| Status Perkawinan: " << setw(42) << temp->data.status    << "||\033[m" << endl;
            cout << left << "\033[44m|| Pekerjaan        : " << setw(42) << temp->data.pekerjaan << "||\033[m" << endl;
            cout << left << "\033[44m|| Kewarganegaraan  : " << setw(42) << temp->data.warga     << "||\033[m" << endl;
            cout << left << setw(69)  << "\033[44m|| Berlaku Hingga   : SEUMUR HIDUP"      << "||\033[m" << endl;
            cout << "\033[44m||                                                              ||\033[m" << endl;
            cout << "\033[44m==================================================================\033[m" << endl << endl;
            count++;
            temp = temp->next;
        }while(temp != head);
    }
}

KTP inputData() {
    KTP ktp;
    cin.ignore();
    cout << "Masukan Provinsi : ";
    getline(cin, ktp.provinsi);
    cout << "Masukan Kabupaten/Kota : ";
    getline(cin, ktp.kab);
    cout << "Masukan NIK : ";
    getline(cin, ktp.nik);
    cout << "Masukan nama : ";
    getline(cin, ktp.nama);
    cout << "Masukan ttl : ";
    getline(cin, ktp.ttl);
    cout << "Masukan jenis kelamin : ";
    getline(cin, ktp.jenis);
    cout << "Masukan Golongan Darah : ";
    getline(cin, ktp.golDarah);
    cout << "Masukan alamat : ";
    getline(cin, ktp.almt);
    cout << "Masukan rt/rw : ";
    getline(cin, ktp.rtrw);
    cout << "Masukan Kelurahan/Desa : ";
    getline(cin,ktp.desa);
    cout << "Masukan Kecamatan : ";
    getline(cin, ktp.kecamatan);
    cout << "Masukan agama : ";
    getline(cin, ktp.agama);
    cout << "Masukan status perkawinan : ";
    getline(cin, ktp.status);
    cout << "Masukan pekerjaan : ";
    getline(cin, ktp.pekerjaan);
    cout << "Masukan kewarganegaraan : ";
    getline(cin, ktp.warga);
    return ktp;
    
}

int main() {
    LinkedList ktp_list;
    int choice;
    KTP ktp;
    do {
        system("cls");
        cout << "+==================================+" << endl;
        cout << "|               MENU               |" << endl;
        cout << "+==================================+" << endl;
        cout << "|1. Menambah Antrian Data          |" << endl;
        cout << "|2. Menghapus Antrian Data         |" << endl; 
        cout << "|3. Menampilkan Data               |" << endl;
        cout << "|4. Exit                           |" << endl;
        cout << "+==================================+" << endl << endl;
        cout << "Masukan Pilian: ";
        cin >> choice;

        switch(choice) {
            case 1:
                ktp = inputData();
                ktp_list.enqueue(ktp);
                cout << "Berhasil menambahkan antrian data" << endl;
                system("pause");
                break;
            case 2:
                ktp_list.dequeue();
                system("pause");
                break;
            case 3:
                ktp_list.printQueue();
                system("pause");
                break;
            case 4:
                cout << "Keluar dari program.";
                system("pause");
                break;
            default:
                cout << "Pilihan tidak valid.";
                system("pause");
                break;
        }
    } while(choice != 4);
    return 0;
}