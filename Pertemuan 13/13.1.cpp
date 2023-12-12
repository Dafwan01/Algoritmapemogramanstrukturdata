#include<iostream>
#define max 5
using namespace std;
struct tumpukanbuku{
	int top;
	int antrian[max];
}perpus;
void inisialisasi(){
	perpus.top=-1;
}

bool kondisikosong(){
	return perpus.top==-1;
}
bool kondisipenuh(){
	return perpus.top==max-1;
}
void inputdata(){
	if(kondisipenuh()){
		cout<<"\nantrian penuh";
	}else{
		perpus.top++;
		cout<<"masukan data ";
		cin>>perpus.antrian[perpus.top];
		cout<<"antrian"<<perpus.antrian[perpus.top]<<"telah masuk ke tumpukan buku"<<endl;
	}
}

void hapusdata(){
	if(kondisikosong()){
		cout<<"antrian kosong";
	}else{
		cout<<"antrian"<<perpus.antrian[perpus.top]<<"telah dihapus"<<endl;
		perpus.top--;
	}
}

void tampildata(){
	if(kondisikosong()){
		cout<<"antrian kosong";
	}else{
		for(int i=perpus.top;i>=0;i--){
			cout<<perpus.antrian[i]<<((i=0)?"":",");
		}
	}
}

int main(){
	int pilihan;
	inisialisasi();
	do{
	tampildata();
	cout<<"\n1.masukan data\n2,hapus data\n3.keluar\nmasukan pilihan:";
	cin>>pilihan;
	switch(pilihan){
		case 1:
			inputdata();
			break;
		case 2:
			hapusdata();
			break;
		default:
			cout<<"pilihan tidak terseedi "<<endl;
			break;		
	}
	}while(pilihan!=3);
}
