#include<iostream>
using namespace std;

typedef struct orang {
    char nama[30];
    short umur;
} org;

int main() {
    org saya[5];
    int i, x;

    for (i = 0; i < 3; i++) {
        cout << "Nama: ";
        cin >> saya[i].nama;
        cout << "Umur: ";
        cin >> saya[i].umur;
    }

    for (x = 0; x < 3; x++) {
        cout << "Data ke-" << x+1 << " bernama " << saya[x].nama << " berumur " << saya[x].umur << endl;
    }


}

