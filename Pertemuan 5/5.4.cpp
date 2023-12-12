#include<iostream>
using namespace std;
int main(){
	int a=3,b=2,c=1,bil;
	printf("bil-a |bil-b| bil-c\n");
	printf("--------------------");
	for(bil=1;bil<=10;++b){
		a+=b;
		b+=c;
		c+=2;
		printf("\n%d\t|%d\t|%d",a,b,c);
		if(c==13){
			break;
			
		}
	}
}
