//Nama         : Ananda Rizky Pratama
//NIM          : 24060121140118
//Tanggal      : 07 Mei 2022
//Nama Program : Countingsort.c
//Deskripsi    : Membuat program sorting dengna counting sorting.

#include <stdio.h>
#include <stdlib.h>

void countSort(int array[], int N){
    // Kamus Lokal
    int i, j, k, count[10];

    // Algoritma
    for (i = 0; i < 10; i++){
        count[i] =0;
    }
    for (i = 0; i < N; i++){
        count[array[i]]++;
    }
    for (i = 0, j = 0; i < 10; i++){
        for (k = 0; k < count[i]; k++){
            array[j] = i;
            j++;
        }
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;
    // Algoritma
    printf("Masukkan jumlah banyaknya data:");
    scanf("%d", &n);

    printf("Masukkan nilai yang diinginkan:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    countSort(array, n);
    printf("Hasil sorting counting sort:");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
