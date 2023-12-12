#include<cctype>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char teks[20],baru[20];
	cout<<"tulis dengan kapital";
	cin>>teks;
	for(int i=0;i<strlen(teks);i++){
		if(teks[i]>='a'&& teks[i]<='z'){
			baru[i]=toupper(teks[i]);
	}else{
		baru[i]=tolower(teks[i]);
	}
}
cout<<"hasil perubahan"<<baru;}
