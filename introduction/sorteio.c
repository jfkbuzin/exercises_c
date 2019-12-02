//Sorteio de um numero
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int sorteio;
    int contador;
    int num_tentativas;

    srand(time(NULL));
    sorteio  =  rand() %50;

    num_tentativas = 0;

    for(contador=10;contador>0;contador--)
        {

        printf("Tente acertar o numero sorteado\n");
        scanf("%d", &numero);

        if (numero == sorteio)
            {

            printf("Numero Correto\n");

            num_tentativas++;

            printf("Numero de Tentativas : %d", num_tentativas);
            break;
            }
        else
            {

            printf("Numero Errado\n");

            num_tentativas++;

            if (numero > sorteio)
                printf("Numero mais alto do que o sorteado\n");
            else
                printf("Numero menor do que o sorteado\n");
            }
        }

}





