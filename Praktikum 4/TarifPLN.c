/*
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 20 Maret 2022
// Nama Program : TarifPLN.c
/* Deskripsi    : menghitung dan menampilkan besarnya biaya tarif PLN berdasarkan golongan dan pemakaian daya listrik.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int gol,daya;

    //Algoritma
    printf("Program menghitung tarif PLN \n");
    printf("Masukkan golongan listrik : ");
    scanf("%d",&gol);
    printf("Masukkan jumlah pemakaian dalam KWH : ");
    scanf("%d", &daya);
    if(gol == 1){
        if(daya > 0 && daya <= 100){
            printf("Biayanya =%d",100*1000);
        }
        else if (daya > 100 && daya < 1000){
            printf("Biayanya =%d",daya*1000);
        }
        else if (daya>=1000){
            printf("Biayanya =%d", daya*1000 + (daya*1000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KWH");
        }
    }
    else{
        if(daya > 0 && daya <= 100){
            printf("Biayanya =%d",100*2000);
        }
        else if (daya > 100 && daya < 1000){
            printf("Biayanya = %d",daya*2000);
        }
        else if (daya>=1000){
            printf("Biayanya =%d", daya*2000 + (daya*2000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KWH");
        }
    }
    return 0;
}
