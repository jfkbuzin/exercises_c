#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef	struct
{
    char nome[30];
    int pontuacao;
    int tempo_jogo;
} USUARIO;

void ler_dados(USUARIO *jogadores);

void ordena(USUARIO	jogadores[], int tamanho);

int func_soma(int n);

int main()
{
    USUARIO jogadores[3];
    int tamanho = 3;
    int n;

    printf("Diga um numero maior que 1: ");
    scanf("%d", &n);

    printf("\ntotal : %d", func_soma(n));

    //ler_dados(jogadores);


}

void ler_dados(USUARIO *jogadores)
{
    int ind;

    for(ind=0;ind<3;ind++)
    {
        printf("\nNome do jogador %d: ", ind);
        fflush(stdin);
        gets(jogadores[ind].nome);

        printf("\nPontuacao do jogador  %d: ", ind);
        scanf("%d", &jogadores[ind].pontuacao);

        printf("\nTempo de jogo do jogador  %d: ", ind);
        scanf("%d", &jogadores[ind].tempo_jogo);
    }
}

int func_soma(int n)
{
    while((n != 0)&&(n != 1))
    {
        return (n + func_soma(n - 2));
    }
}
