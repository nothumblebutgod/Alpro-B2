/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 12 Maret 2022
// Nama Program : Cek_Bulan.c
/* Deskripsi    : menampilkan nama Bulan sesuai dengan inputan pada nomor 1 sampai 7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &i);
    switch (i){
        case 1 :
            printf("Bulan Januari");
            break;
        case 2 :
            printf("Bulan Februari");
            break;
        case 3:
            printf("Bulan Maret");
            break;
        case 4:
            printf("Bulan April");
            break;
        case 5:
            printf("Bulan Mei");
            break;
        case 6:
            printf("Bulan Juni");
            break;
        case 7:
            printf("Bulan Juli");
            break;
        case 8:
            printf("Bulan Agustus");
            break;
        case 9:
            printf("Bulan September");
            break;
        case 10:
            printf("Bulan Oktober");
            break;
        case 11:
            printf("Bulan November");
            break;
        case 12:
            printf("Bulan Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
            break;
            }
    return 0;
}
