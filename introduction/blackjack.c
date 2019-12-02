//Simular o Back Jack
#include <stdio.h>

int main()
{
    int carta = 0;
    int total = 0;

    while(total < 21)
    {
        printf("\nInsira o valor de uma carta: ");
        scanf("%d", &carta);

        if ((carta <= 13) && (carta >= 1))
        {
            total = carta + total;
        }
        else
        {
            printf("\nValor da carta errado, insira um valor entre 1 e 13");
            carta = 0;
        }

        if (total > 21)
        {
            printf("\nTotal maior que 21, mesa de jogo limpa, inserir novamente o valor das cartas");
            total = 0;
        }
    }
    printf("\nTotal igual a 21");
}
