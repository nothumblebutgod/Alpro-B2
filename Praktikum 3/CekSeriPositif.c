/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121130089
// Tanggal      : 13 Maret 2022
// Nama Program : CekSeriPositif.c
/* Deskripsi    : menampilkan total dari 3 tahanan bilangan yang tidak boleh bernilai negatif
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int r1, r2, r3, rt;

    //Algoritma
    printf("Masukkan tahanan pertama : ");
    scanf("%d",&r1);
    printf("Masukkan tahanan kedua : ");
    scanf("%d",&r2);
    printf("Masukkan tahanan ketiga : ");
    scanf("%d",&r3);

    if (r1 >0 && r2 > 0 && r3 >> 0){
        rt = r1+r2+r3;
        printf("%d",rt);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
