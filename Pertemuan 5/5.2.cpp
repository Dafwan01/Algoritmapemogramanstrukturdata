#include<iostream>
using namespace std;
int main(){
	int a,b=0;
	for(a=1;a<=19;a+=2){
		cout<<a;
		b=b+a;
		if(a<19){
			cout<<"+";
		}
	}
	cout<<"= "<<b;
}
