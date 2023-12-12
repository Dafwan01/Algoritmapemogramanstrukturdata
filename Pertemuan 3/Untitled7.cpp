#include<iostream>
using namespace std;

int main(){
	string  Nama;
	int a, b, c ,d;
	cout<<"Program hitung nilai rata-rata";
	cout<<"\nNama siswa : ";
	getline(cin,Nama);
	cout<<"nilai pertandingan I : ";
	cin>>a;
	cout<<"nilai pertandingan II : ";
	cin>>b;
	cout<<"nilai pertandingan III : ";
	cin>>c;
	d=(a+b+c)/3;
	cout<<"Siswa bernama "<<Nama;
	cout<<"\nMemperoleh nilai rata-rata : "<<d<<endl;
	
	
switch (d) {
		case 85 ... 100:
			cout<<"Anda Mendapatkan Komputer Core i5";
			break;
		case 70 ... 84:
			cout<< "Anda Mendapatkan Rp. 2.500.000";
			break;
		case 1 ... 69:
			cout<< "Anda Mendapatkan Hadiah Hiburan";
			break;
		default :
			cout<< "\nKosong";
		}
	}
