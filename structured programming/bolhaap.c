#include<stdio.h>
#include<stdlib.h>
#define TAM_VEC 5

int BuscaListaOrdenada(int vet[], int, int);

void ClassificaBolhaAprimorado(int vet[ ], int n);

int main()
{
    int ind, pos, num;
    int v[TAM_VEC];

    printf("Entre os %d valores do vetor, separados por espacos:", TAM_VEC);

    for (ind = 0; ind < TAM_VEC; ind++)
        scanf("%d", v+ind);

    ClassificaBolhaAprimorado (v, TAM_VEC);

    printf("Vetor ordenado:\n");

    for (ind = 0; ind < TAM_VEC; ind++)
        printf("%d ", v[ind]);

    printf("\n");

    printf("Entre um numero inteiro :");

    scanf ("%d",&num);

    pos = BuscaListaOrdenada(v, TAM_VEC, num);

    if (pos == -1)
        printf("Valor %d nao presente no vetor.\n", num);
    else
        printf("Valor %d ocorre na posicao %d do vetor ordenado.\n", num, pos);

    system("pause");

    return 0;
}

int BuscaListaOrdenada(int vet[ ], int n, int val)
{
    int ind, pos;
    int maior = 0;

    pos = -1;
    ind = 0;

    while (!maior && ind < n)
    {
        if (val <= vet[ind])
            maior = 1;
        ind++;
    }

    if (val == vet[ind-1])
        return ind-1;
    else
        return -1;
}

void ClassificaBolhaAprimorado(int vet[ ], int n)
{
    int ind, fim, sinal, aux;
    fim = n-1;

    do
    {
        sinal = 0;

        for (ind=0;ind < fim;ind++)
            if(vet[ind] > vet[ind+1])
            {
                troca(&vet[ind],&vet[ind+1]);
                sinal = 1;
            }
        fim --;

    }  while(sinal==1);
}
