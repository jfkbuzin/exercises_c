/*
Criar, no escopo principal, as estruturas JOGADOR, TIRO e INIMIGO utilizando typedef para armazenar
os personagens do jogo.  O exemplo a seguir  pode ser adaptado para o jogo em desenvolvimento.
*/

#define REFEM_TAM 7
typedef struct refem
{
    long int posX, posY;
    long int contVida; // vidas do refém
    long int level;
    long int time;
    long int pontos;
    char picture[REFEM_TAM];
}REFEM;

typedef struct terror
{
    long int posX, posY;
    long int level;
    long int velocidade;
    short int vida; // encurtado, apenas para indicar se o terrorista será exibido
}TERROR;

typedef struct arma
{
    int dano;
    long int velocidade;
    long int posX, posY;
    short int sentido; // usar 0 para direita e 1 para esquerda
}TIRO;

typedef struct porta
{
    int x, y;
    int tamanho;
}SAIDA;
