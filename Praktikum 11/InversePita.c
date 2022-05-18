//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 17 Mei 2022
//Nama Program : InversePita.c
//Deskripsi    : Membuat program mesin abstrak untuk menghitung banyaknya kata yang ada pada pita

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int length_Pita;
    char str[50];
    int i;

/*Algoritma*/
    length_Pita = HitungChar();

    printf("===Mesin Inverse Pita===\n");

    if (length_Pita >= 50)
    {
        printf("karakter dalam pita maksimal 50 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < length_Pita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita inverse = ");
        // melakukan inverse kata
        for (int i = length_Pita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

    }

    getch();
    return 0;
}
