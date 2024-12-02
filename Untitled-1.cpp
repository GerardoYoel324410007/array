#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan 5 angka
    float angka[5];

    // Meminta pengguna untuk mengisi array
    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%f", &angka[i]);
    }

    // Menampilkan semua elemen array
    printf("Elemen array yang dimasukkan:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", angka[i]);
    }

    return 0;
}