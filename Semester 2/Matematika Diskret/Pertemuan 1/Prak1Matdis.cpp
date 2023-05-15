#include <iostream>
#include <conio.h>

using namespace std; 
//Rendie Abdi Saputra (2200018094) {INI WATERMARK}
int main(){
	cout<<endl;
	cout<<"Rendie Abdi Saputra (2200018094) {INI WATERMARK} :V"<<endl<<endl;
	int i, j, a[20], b[20], banyakA, banyakB;
	cout<<"IRISAN & GABUNGAN 2 HIMPUNAN\n";
	cout<<"============================\n\n";

	cout<<"Masukkan banyaknya anggota himpunan A : "; 
	cin>>banyakA;

	for(i=0; i<banyakA; i++){
		cout<<"Masukkan anggota " << i+1 << " : "; 
		cin>>a[i];
	}

	cout<<"\nMasukkan banyaknya anggota himpunan B : "; 
	cin>>banyakB;
	for(i=0; i<banyakB; i++){
		cout<<"Masukkan anggota " << i+1 << " : "; 
		cin>>b[i];
	}

	cout<<"\nHimpunan A = { ";
	for(i=0; i<banyakA; i++){ 
		cout<<a[i]<<" ";
	}
	cout<<"}";
	//Rendie Abdi Saputra (2200018094) {INI WATERMARK}
	cout<<"\nHimpunan B = { ";
	for(i=0; i<banyakB; i++){ 
		cout<<b[i]<<" ";
	}
	cout<<"}";

	cout<<"\n\n\n"; 
	
	cout<<"A irisan B = { ";
	for(i=0; i<banyakA; i++){
		for(j=0; j<banyakB; j++){ 
			if(a[i] == b[j]){
				cout<<a[i]<<" ";
			}
		}
	}
	cout<<"}";

	cout<<"\n\n";
	cout<<"A gabungan B = { ";
	for(i=0; i<banyakA; i++){
		cout<<a[i]<<" ";
	}
	for(i=0; i<banyakB; i++){ 
		cout<<b[i]<<" ";
	}
	cout<<"}";
	cout<<endl;
	cout<<"Tekan sembarang untuk keluar ..."; 
	getch();
	return 0;
}