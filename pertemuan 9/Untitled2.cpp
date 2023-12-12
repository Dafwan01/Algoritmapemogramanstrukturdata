#include<iostream>
using namespace std;

void penjumlahan(int &total){
	total+=1;
}

int main(){
	int hitung=20, result=0;
	penjumlahan(hitung);
	cout<<"pass by referense\ntotal= "<<hitung;
	
}
