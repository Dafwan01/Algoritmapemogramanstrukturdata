#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	char kalimat[200];
	cout<<"masukan kalimat";
	cin.getline(kalimat, sizeof(kalimat));
	
	int x=strlen(kalimat);
	cout<<"kalimat terbalik";
	
	for(int i=x-1;i>=0;i--){
		cout<<kalimat[i];
	}
	
	cout<<endl;}
