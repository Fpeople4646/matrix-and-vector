#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;
    int **a, **b, **d;
    int r, c;

    printf("Masukkan jumlah baris dan jumlah kolom: ");
    scanf("%d %d", &r, &c);

    printf("Masukkan elemen matriks 1: \n");
    a = (int **)malloc(r*sizeof(int*));
    for(i = 0; i<r; i++){
        a[i] = (int *)malloc(c*sizeof(int));
    }
 
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Masukkan elemen matriks 2 : \n");
    b = (int **)malloc(r*sizeof(int*));
    for(i = 0; i<r; i++){
        b[i] = (int *)malloc(c*sizeof(int));
    }
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            scanf("%d", &b[i][j]);
        }
    }
    d = (int **)malloc(r*sizeof(int*));
    for(i = 0; i<r; i++){
        d[i] = (int *)malloc(c*sizeof(int));
    }
    printf("Hasil jumlah matriks 1 dan 2 : \n");
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            d[i][j] = a[i][j] + b[i][j];
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
