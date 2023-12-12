#include<iostream>
using namespace std;

int main(){
	int a,c,jb=0;
	char b;
	string l[10];
	int h[10];
	int j[10];
	int jh[10];
	cout<<"Gerobak Fried chicken"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Kode\tJenis\tHarga"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<" D\tDada\tRp. 2500"<<endl;
	cout<<" P\tPaha\tRp. 2000"<<endl;
	cout<<" S\tSayap\tRp. 1500"<<endl;
	cout<<"-----------------------"<<endl;
	
	cout<<"Banyak jenis : ";
	cin>>a;
	for(int z=0;z<a;z++){
		cout<<"\nJenis ke "<<z+1;
		cout<<"\nJenis Potong [D/P/S] : ";
		cin>>b;
		cout<<"\nBanyak Potong : ";
		cin>>c;
		
		if(b=='D'){
			l[z]="Dada";
			j[z]=c;
			h[z]=2500;
		}
		else if(b=='P'){
			l[z]="Paha";
			j[z]=c;
			h[z]=2000;
		}
		else if(b=='S'){
			l[z]="Sayap";
			j[z]=c;
			h[z]=1500;
		}
		jh[z]=h[z]*j[z];
		jb+=jh[z];
	}
	int pjk=jb*10/100;
	int t=pjk+jb;
	cout<<"\t\tGerobak Fried chicken"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"N0.\tJenis\tHarga\tBanyak\tJumlah"<<endl;
	cout<<"\tPotong\tSatuan\tBeli\tHarga"<<endl;
	for(int y=0;y<a;y++){
		cout<<y+1<<"\t"<<l[y]<<"\t"<<h[y]<<"\t"<<j[y]<<"\tRP"<<jh[y]<<endl;
	}
	cout<<"---------------------------------------------"<<endl;
	cout<<"\n\t\t\tJumlah Bayar\tRP"<<jb;
	cout<<"\n\t\t\tPajak 10%\tRP"<<pjk;
	cout<<"\n\t\t\tTotal Bayar\tRP"<<t;
}
