#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    char kata[20];
    float angka, a, b;

    cout << "Masukkan sembarang kata berupa angka = ";
    cin >> kata;
    angka = atof(kata); 
    a = angka + 5; 
    cout << "Hasil perubahan ditambah dengan 5 = " << a << endl;
    
    getchar();
    return 0;
}

