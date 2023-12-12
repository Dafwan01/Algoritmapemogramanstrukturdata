#include <iostream>
using namespace std;

bool prima(int a) {
    if (a < 2) {
        return false;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    cout << "Masukkan angka: ";
    cin >> a;

    if (prima(a)) {
        cout << a << " Termasuk bilangan prima." << endl;
    } else {
        cout << a << " Bukan termasuk bilangan prima." << endl;
    }

    return 0;
}

