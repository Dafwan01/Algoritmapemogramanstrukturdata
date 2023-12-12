#include<iostream>
using namespace std;

int pangkat(int x, int y){
	if(y==0)
		return 1;
	else
		return x*pangkat(x,y-1);
}

int main(){
	int x,y;
	cout<<"Masukan nilai x = ";
	cin>>x;
	cout<<"Masukan nilai y = ";
	cin>>y;
	cout<<x<<" Dipangkatkan "<<y<<" = "<<pangkat(x,y);
}
