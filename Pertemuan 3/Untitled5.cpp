#include<iostream>
using namespace std;

int main(){
	string  Nama;
	int a, b, c ,d;
	cout<<"Program hitung nilai rata-rata";
	cout<<"\nNama siswa : ";
	getline (cin,Nama);
	cout<<"nilai pertandingan I : ";
	cin>>a;
	cout<<"nilai pertandingan II : ";
	cin>>b;
	cout<<"nilai pertandingan III : ";
	cin>>c;
	d=(a+b+c)/3;
	cout<<"Siswa bernama "<<Nama;
	cout<<"\nMemperoleh nilai rata-rata : "<<d<<endl;
	
	
	if(d>=1&&d<=100){
	
	    if(d>=85&&d<=100){
		cout<<" Hadiah yang didapat adalah komputer core i5";
	}
	}
	else {
		cout<<" Hadiah yang didapat adalah hiburan";
	}
	  if(d>=70&&d<85){
		cout<<" Hadiah yang didapat adalah uang sebesar Rp. 2.500.000";
		
}
	
}
