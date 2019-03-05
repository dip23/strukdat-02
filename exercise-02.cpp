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

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater data;
	data.room=7;
	strcpy(data.seat,"J9");
	strcpy(data.movieTitle,"Adit & Jarwo");
	
	cout<<"Room : "<<data.room<<endl;
	cout<<"Seat : "<<data.seat<<endl;
	cout<<"Judul Film : "<<data.movieTitle<<endl;
}
	 
