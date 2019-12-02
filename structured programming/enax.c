//
#include <stdio.h>

float potencia (float, int);

float fatorial (int);

float EnaX (float);

int main()
{
    float x;

    printf("Digite um valor para x: ");
    scanf("%f", &x);
    printf("\n\n");

    printf("\ntotal: %6.6f\n", EnaX(x));
}

float fatorial (int n)
{
    float i, fat;
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

float potencia (float x, int n )
{
    float pot = x;
    float exp;

    if(n == 0)
        pot = 1;

    if(n == 1)
        pot = x;

    for (exp=1; exp<n ;exp++)
        pot = pot * x;

    return pot;
}

float EnaX(float x)
{
    int n = 0;
    float a = 1;
    float ex;
    float total = 0;

    while(a>0.0001)
    {
        ex = (potencia(x, n) / fatorial(n));
        total = total + ex;
        a=ex;
        n++;
        printf("\nex: %6.6f\n", ex);
    }
    return total;

}
