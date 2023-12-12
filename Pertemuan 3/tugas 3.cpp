#include<iostream>
using namespace std;

int main(){
	string  Nama;
	int a, b, c ,d;
	cout<<"Program hitung nilai rata-rata";
	cout<<"\nNama siswa : ";
	cin>>Nama;
	cout<<"nilai pertandingan 1 : ";
	cin>>a;
	cout<<"nilai pertandingan 2 : ";
	cin>>b;
	cout<<"nilai pertandingan 3 : ";
	cin>>c;
	d=(a+b+c)/2;
	cout<<"Siswa bernama "<<Nama;
	cout<<" memperoleh";
	if(d>=85){
		cout<<" Hadiah yang didapat adalah komputer core i5";
	}
	else if(d>=70){
		cout<<" Hadiah yang didapat adalah uang sebesar Rp. 2.500.000";
	}
	else {
		cout<<" Hadiah yang didapat adalah hiburan";
	}
	
	
}
