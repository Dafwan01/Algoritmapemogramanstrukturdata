#include<iostream>
using namespace std;

int main(){
	double total_beli, potongan=0, jum_bayar=0;
//	clrscr();
	cout<<"total pembelian";
	cin>>total_beli;
	
	if(total_beli>=50000){
		potongan=0.2*total_beli;
	}
		cout<<"besar potongan"<<potongan<<endl;
		jum_bayar=total_beli-potongan;
		cout<<"jumlah yang harus dibayar"<<jum_bayar;
		getchar;
	}
