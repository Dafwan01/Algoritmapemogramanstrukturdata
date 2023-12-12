#include<iostream>
using namespace std;

int main(){
	char kode;
	cout<<"masukan kode barang[A..B] :";
	cin>>kode;
	
	switch(kode){
		case 'A' :
			cout<<"Alat olahraga";
			break;
			
			case'B':
				cout<<"alat elektronik ";
				break;
				case'C':
					cout<<"alat masak ";
					break;
					default:
						cout<<"Anda salah memaskuan kode";
						break;
						
	}
	getchar();
}

