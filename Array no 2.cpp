#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dan variabel untuk menyimpan jumlah
    int angka[10];
    int jumlah = 0;

    // Meminta pengguna untuk memasukkan elemen array
    cout << "Masukkan 10 angka integer:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    // Menjumlahkan semua elemen array
    for (int i = 0; i < 10; i++) {
        jumlah += angka[i];
    }

    // Menampilkan hasil jumlah
    cout << "\nJumlah semua elemen dalam array adalah: " << jumlah << endl;

    return 0;
}
