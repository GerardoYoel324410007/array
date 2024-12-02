#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dan variabel untuk menyimpan nilai maksimum
    int angka[7];
    int maksimum;

    // Meminta pengguna untuk memasukkan elemen array
    cout << "Masukkan 7 angka integer:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    // Menginisialisasi nilai maksimum dengan elemen pertama array
    maksimum = angka[0];

    // Menemukan nilai maksimum
    for (int i = 1; i < 7; i++) {
        if (angka[i] > maksimum) {
            maksimum = angka[i];
        }
    }

    // Menampilkan nilai maksimum
    cout << "\nNilai maksimum dalam array adalah: " << maksimum << endl;

    return 0;
}
