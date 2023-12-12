#include <iostream>
using namespace std;
int main(){
	float a, b,c, d, e;
	cout<<"Menghitung luas lingkaran\n=========================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	b=3.14;
	c=a*a*b;
	cout<<"\nLuas lingkaran yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\nRumus lingkaran adalah: ";
	cout<<"\nL:phi x r x r";
	cout<<"\nL:"<<b<<"x"<<a<<"x"<<a;
	cout<<"\nLuas lingkaran: "<<c<<"cm^2"<<endl;
	
	cout<<"\nMenghitung luas lingkaran\n=============================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	c=a*a*b;
	cout<<"\nLuas lingkaran yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\nRumus lingkaran adalah: ";
	cout<<"\nL=phi x r x r";
	cout<<"\nL="<<b<<"x"<<a<<"x"<<a<<endl;
	cout<<"Luas lingkaran: "<<c<<"cm^2"<<endl;
	
	cout<<"\nMenghitung volume tabung\n=============================";
	cout<<"\nMasukan jari-jari lingkaran: ";
	cin>>a;
	cout<<"\nMasukan tinggi: ";
	cin>>d;
	e=a*a*b*d;
	cout<<"\nvolume tabung yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\ntinggi tabung\t:"<<d<<"cm";
	cout<<"\nRumus volume tabung adalah: ";
	cout<<"\nV=phi x r x r x t";
	cout<<"\nV="<<b<<"x"<<a<<"x"<<a<<"x"<<d;
	cout<<"\nvolume tabung: "<<e<<"cm^3"<<endl;
	
	cout<<"\nMenghitung volume tabung\n=============================";
	cout<<"\nMasukan jari-jari: ";
	cin>>a;
	cout<<"\nMasukan tinggi: ";
	cin>>d;
	e=a*a*b*d;
	cout<<"\nvolume tabung yang diketahui :";
	cout<<"\nJari-jari\t:"<<a<<"cm";
	cout<<"\nphi\t\t:"<<b<<"cm";
	cout<<"\ntinggi tabung\t:"<<d<<"cm";
	cout<<"\nRumus volume tabung adalah: ";
	cout<<"\nV=phi x r x r x t";
	cout<<"\nV="<<b<<"x"<<a<<"x"<<a<<"x"<<d<<endl;
	cout<<"volume tabung: "<<e<<"cm^3";
	
}
