#include<iostream>
using namespace std;

struct dtmhs {
    char nama[9];
    char nim[5];
};

struct dtnil {
    float nil1;
    float nil2;
};

struct data {
    dtmhs mhs;
    dtnil nil;
};

int main() {
    data nilai;
    cout << "Masukkan nim: ";
    cin >> nilai.mhs.nim;

    cout << "Masukkan nama: ";
    cin >> nilai.mhs.nama;

    cout << "Masukkan nilai uts: ";
    cin >> nilai.nil.nil1;

    cout << "Masukkan nilai uas: ";
    cin >> nilai.nil.nil2;

    cout << "\nInformasi Mahasiswa:\n";
    cout << "NIM: " << nilai.mhs.nim << endl;
    cout << "Nama: " << nilai.mhs.nama << endl;
    cout << "Nilai UTS: " << nilai.nil.nil1 << endl;
    cout << "Nilai UAS: " << nilai.nil.nil2 << endl;

    
}

