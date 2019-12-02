//
#include<stdio.h>
#include<string.h>

int eh_primo(int);

int main()
{
    int pri = 0;

    while(pri >= 0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &pri);

        if(eh_primo(pri) == 0)
            printf("\nEh Primo");

        if(eh_primo(pri) == 1)
            printf("\nNao Eh Primo");
    }
}

int eh_primo(int pri)
{
    int res;
    int primos[7];
    int ind;
    float resto;

    for(ind=0;ind<7;ind++)
    {
        switch(ind)
        {
            case 0 : primos[ind] = 2;
            break;
            case 1 : primos[ind] = 3;
            break;
            case 2 : primos[ind] = 5;
            break;
            case 3 : primos[ind] = 7;
            break;
            case 4 : primos[ind] = 11;
            break;
            case 5 : primos[ind] = 13;
            break;
            case 6 : primos[ind] = 17;
            break;
        }
    }

    if((pri == 2)||(pri == 3)||(pri == 5)||(pri == 7)||(pri == 11)||(pri == 13)||(pri == 17))
        res = 0;
    else
    {
        for(ind=0;ind<7;ind++)
        {
        resto = pri % primos[ind];

        if(resto == 0)
            res = 1;
        }
    }
    return res;
}
