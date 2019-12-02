//programa para uma matriz de 6 linhas e 4 colunas
#include <stdio.h>
#define  LINHA_MAX 6
#define COLUNA_MAX 4

int main( )
{
    int m[LINHA_MAX] [COLUNA_MAX];
    int lin, col;
    srand(time(0));

    for (lin = 0; lin < LINHA_MAX; lin++)
        for (col = 0; col < COLUNA_MAX; col++)
        {
        m[lin][col] = rand()%50;
        }



    //a)
    printf("\nMatriz lida: \n");
    for (lin = 0; lin < LINHA_MAX; lin++)
    {
        for (col = 0; col < COLUNA_MAX; col++)
            printf ("%d ", m[lin][col]);
        printf("\n");
    }

    //b)

    m[1][0] = m[0][1];
    m[2][0] = m[0][2];
    m[3][0] = m[0][3];

    printf("\nMatriz com primeira linha trocada com primeira coluna: \n");
    for (lin = 0; lin < LINHA_MAX; lin++)
    {
        for (col = 0; col < COLUNA_MAX; col++)
        printf ("%d ", m[lin][col]);
        printf("\n");
    }

    //c)

    int pri = 0;

    printf("\nDiagonal Principal:\n");
    for (pri = 0; pri < COLUNA_MAX ; pri++)
    {
        printf("%d ", m[pri][pri]);
    }
    printf("\n");

    int sec = 3;
    pri = 0;

    printf("\nDiagonal Secundaria:\n");

    for (sec = 3 ; sec >= 0 ; sec--)
    {
        printf("%d ", m[pri][sec]);
        pri++;
    }
    printf("\n");

    //d)

    int maiorl = 0;
    int maiorc = 0;
    int maior = 0;

    for (lin = 0; lin < LINHA_MAX; lin++)
    {
        for (col = 0; col < COLUNA_MAX; col++)
        {
            if (m[lin][col] > maior)
            {
                maior = m[lin][col];
                maiorc = col;
                maiorl = lin;
            }
        }

    }

    printf("\nLinha e Coluna com maior numero: ");
    printf("%d , %d ", maiorl, maiorc);


    //e)

    int vetor[4];
    int prod = 1;
    int ex = 0;

    for (col = 0; col < COLUNA_MAX; col++)
    {
        prod = 1;
        for (lin = 0; lin < LINHA_MAX; lin++)
        {
            prod = prod * m[lin][col];
        }
        vetor[ex] = prod;
        ex++;
    }
    printf("\nProduto das Colunas\n");

    for (ex = 0; ex < 4; ex++)
        printf("%d ", vetor[ex]);

    printf("\n\n");

    system("pause");
    return 0;
}
