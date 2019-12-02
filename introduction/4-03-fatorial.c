//Exemplo de uso do define
#include <stdio.h>

int main( )
{
    int numero;
    int fatorial;
    int produto;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    fatorial = (numero - 1);
    produto = numero * fatorial;

    if ((numero == 0) || (numero == 1))
        produto = 1;
    else
        for ( fatorial = (numero - 2); fatorial >= 1; fatorial --)
            {
            produto = produto * fatorial;
            }

    printf("\nResultado: %d", produto);

    return 0;

}
