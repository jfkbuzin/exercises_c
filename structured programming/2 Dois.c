
#include <stdio.h>
#include "conio2.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "structs.c"

#define POSINI_X 1
#define POSINI_Y 12
#define VIDAINI 5
#define LIMITE_DIR 32
#define LIMITE_ESQ 2
#define LIMITE_CIMA 2
#define LIMITE_BAIXO 25

void troca_cor()
{
    system("color 60");
    //textbackground(WHITE);
    //printf("                                                                           ");
}

/*
3) Criar uma fun��o para imprimir o jogador que recebe o jogador e uma vari�vel booleana (0 ou 1)
por par�metros. Se a booleana for zero, a fun��o imprime espa�o na atual posi��o, apagando o jogador.
Se for 1, imprime o caractere de representa��o do jogador nas coordenadas do jogador. (Essa fun��o pode
ser adaptada no jogo para apagar ou escrever diversos caracteres se o jogador n�o for um char s�).
imprime_ jogador (JOGADOR player) � passagem por valor
*/

void imprime(REFEM *refem, char *imagem)
{
    cputsxy(refem->posX, refem->posY, imagem);
    troca_cor();
}

void limpa_tela()
{
    system("cls");
}


/*
5)	Fa�a uma fun��o movimenta com os par�metros adequados para controlar um la�o de N repeti��es que, a cada itera��o:
a)	leia uma nova dire��o para o jogador a partir das setas, lendo-a do teclado. Esta fun��o j� foi definida em aulas passadas.
b)	chame a fun��o de mover o jogador com a nova dire��o lida do teclado;
c)	imprimir um (ou mais) espa�os em branco na atual posi��o do jogador e imprimir o jogador. Esta fun��o pode ser chamada dentro da fun��o move_jogador que lida com as coordenadas anteriores e pr�ximas do jogador.
*/

void move_principal (REFEM *refem)
{
    char tecla;


    do
    {
        tecla=getch();
        switch(tecla)
        {
            case 72:
                if(refem->posY >= LIMITE_CIMA)
                {
                    imprime(refem, "       ");
                    refem->posY--;//cima
                    imprime(refem, refem->picture);

                }
                break;
            case 80:
                if(refem->posY < LIMITE_BAIXO)
                {
                    imprime(refem, "       ");
                    refem->posY++;//baixo
                    imprime(refem, refem->picture);

                }
                break;
            case 75:
                if(refem->posX >= LIMITE_ESQ)
                {
                    imprime(refem, "       ");
                    refem->posX--;//esquerda
                    imprime(refem, refem->picture);

                }
                break;
            case 77:
                if(refem->posX <= LIMITE_DIR)
                {
                    imprime(refem, "       ");
                    refem->posX++;//direita
                    imprime(refem, refem->picture);
                }
                break;
            default:
                break;
        }

    }
    while(tecla != 27);


}

int main()
{
    REFEM jogador;

    /*
    Na fun��o main, criar a vari�vel player do tipo JOGADOR, inicializando-a
    com coordenadas v�lidas do jogo e demais valores.
    */

    jogador.posX = POSINI_X;
    jogador.posY = POSINI_Y;
    jogador.level = 1;
    jogador.contVida = 5;
    jogador.pontos = 0;
    jogador.time = 5000;
    strcpy(jogador.picture, "O)O.-=");

    move_principal(&jogador);

    return 0;

}
