#include<iostream>
using namespace std;
int main(){

struct mahasiswa{
	char nim[9];
	char nama[15];
	float nilai;
};

mahasiswa mahasiswa;
cout<<"Masukan nim ";
cin>>mahasiswa.nim;
cout<<"Masukan nama ";
cin>>mahasiswa.nama;
cout<<"Masukan nilai akhir ";
cin>>mahasiswa.nilai;
cout<<"\n\n data yang diinput adalah\n\n";
cout<<"nim "<<mahasiswa.nim<<endl;
cout<<"nama "<<mahasiswa.nama<<endl;
cout<<"nilai akhir "<<mahasiswa.nilai<<endl;

}
