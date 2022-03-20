/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 20 Maret 2022
// Nama Program : FaktorBil.c
/* Deskripsi    : menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int N,i;

    //Algoritma
    printf("Program menentkan faktor-faktor bilangan \n");
    printf("Masukkan bilangan : ");
    scanf("%d", &N);
    printf("Faktor dari bilangan %d \n", N);

    if (N <= 0){
        printf("Bilangan yang dimasukkan tidak boleh 0 dan harus bernilai positif");
    }
    else
    {
    for(i = 1; i<= N; i++){
        if(N%i == 0){
            printf(" %d",i);
            }
        }
    }
    return 0;
}
