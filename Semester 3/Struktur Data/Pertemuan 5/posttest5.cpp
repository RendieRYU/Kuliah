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
        void addAtHead(KTP data);
        void addAtTail(KTP data);
        void deleteAtHead();
        void deleteAtTail();
        void printList();
};

void LinkedList::addAtHead(KTP data) {
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
        newNode->next = head;
        head = newNode;
        temp->next = head;
    }
}

void LinkedList::addAtTail(KTP data) {
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

void LinkedList::deleteAtHead() {
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
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
    }
}

void LinkedList::deleteAtTail() {
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
    } else {
        Node* temp = head;
        Node* prev = NULL;
        while(temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL) {
            delete head;
            head = NULL;
        } else {
            prev->next = head;
            delete temp;
        }
    }
}

void LinkedList::printList() {
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
    } else {
        Node* temp = head;
        int count = 1;
        do{
            cout << "Data ke-" << count << endl;
            cout << "\033[44m==================================================================\033[m" << endl;
            cout << left << "\033[44m||                  PROVINSI " << setw(35) << temp->data.provinsi << "||\033[m" << endl;
            cout << left << "\033[44m||                 KABUPATEN " << setw(35) << temp->data.kab << "||\033[m"<<endl ;
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
    cout << "Masukan Kabupaten : ";
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
        cout << "|1. Menambah Data Dari Depan       |" << endl;
        cout << "|2. Menambah Data Dari Belakang    |" << endl;
        cout << "|3. Menghapus Data Dari Depan      |" << endl; 
        cout << "|4. Menghapus Data Dari Belakang   |" << endl;
        cout << "|5. Menampilkan Data               |" << endl;
        cout << "|6. Exit                           |" << endl;
        cout << "+==================================+" << endl << endl;
        cout << "Masukan Pilian: ";
        cin >> choice;

        switch(choice) {
            case 1:
                ktp = inputData();
                ktp_list.addAtHead(ktp);
                system("pause");
                break;
            case 2:
                ktp = inputData();
                ktp_list.addAtTail(ktp);
                system("pause");
                break;
            case 3:
                ktp_list.deleteAtHead();
                cout << "Berhasil menghapus data dari depan" << endl;
                system("pause");
                break;
            case 4:
                ktp_list.deleteAtTail();
                cout << "Berhasil menghapus data dari belakang" << endl;
                system("pause");
                break;
            case 5:
                ktp_list.printList();
                system("pause");
                break;
            case 6:
                cout << "Keluar dari program.";
                system("pause");
                break;
            default:
                cout << "Pilihan tidak valid.";
                system("pause");
                break;
        }
    } while(choice != 6);
    return 0;
}