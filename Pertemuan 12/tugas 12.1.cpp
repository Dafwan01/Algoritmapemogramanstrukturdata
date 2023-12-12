#include<iostream>
using namespace std;
struct name{
	char name[20];
};

struct roll{
	char name[20];
	struct name info;
}data;
int main(){
	cout<<"Masukan nama mahasiswa ";
	cin>>data.info.name;
	cout<<"masukan status mahasiswa ";
	cin>>data.name;
	cout<<"Data store complete\n Name: "<<data.info.name<<" roll "<<data.name
	;
}
