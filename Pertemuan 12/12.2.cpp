#include<iostream>
using namespace std;

struct nilai{
	int induk;
	string nama;
	float nilai;
}lucas, arkan;

int main(){
arkan.induk=1;
arkan.nama="arkan";
arkan.nilai=75.5;
lucas.induk=2;
lucas.nama="lucas";
lucas.nilai=89.9;

cout<<arkan.nama<<"induk "<<arkan.induk<<"nilai "<<arkan.nilai<<endl;
cout<<lucas.nama<<"induk "<<lucas.induk<<"nilai "<<lucas.nilai<<endl;
}
