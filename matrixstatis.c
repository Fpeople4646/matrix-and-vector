//nama =Fatur Rahman
//Prodi = D3Tk
//NIM = 13322024


#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[3][3], b[3][3];
int i, j;
int hasil[3][3];

printf("input matrix 1 3x3\n");
for (int i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++){
        scanf("%d\n", &a[i][j]);
    }
}
printf("input matrix 2 3x3\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d\n ", &b[i][j]);
    }   
}
printf("hasil penjumlahan matrix\n");
 for ( i = 0; i < 3; i++)
 {
    for( j = 0; j < 3; j++){
        hasil[i][j] = a[i][j] + b[i][j];
        printf("%d\t", hasil[i][j]);
    }
    printf("\n");
 }
 
    return 0;
}
