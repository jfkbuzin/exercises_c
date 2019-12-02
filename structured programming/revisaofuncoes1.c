#include <stdio.h>

void maimen (int um, int dois, int tres, char ind)
{
    if(ind == 'M')
    {
        if(um > dois)
            if( um > tres)
                printf("%d", um);
            else
                printf("%d", tres);
        else
            if(dois > tres)
                printf("%d", dois);
            else
                printf("%d", tres);
    }

    if(ind == 'm')
    {
        if(um < dois)
            if( um < tres)
                printf("%d", um);
            else
                printf("%d", tres);
        else
            if(dois < tres)
                printf("%d", dois);
            else
                printf("%d", tres);
    }
}

void calcula_divisor(int a, float *maxd)
{
    *maxd = 0;
    int b;
    int c = a;
    float d = 1;


    while(*maxd = 0)
    {
        c--;
        b = (a % c);
        d = (a / c);

        if(b == 0)
        {
            *maxd == d;
        }

    }

}

int main()
{
    int a,b,c;
    char d;
    float maxd;

    printf("Digite um numero:");
    scanf("%d", &a);

    printf("Digite um numero:");
    scanf("%d", &b);

    printf("Digite um numero:");
    scanf("%d", &c);

    printf("\nDigite M para ver o maior ou m para ver o menor:");
    fflush(stdin);
    scanf("%c", &d);

    maimen(a, b, c, d);

    calcula_divisor(a, &maxd);

    printf("\nMaior divisor comum do numero %d eh: %5.2f", a, maxd);

    calcula_divisor(b, &maxd);

    printf("\nMaior divisor comum do numero %d eh: %5.2f", b, maxd);

    calcula_divisor(c, &maxd);

    printf("\nMaior divisor comum do numero %d eh: %5.2f", c, maxd);

    return 0;

}
