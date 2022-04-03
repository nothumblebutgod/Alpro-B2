// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 01 April 2022
// Nama Program : Tetris1.c
// Deskripsi    : Membuat program untuk menampilkan susunan karakter ‘*’ dari sebuah inputan integer dari yang terbesar

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Kamus
   int N,i,j;

   // Algoritma
    printf("Program Tetris 1\n");
    printf("Masukkan nilai N yang diinginkan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Integer harus bernilai positif positif");
    }
    else{
        for (i=N;i>=1;i--){
            for (j=1;j<=i;j++){
                    printf("*");
        if(j==i){
            printf("  --%d", j);
            }
        }
    printf("\n");
    }
    return 0;
    }
}
