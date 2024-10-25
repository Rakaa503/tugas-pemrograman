#include <stdio.h>

int main() {
    int angka;

    // Meminta input dari user
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);

    // Memastikan bahwa input adalah bilangan positif
    if (angka <= 0) {
        printf("Masukkan bilangan bulat positif.\n");
    } else {
        // Mengecek apakah bilangan ganjil atau genap
        if (angka % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}
