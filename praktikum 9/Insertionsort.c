//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 07 Mei 2022
//Nama Program : Insertionsort.c
//Deskripsi    : Membuat program sorting dengna metode insertion sorting.

#include <stdio.h>

void InsertionSort(int array[], int n)
{
    //Kamus Lokal
    int i, j ,temp;

    //Algoritma
    for (i = 1; i < n; i++){
        temp = array[i];
        for (j = i-1; j >= 0 && array[j]>temp;j--)
        {
            array[j+1] = array[j];
        }
        array[j+1] = temp;
    }
}

int main()
{
    //Kamus
    int n, array[100], i , j, temp;

    //Algoritma
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);

    printf("Masukkan nilai yang diinginkan : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    InsertionSort(array, n);
    printf("Hasil sorting insertion sort : ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
