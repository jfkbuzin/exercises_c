//
#include <stdio.h>
#include <limits.h>

int main ()
{

    int vetor[20];
    int vetor2[20];
    int ind;
    int ind2;

    srand(time(0));

    for (ind = 0; ind < 20; ind++)
        {
        vetor[ind] = rand()%50;
        vetor2[ind] = vetor[ind];
        }

    printf("\nVetor: \n");
    for (ind = 0; ind < 20; ind++)
    {
        printf ("%d ", vetor[ind]);
    }
    printf("\n\n");
    //a:

    for (ind = 0; ind < 20; ind++)
    {
        if((vetor[ind] % 2) != 0)
        {
            vetor[ind] = 0;
            vetor2[ind] = 0;
        }
    }

    printf("\nVetor sem impares: \n");
    for (ind = 0; ind < 20; ind++)
    {
        if (vetor[ind] != 0)
            printf ("%d ", vetor[ind]);
    }
    printf("\n\n");

    //b:

    for (ind = 0; ind < 20; ind++)
    {
        for (ind2 = ind+1; ind2 < 20; ind2++)
        {
            if(vetor2[ind2] == vetor[ind])
            {
                vetor[ind] = 0;
            }
        }
    }

    printf("\nVetor sem duplicatas: \n");
    for (ind = 0; ind < 20; ind++)
    {
        if (vetor[ind] != 0)
            printf ("%d ", vetor[ind]);
    }
    printf("\n\n");

    //c:

    printf("\nVetor em ordem crescente:\n");

    int ind3;
    int aux;
	int menor = INT_MAX;

    for(ind2 = 0; ind2 < ind; ind2++)
    {
        menor = ind2;

        for(ind3 = ind2 + 1; ind3 < ind; ind3++)
            if(vetor[ind3] < vetor[menor])
            {
                menor = ind3;
            }

        aux = vetor[ind2];
        vetor[ind2] = vetor[menor];
        vetor[menor] = aux;

        if (vetor[ind2] != 0)
            printf("%d ", vetor[ind2]);

    }
    printf("\n\n");
}
