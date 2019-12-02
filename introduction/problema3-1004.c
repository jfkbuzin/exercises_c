//programa para um arranjo de 10 elementos inteiros
#include <stdio.h>
#include <stdlib.h>
#define ELEM 10

int main ()
{
    int vetor[ELEM];
    int ind = 0;
    srand(time(0));

    //a e b)

    printf("10 elementos inteiros aleatorios de um arranjo:\n");

    for (ind = 0; ind < ELEM; ind++)
    {
        vetor[ind]=(int)(rand()/(double)RAND_MAX*(100+1));
        printf ("%d * ", vetor[ind]);
    }

    //c)

    for (ind = 9; ind > 0; ind--)
    {
        vetor[ind]=vetor[ind-1];
    }

    for (ind = 0; ind < 1; ind++)
    {
        printf("\nDigite um valor para ser o primeiro elemento do arranjo:\n");
        scanf("%d", &vetor[ind]);
    }

    printf("\nNovo Arranjo:\n");

    for (ind = 0; ind < ELEM; ind++)
    {
        printf ("%d * ", vetor[ind]);
    }

    //d)

    printf("\nNovo Arranjo com impares substituidos pelo valor no indice:\n");

    for (ind = 0; ind < ELEM; ind++)
    {
        if ((vetor[ind] % 2) != 0)
            vetor[ind] = ind;
        printf ("%d * ", vetor[ind]);
    }

    //e)

    int soma = 0;
    int contaelem = 0;
    int contaf = 0;
    float media;

    for (ind = 0; ind < ELEM ; ind++)
    {
        soma = soma + vetor[ind];
        contaelem++;
    }
    media = (float)soma / contaelem;
    printf("\nMedia dos valores dos elementos do arranjo: %6.2f", media);

    for (ind = 0; ind < ELEM ; ind++)
    {
        if(vetor[ind] > media)
            contaf++;
    }

    printf("\nNumero de elementos acima da media: %d", contaf);
}

