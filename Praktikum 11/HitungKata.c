//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 07 Mei 2022
//Nama Program : HitungKata.c
//Deskripsi    : Membuat program mesin abstrak untuk menghitung banyaknya kata yang ada pada pita

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    /*Kamus*/
    char str[100]; // variable str untuk menampung kalimat yang ingin dihitung total katanya
  	int i, totalwords;
  	/*Algoritma*/

    printf("===Mesin Hitung Kata===\n");

    if (totalwords >= 100)
    {
        printf("\nkarakter dalam pita maksimal 100 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca = ");
        for ( i = 0; i < totalwords; i++)
        {
            printf("%c", str[i]);
        }

        i = 0;
        totalwords = 1;
        /* loop sampai akhir string */
        while(str[i]!='\0')
        {
            /* memeriksa apakah karakter saat ini adalah spasi atau baris baru atau karakter tab*/
            if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
            {
                totalwords++;
            }

            i++;
        }

        printf("\nTotal kata : %d\n", totalwords);
    }

    getch();
	return 0;
}
