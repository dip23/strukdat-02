/*
Nama	: Difa Bagasputra M
NPM		: 140810180057
Kelas	: A
Tahun	: 2019
Deskripsi	: Program untuk mencetak data yang sudah di assign
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[2];
	char goldar[3];
};

int main(){
	Orang orang;
	orang.umur=10;
	strcpy(orang.nama,"fahmi");
	strcpy(orang.goldar,"O");
	strcpy(orang.jk,"L");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
}
	 
