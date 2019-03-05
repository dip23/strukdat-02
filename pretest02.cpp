/*
Nama	: Difa Bagasputra M
NPM		: 140810180057
Kelas	: A
Tanggal	: 5 Maret 2019
*/

#include<iostream>
using namespace std;

void moveZeroToEnd(int arr[], int n){}
void input(int (&arr)[100], int& n){
	cout<<"Masukkan panjang data : ";cin>>n;
	cout<<"Masukkan Data : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void output(int arr[], int n){
	cout<<"Hasil : ";
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			arr[n]=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[100];
	int n;
	input(arr,n);
	moveZeroToEnd(arr,n);
	output(arr,n);
}
	 
