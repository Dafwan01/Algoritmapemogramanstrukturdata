#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Masukan jumlah maksimal";
	cin>>a;
	
	for(b=1;b<=a;b++){
		cout<<b<<endl;
	}

cout<<"\nPerulangan menurun"<<endl;

   for(b=a;b>=1;--b){
   	cout<<b<<endl;
   }

cout<<"Bilangan genap"<<endl;
for(b=2;b<=a;b+=2){
	cout<<b<<endl;
}
cout<<"Bilangan ganjil"<<endl;
for(b=1;b<=a;b+=2){
	cout<<b<<endl;
}
}
