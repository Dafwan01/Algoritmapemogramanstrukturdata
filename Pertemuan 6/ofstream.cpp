#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main() {
	ofstream myfile;
	myfile.open("test.exe",ios::app);
	cout<<"operasi file ofstream\n";
	if(!myfile.fail()){
		myfile<<"belajar ofstream\n";
		myfile.close();
		
		cout<<"text telah ditulis\n";
	}else{
		cout<<"file tidak ditemukan";
	}
	getchar();
}
