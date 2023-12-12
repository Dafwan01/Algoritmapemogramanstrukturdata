#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main() {
   ifstream myfile;
   char sv_text;
   myfile.open("test.txt");
   cout<<"operasi file 2\n";
   cout<<"--------------\n";
   
   if (!myfile.fail()){
   	cout<<"isi file test.txt adalah";
   while(!myfile.eof()){
   	myfile.get(sv_text);
   	cout<<sv_text;
   }
   myfile.close();}
   else{
   	cout<<"file tidak ditemukan"<<endl;
   }
   getchar();
   }
