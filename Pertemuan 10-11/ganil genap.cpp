#include<iostream>
using namespace std;

void gg(int *a){
	if(*a%2==0){
	cout<<*a<<" Adalah bilangan genap";
	}
	else{
	cout<<*a<<" Adalah bilangan ganjil";
	}
}

int main(){
	int  a;
	cout<<"Masukan bilangan ";
	cin>>a;
	gg(&a);
	}

