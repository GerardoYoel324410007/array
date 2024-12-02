#include <iostream>
using namespace std;

int main() {
    // Deklarasi array untuk menyimpan 5 angka integer
    int angka[5];

    // Meminta pengguna untuk mengisi array
    cout << "Masukkan 5 angka integer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    // Menampilkan elemen-elemen dari array
    cout << "\nElemen-elemen dalam array adalah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": " << angka[i] << endl;
    }

    return 0;
}
