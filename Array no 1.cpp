#include <iostream>
using namespace std;

int main() {
    
    int angka[5];

    
    cout << "Masukkan 5 angka integer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    
    cout << "\nElemen-elemen dalam array adalah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": " << angka[i] << endl;
    }

    return 0;
}
