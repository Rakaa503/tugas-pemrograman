#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya_parkir;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk: ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jam_keluar);

    // Hitung lama parkir
    if (jam_keluar >= jam_masuk) {
        lama_parkir = jam_keluar - jam_masuk;
    } else {
        lama_parkir = (24 - jam_masuk) + jam_keluar; // Mengatasi waktu parkir yang melewati tengah malam
    }

    // Hitung biaya parkir
    if (lama_parkir <= 2) {
        biaya_parkir = 2000;  // Biaya 2 jam pertama
    } else {
        biaya_parkir = 2000 + (lama_parkir - 2) * 500;  // Biaya 2 jam pertama + biaya jam berikutnya
    }

    // Tampilkan hasil
    printf("Lama parkir: %d jam\n", lama_parkir);
    printf("Biaya = %d\n", biaya_parkir);

    return 0;
}