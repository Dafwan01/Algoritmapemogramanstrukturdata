#include<iostream>
using namespace std;

void persegi(){
	float a,b;
	cout<<"\nMenghitung luas Persegi\n=========================";
	cout<<"\nMasukan Panjang persegi: ";
    cin>>a;
	cout<<"Masukan Lebar persegi: ";
	cin>>b;
	float c=a*b;
	cout<<"\nLuas persegi yang diketahui :";
	cout<<"\nPanjang\t\t:"<<a<<"cm";
	cout<<"\nLebar\t\t:"<<b<<"cm";
	cout<<"\nRumus luas persegi adalah: ";
	cout<<"\nL=P x L";
	cout<<"\nL="<<a<<"x"<<b;
	cout<<"\nLuas Persegi: "<<c<<"cm^2"<<endl;
	
}

void lingkaran(){
	float a, b,c, d, e;
	cout<<"\nMenghitung luas lingkaran\n=========================";
	cout<<"\nMasukan jari-jari lingkaran: ";
	cin>>a;
	b=3.14;
	c=a*a*b;
	cout<<"\nLuas lingkaran yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\nRumus luas lingkaran adalah: ";
	cout<<"\nL=phi x r x r";
	cout<<"\nL="<<b<<"x"<<a<<"x"<<a;
	cout<<"\nLuas lingkaran: "<<c<<"cm^2"<<endl;
	
}
void tabung(){
	float a,d, b=3.14;
	cout<<"\nMenghitung volume tabung\n=============================";
	cout<<"\nMasukan jari-jari tabung: ";
	cin>>a;
	cout<<"Masukan tinggi tabung: ";
	cin>>d;
	float e=a*a*b*d;
	cout<<"\nvolume tabung yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\ntinggi tabung\t:"<<d<<"cm";
	cout<<"\nRumus volume tabung adalah: ";
	cout<<"\nV=phi x r x r x t";
	cout<<"\nV="<<b<<"x"<<a<<"x"<<a<<"x"<<d;
	cout<<"\nvolume tabung: "<<e<<"cm^3"<<endl;
}
int main(){
	char a;
	do{
	persegi();
	lingkaran();
	tabung();
	cout<<"\nApakah anda ingin mengulang?(y/n) : ";
	cin>>a;}
	while(a=='y'||a=='Y');
}
