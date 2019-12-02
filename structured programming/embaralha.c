//
#include<stdio.h>

int embaralha(int arranjo[5])
{
    int ind;

    ind = rand() % 5;
    srand (time(NULL));

    return ind;
}


int main()
{
    int arranjo[5];
    int ind;
    int ind2 = 0;

    for (ind = 0; ind < 5; ind++)
    {
        printf ("\nInforme o valor [%d]: " , ind );
        scanf ("%d", &arranjo[ind]);
    }

    printf("\nArranjo lido: \n");
    for (ind = 0; ind < 5; ind++)
            printf ("%d ",arranjo[ind]);
    printf("\n\n");

    printf("\nArranjo embaralhado: \n");
    for (ind = 0; ind < 5; ind++)
    {
        ind2 = embaralha(arranjo);
        printf ("%d ",arranjo[ind2]);
    }
    printf("\n\n");

}

