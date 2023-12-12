#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	char a1[20],a2[20];
	cout<<"masukan kata 1 ";
	cin>>a1;
	cout<<"masukan kata 2 ";
	cin>>a2;
	strcat(a1,a2);
	cout<<"penggabungan ";
	cout<<a1;
	getchar();
}
