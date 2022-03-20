/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 20 Maret 2022
// Nama Program : TunjAnak.c
/* Deskripsi    : menghitung dan menampilkan besarnya tunjangan anak yang diberikan berdasarkan gaji pokok dan jumlah anak.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int a, g, t;

    //Algoritma
    printf("Program tunjangan anak \n");
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d",&a);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &g);
    if(a>= 0 && g>0){
        if(a<3){
            t = a * 10 * g / 100;
            printf("Tunjangan anak = %d", t);
        }
        else{
            t = 3 * 10 * g / 100;
            printf("Tunjangan Anak = %d", t);
        }
    }
    else{
        printf("Angka yang dimasukkan tidak valid");
    }
    return 0;
}
