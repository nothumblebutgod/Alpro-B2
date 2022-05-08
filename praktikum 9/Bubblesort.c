//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 07 Mei 2022
//Nama Program : Bubblesort.c
//Deskripsi    : Membuat program sorting dengan metode bubble sorting.

#include <stdio.h>
#include <stdlib.h>

void bubblesorting(int array[], int N){
    //Kamus Lokal
    int i, j, temp;
    //Algoritma
    for (i = 0; i < N; i++){
        for (j = i+1; j < N; j++)
            {
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

//program utama
int main(){
    // Kamus
    int array[100], n, i, j;

    // Algoritma
    printf("Masukkan jumlah banyaknya data:");
    scanf("%d", &n);

    printf("Masukkan nilai yang diinginkan: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    bubblesorting(array, n);
    printf("Hasil sorting bubble sort: ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
