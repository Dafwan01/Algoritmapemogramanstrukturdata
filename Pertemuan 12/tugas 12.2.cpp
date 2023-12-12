#include<iostream>
using namespace std;

struct mhs{
	char nama[20],matkul[15];
	int sks,nim;
};
	mhs bayar[2];
int main(){

	int bts,var[2],tetap[2];
	for(int i=0;i<2;i++){
		cout<<"----------------\n\n";
		cout<<"Nama maba ";
		cin>>bayar[i].nama;
		cout<<"NIM ";
		cin>>bayar[i].nim;
		cout<<"Mata kuliah ";
		cin>>bayar[i].matkul;
		cout<<"Jumlah sks ";
		cin>>bayar[i].sks;
		
		if(bayar[i].sks==0){
			tetap[i]=250000;
			var[i]=bayar[i].sks*250000;
		}	
		else if(bayar[i].sks==2){
			tetap[i]=300000;
			var[i]=bayar[i].sks*300000;
		
		}
	}
		for(int i=0;i<2;i++){
			cout<<"\nNama= "<<bayar[i].nama;
			cout<<"\nNIM= "<<bayar[i].nim;
			cout<<"\nMata Kuliah= "<<bayar[i].matkul;
			cout<<"\nJumlah SKS= "<<bayar[i].sks;
			cout<<"\nSPP Tetap= "<<tetap[i];
			cout<<"\nSPP variabel= "<<var[i];
		
		}
	

}
