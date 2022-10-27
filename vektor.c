#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vektor1[3];
    int vektor2[3];
    int vektor[3];
    int hasil;

    for (int i = 0; i < 3 ; i++)
    {
        printf("nilai vektor 1: [%d]\n", i); scanf("%d",&vektor1[i]);
    }
    for (int j = 0; j < 3 ; j++)
    {
        printf("nilai vektor 2: [%d]\n",j); scanf("%d", &vektor2[j]);
    }
    
    printf("\n");
    
    vektor[0]= vektor1[0] * vektor2[0];
    vektor[1]= vektor1[1] * vektor2[1];
    vektor[2]= vektor1[2] * vektor2[2];

    printf("%d + %d + %d\n\n",vektor[0],vektor[1],vektor[2]);
    
    hasil= vektor[0] + vektor[1 ]+ vektor[2];

    printf("Hasil=%d\n\n",hasil);
    system("PAUSE");
    return 0;
}
