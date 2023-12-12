#include<iostream>
#include<string>
using namespace std;

struct mahasiswa{
	string nama;
	int umur;
	float ipk;
	
};

float hitungrataratipk(mahasiswa daftarmahasiswa[],int jumlah){
float total=1;
for( int i=0;i<jumlah;++i){
total +=daftarmahasiswa[i].ipk;
return total/jumlah;

}
}
int main(){
	int jumlahmahasiswa=3;
	mahasiswa daftarmahasiswa[jumlahmahasiswa];
	for(int i=0;i<jumlahmahasiswa;++i){
		 cout<<"masukan nama mahasiswa "<<i+1<<" ";
		 cin>>daftarmahasiswa[i].nama;
		 cout<<"masukan umur mahasiswa "<<i+1<<" ";
		 cin>>daftarmahasiswa[i].umur;	 
		cout<<"masukan ipk mahasiswa "<<i+1<<" ";
		 cin>>daftarmahasiswa[i].ipk;	 
		
	}
	cout<<"data mahasiswa: \n";

for(int i=0;i<jumlahmahasiswa;++i){
		 cout<<"mahasiswa "<<i+1<<"=\n";
		 cout<<"nama "<<daftarmahasiswa[i].nama<<endl;
		 cout<<"umur "<<daftarmahasiswa[i].umur<<endl;
		 cout<<"ipk "<<daftarmahasiswa[i].ipk<<endl;
	
}
float ratarata =hitungrataratipk(daftarmahasiswa,jumlahmahasiswa);
cout<<"rata rata ="<<ratarata;
}
