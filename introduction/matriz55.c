#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define  MAX  5
int main( )
{
    float m[MAX] [MAX];
    float soma, media; //somat�rio e m�dia
    int contaelem;// para c�lculo da m�dia
    int lin, col, ind; // �ndices
    //leitura dos valores da matriz m:
    for (lin = 0; lin < MAX; lin++)
        for (col = 0; col < MAX; col++)
        {
        printf ("\nInforme o valor [%d] [%d]: " , lin, col );
        scanf ("%f", &m[lin][col]);
        }
        //escrita da matriz m
    printf("\n\nMatriz lida: \n");
    for (lin = 0; lin < MAX; lin++)
    {
        for (col = 0; col < MAX; col++)
        printf ("%6.2f    ",m[lin][col] );
        printf("\n");
    }
    // inicializa contador e acumulador
    soma = 0;
    contaelem  = 0;
    //percorrendo a diagonal principal: s� precisa 1 �ndice!!!
    for (ind =0; ind < MAX ; ind++)
    {
        soma = soma + m[ind][ind]; //soma diagonal
        contaelem++;
    }
    media = soma / contaelem;
    printf("\nMedia: %6.2f \n", media);
    system("pause");
    return 0;
}
