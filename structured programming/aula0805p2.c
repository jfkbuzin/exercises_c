
#include <stdio.h>

void preencher(int vet[2][2]);

void msoma(int soma[2][2], int vet1[2][2], int vet2[2][2]);

int main()
{
    int A[2][2];
    int lin, col;

    int B[2][2];
    int C[2][2];
    int D[2][2];

    srand(time(0));

    printf("\nMatriz A: \n");
    preencher(A);

    printf("\nMatriz B: \n");
    preencher(B);

    printf("\nMatriz C: \n");
    preencher(C);

    printf("\nMatriz D: \n");
    preencher(D);

    int AB[2][2];

    printf("\nMatriz soma A+B: \n");

    msoma(AB, A, B);

    int CD[2][2];

    printf("\nMatriz soma C+D: \n");

    msoma(CD, C, D);

    int AC[2][2];

    printf("\nMatriz soma A+C: \n");

    msoma(AC, A, C);

}

void preencher(int vet[2][2])
{

    int lin, col;

    for (lin = 0; lin < 2; lin++)
        for (col = 0; col < 2; col++)
        {

            vet[lin][col] = rand()%50;

        }

    for (lin = 0; lin < 2; lin++)
    {
        for (col = 0; col < 2; col++)
            printf ("%d ", vet[lin][col]);
        printf("\n");
    }
}


void msoma (int soma[2][2], int vet1[2][2], int vet2[2][2])
{

    int lin;
    int col;

    for (lin = 0; lin < 2; lin++)
    {
        for (col = 0; col < 2; col++)
        {
            soma[lin][col] = vet1[lin][col] + vet2[lin][col];
            printf ("%d ", soma[lin][col]);
        }
        printf("\n");
    }

}
