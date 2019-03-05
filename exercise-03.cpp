/*
Nama	: Difa Bagasputra M
NPM		: 140810180057
Kelas	: A
Tanggal	: 5 Maret 2019
Deskripsi	: Program untuk mencetak data pegawai secara ascending berdasar nip dan cetak gaji
*/

#include <iostream>
using namespace std;

struct Pegawai{
    char NIP[8];
    char nama[100];
    int gol;
    int gaji;
};
typedef Pegawai LarikPgw[10];

void cariGaji(LarikPgw& pgw,int a){
	if(pgw[a].gol==1)
		pgw[a].gaji=2000000;
	if(pgw[a].gol==2)
		pgw[a].gaji=3000000;
	if(pgw[a].gol==3)
		pgw[a].gaji=5000000;
	if(pgw[a].gol==4)
		pgw[a].gaji=8000000;
}

void inputPegawai(LarikPgw& pgw, int n) {
    for(int i = 0; i < n; i++) {
        cout << "Masukkan data Pegawai ke-" << i + 1 << endl;
        cout << "NIP : "; cin >> pgw[i].NIP;
        cout << "Nama : "; cin.ignore();cin.getline(pgw[i].nama, 100);
        cout << "Golongan : "; cin >> pgw[i].gol;
        cariGaji(pgw,i);
        cout << endl;
    }
}

int rataGaji(LarikPgw& pgw, int n){
	int temp=0;
	for(int i=0;i<n;i++){
		temp+=pgw[i].gaji;
	}
	return temp/n;
}

void gajiTerendah(LarikPgw pgw, int n){
	for(int i=0;i<n;i++){
		if(pgw[i].gol==1){
			cout<<"Pegawai dengan Gaji terendah : "<<pgw[i].nama<<endl;
		}
	}
}

void gajiTertinggi(LarikPgw pgw, int n){
	for(int i=0;i<n;i++){
		if(pgw[i].gol==4){
			cout<<"Pegawai dengan Gaji tertinggi : "<<pgw[i].nama<<endl;
		}
	}
}

void cetakDaftar(LarikPgw pgw, int n) {
    cout<<"Data Pegawai\n";
    for(int i = 0; i < n; i++) {
		cout<<"Pegawai ke - "<<i+1<<endl;
        cout<<"NIP : "<<pgw[i].NIP<<endl;
        cout<<"Nama :"<<pgw[i].nama<<endl;
        cout<<"Golongan : "<<pgw[i].gol<<endl;
        cout<<"Gaji : "<<pgw[i].gaji<<endl;
        cout<<endl;
    }
}

int main() {
    LarikPgw pgw;
    int n;
    cout<<"Masukkan Banyak data : ";cin>>n;
    inputPegawai(pgw, n);
    cetakDaftar(pgw, n);
    cout<<"Rata-rata Gaji : "<<rataGaji(pgw,n)<<endl;
}
	 
