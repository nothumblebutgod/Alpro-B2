// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 27 Maret 2022
// Nama Program : CekSempurna.c
// Deskripsi    : Mengecek sebuah bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard termasuk bilangan sempurna atau bukan.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Kamus
    int N,i,S;
    S = 0;

    //Algoritma
    printf("Program mengecek apakah suatu bilangan integer sempurna atau bukan")
    printf("Masukkan bilangan yang menurutmu Sempurna? ");
    scanf("%d",&N);

    for(i=1; i<N ;i++){
        if (N % i == 0){
            S = S + i;
        }
    }
    if (N == S){
        printf("Adalah bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}
