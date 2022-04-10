/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 12 Maret 2022
// Nama Program : 08_Cek_Hari.c
/* Deskripsi    : menampilkan nama hari sesuai dengan inputan pada nomor 1 sampai 7
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&i);
    switch (i){
        case 1 :
            printf("Hari Senin");
            break;
        case 2:
            printf("Hari Selasa");
            break;
        case 3:
            printf("Hari Rabu");
            break;
        case 4:
            printf("Hari Kamis");
            break;
        case 5:
            printf("Hari Jumat");
            break;
        case 6:
            printf("Hari Sabtu");
            break;
        case 7 :
            printf("Hari Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
            }
    return 0;
}
