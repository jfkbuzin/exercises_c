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

int calcula_divisor(int a)
{
    int maxd = 0;
    int b;
    int c = 1;
    int d;

    while(maxd == 0)
    {
        b = a % (a-c);
        d = a / (a-c);

        c++;

        if(b == 0)
            maxd == d;

    }

    return maxd;
}

int main()
{
    int a,b,c;
    char d;

    printf("Digite um numero:");
    scanf("%d", &a);

    printf("Digite um numero:");
    scanf("%d", &b);

    printf("Digite um numero:");
    scanf("%d", &c);

    printf("Digite M para ver o maior ou m para ver o menor:");
    fflush(stdin);
    scanf("%c", &d);

    maimen(a, b, c, d);

    printf("\nMaior divisor comum do numero %d eh: %d", a, calcula_divisor(a));

}
