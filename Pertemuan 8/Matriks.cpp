#include<iostream>
using namespace std;

int main(){
	int z,x,y,w;
	cout<<"Program operasi matriks 2x2"<<endl;
	
	int matriks1[2][2];
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<"Masukan element matriks a ke "<<a<<" "<<b<<"= ";
			cin>>matriks1[a][b];
		}
		
	}
		int matriks2[2][2];
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<"Masukan element matriks b ke "<<a<<" "<<b<<"= ";
			cin>>matriks2[a][b];
		}
		
	}

	cout<<"Matriks a\n"<<matriks1[0][0]<<" "<<matriks1[0][1];
	cout<<"\n"<<matriks1[1][0]<<" "<<matriks1[1][1];
	
	cout<<"\nMatriks b\n"<<matriks2[0][0]<<" "<<matriks2[0][1];
	cout<<"\n"<<matriks2[1][0]<<" "<<matriks2[1][1];
	
	
//	penjumlahan
	z=matriks1[0][0]+matriks2[0][0];
	y=matriks1[0][1]+matriks2[0][1];
	x=matriks1[1][0]+matriks2[1][0];
	w=matriks1[1][1]+matriks2[1][1];
	
	cout<<"\nMatriks a+b=\n"<<z<<" "<<y;
	cout<<"\n"<<x<<" "<<w;
	
//	pengurangan
	int a=matriks1[0][0]-matriks2[0][0];
	int b=matriks1[0][1]-matriks2[0][1];
	int c=matriks1[1][0]-matriks2[1][0];
	int d=matriks1[1][1]-matriks2[1][1];
	
	
	cout<<"\nMatriks a-b=\n"<<a<<" "<<b;
	cout<<"\n"<<c<<" "<<d;
	
//	perkalian
	z=matriks1[0][0]*matriks2[0][0]+matriks1[0][1]*matriks2[1][0];
	y=matriks1[0][0]*matriks2[0][1]+matriks1[0][1]*matriks2[1][1];
	x=matriks1[1][0]*matriks2[0][0]+matriks1[1][1]*matriks2[1][0];
	w=matriks1[1][0]*matriks2[0][1]+matriks1[1][1]*matriks2[1][1];
	
	cout<<"\nMatriks a x b=\n"<<z<<" "<<y;
	cout<<"\n"<<x<<" "<<w;
	
}
	
