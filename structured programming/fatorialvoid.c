/*
Programa que calcula a combinacao de n elementos tomados p a p
Entradas: valores de n e p
Saida: Combinacao de n elementos tomados p a p
*/
#include<stdio.h>
#include<stdlib.h>

int fatorial (int);

int combinacoes (int, int);


int main()
{
    int n, p;
    char resp;

    do
    {
        printf("digite n e p: ");
        scanf("%d%d",&n,&p);

        printf("combinacoes de %d elementos %d a %d = %d", n,p,p,combinacoes (n,p));
        printf("\nOutra? (s/n)");

        fflush(stdin);
        resp=getchar();

    }while (resp!='n');

    system("pause");
}

int fatorial (int n)
{
    int i, fat;
    if (n < 0)
        fat=0;
    else
    {
        fat = 1;
        for (i=n; i>=1 ;i--)
            fat = fat * i;
    }
    return fat;
}

int combinacoes (int n, int p)
{
    return fatorial(n) / ( fatorial(p) * fatorial(n-p) );
}
