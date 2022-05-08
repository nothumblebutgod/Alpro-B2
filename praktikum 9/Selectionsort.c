//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 07 Mei 2022
//Nama Program : Selectionsort.c
//Deskripsi    : Membuat program sorting dengan metode selection sorting.

#include <stdio.h>
#include <stdlib.h>

void selectionsort(int array[], int N){
    int i, j, min, temp;
    for (i = 0; i < N-1; i++){
        min = i;
        for (j = i+1; j < N; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
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
    selectionsort(array, n);
    printf("Hasil sorting selection sort : ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
