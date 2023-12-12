#include<iostream>
using namespace std;

struct siswa{
	int induk;
	string nama;
	float nilai;

};

int main(){
siswa jery={1,"jery",85.5};	
siswa tono={2,"tono",89.9};	
cout<<jery.nama<<"nilai"<<jery.nilai<<"induk"<<jery.induk<<endl;
cout<<tono.nama<<"nilai"<<tono.nilai<<"induk"<<tono.induk;
}
