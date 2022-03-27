// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 27 Maret 2022
// Nama Program : SiputNaik.c
// Deskripsi    : Mengetahui berapa hari waktu yang dibutuhkan oleh seekor siput untuk mencapai ketinggin N meter

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int i = 1;
    double h = 0.00, N;

    // Algoritma
    printf("Program mengetahui berapa hari waktu yang dibutuhkan oleh seekor siput untuk mencapai ketinggin N meter \n");
    printf("Masukkan Ketinggian lubang: ");
    scanf("%lf", &N);
    do {
        if (i % 2 != 0){
            h = h + 0.3;
        }
        else{
            h = h - 0.1;
        }
        i++;
    } while (h < N);
    printf("Siput membutuhkan %d hari untuk mencapai ketinggian %.2f meter\n",i/2,N);

    return 0;
}
