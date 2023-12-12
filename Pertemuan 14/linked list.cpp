#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node*next;
}*top,*newptr,*save,*ptr;
node *create_new_node(int);
void push(node *);
void display(node *);

int main(){
int inf;
char ch='y';
top=NULL;
while(ch=='y' || ch=='Y'){
cout<<"masukan node baru..";
cin>>inf;
newptr = create_new_node(inf);
if(newptr == NULL){
	cout<<"\nmaaf tidak dapat menjalankan perintah!\n";
	cout<<"tekan tompol apa saja untuk keluar";
	getchar();
	exit(1);
}
	push(newptr);
	cout<<"\nAntrian tumpukan saat ini :\n";
	display(top);
	cout<<"\nIngin menambah antrian ? (y/n).. ";
	cin>>ch;
	getchar();
}
}
	
	node *create_new_node(int x){
	
	ptr =new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
}
	void push(node *n){
	if(top==NULL){
	top=n;
	}else{
	save = top;
top = n;
n->next = save;
}
}

void display(node *n)
{
while(n != NULL)
{
cout<<n->info<<"->"; 
n= n->next;
}
cout<<"!!\n";
	}



