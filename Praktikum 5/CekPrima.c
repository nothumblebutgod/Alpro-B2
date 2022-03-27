
// Nama         : Ananda Rizky Pratama
// NIM          : 24060121140118
// Tanggal      : 27 Maret 2022
// Nama Program : CekPrima.c
// Deskripsi    : Mengecek suatu bilangan integer sembarang N (N>0) apakah bilangan prima atau bukan.


#include <stdio.h>

int main(){
    //Kamus
	int N, P, i;
	P = 0;

    //Algoritma
	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukkan Bilangan Integer : ");
	scanf("%d", &N);
	if (N <= 0) {
        printf("Bilangan integer Harus Positif");
	}
	else {
        for (i = 2; i < N; i++)
        {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d Bukan Bilangan prima", N);
        }
        else {
            printf("%d Adalah bilangan prima", N);
        }
	}
	return 0;
}
