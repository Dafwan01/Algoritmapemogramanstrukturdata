#include<iostream>
using namespace std;
int main(){
	int a,b=0;
	for(a=2;a<=20;a+=2){
		cout<<a;
		b=b+a;
		if(a<20){
			cout<<"+";
		}
	}
	cout<<"= "<<b;
}
