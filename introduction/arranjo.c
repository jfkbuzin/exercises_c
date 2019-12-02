/* informar o maior elemento e sua posicao em um arranjo */
#include <stdio.h>
#include <limits.h>
#define CODMAX 10

int main()
{
    int arranjo[CODMAX];
    int cod;
    int maior=INT_MIN;
    int numero;

    for(cod = 0; cod < CODMAX;cod ++)
    {
        printf("\nEntre com o elemento de posicao %d: ", cod);
        scanf("%d", &arranjo[cod]);

        if(arranjo[cod] > maior)
        {
            maior=arranjo[cod];
            numero=cod;
        }

    }

    printf("\nMaior Elemento: %d", maior);
    printf("\nPosicao do Maior Elemento: %d", numero);

}
