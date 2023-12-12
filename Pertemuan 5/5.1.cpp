#include<iostream>
using namespace std;

int main(){
	int a,b;
	char lagi;
	atas:
	cout<<"masukan bilangan ";
	cin>>a;
	b=a%2;
	cout<<"nilai "<<a<<" %2 adalah ";
	cout<<"\ningin menhitung lagi[y/t]";
	cin>>lagi;
	if(lagi=='y'||lagi=='Y'){
		goto atas;
	}
}
