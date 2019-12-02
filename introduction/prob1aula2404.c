
#include <stdio.h>

int main()
{

    char m[100];
    char carac[2][8];
    int col, sub;
    char ch;
    int ind;
    int i;

    for(i=0;i<1;i++)
    {
        printf("Informe um texto para ser decodificado: ");
        gets(m);
    }


    fflush(stdin);
    printf("\ntexto para ser decodificado: %s\n", m);

    for(sub = 0;sub < 8;sub++)
    {
        switch(sub)
        {
            case 0 : carac[0][sub] = 'z';
            break;
            case 1 : carac[0][sub] = 'y';
            break;
            case 2 : carac[0][sub] = 'w';
            break;
            case 3 : carac[0][sub] = 'k';
            break;
            case 4 : carac[0][sub] = 'K';
            break;
            case 5 : carac[0][sub] = 'b';
            break;
            case 6 : carac[0][sub] = 'd';
            break;
            default : carac[0][sub] = 'f';
        }

        fflush(stdin);
        printf(" %c *", carac[0][sub]);

        switch(sub)
        {
            case 0 : carac[1][sub] = 'A';
            break;
            case 1 : carac[1][sub] = 'E';
            break;
            case 2 : carac[1][sub] = 'O';
            break;
            case 3 : carac[1][sub] = 'T';
            break;
            case 4 : carac[1][sub] = 'T';
            break;
            case 5 : carac[1][sub] = 'M';
            break;
            case 6 : carac[1][sub] = 'N';
            break;
            default : carac[1][sub] = 'P';
        }

        fflush(stdin);
        printf(" %c *\n", carac[1][sub]);
    }

    for(sub=0;sub<8;sub++)
    {
        for(ind=0;ind<100;ind++)
        {
            if(m[ind] == carac[0][sub])
            {
                m[ind] = carac[1][sub];
                fflush(stdin);
            }
        }
    }
    fflush(stdin);
    printf("texto decodificado : %s\n", m);
}
