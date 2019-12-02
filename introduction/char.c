//Simular o Back Jack
#include <stdio.h>
#define LIM_PALAVRA 25

int main()
{
    char palavra[LIM_PALAVRA];
    char letra;
    int ind_palavra;
    int ind_palavra2;
    int num_letra = 0;
    char invertida[LIM_PALAVRA];

    printf("Forneca uma palavra: ");
    gets(palavra);

    printf("Forneca um caractere: ");
    letra = getchar( );
    printf("O caractere digitado: %c\n", letra);

    for(ind_palavra = 0; ind_palavra < LIM_PALAVRA; ind_palavra++)
    {
        if (palavra[ind_palavra] == letra)
           num_letra++;
    }

    printf("A letra aparece %d vezes na palavra\n", num_letra);
    printf("\n\n");

    for(ind_palavra = 0; palavra[ind_palavra]; ind_palavra++);
        ind_palavra = ind_palavra - 1;

    for(ind_palavra2 = 0,ind_palavra; ind_palavra >= 0; ind_palavra2++)
    {
        invertida[ind_palavra2] = palavra[ind_palavra];
        ind_palavra--;
    }

    invertida[ind_palavra2]='\0';

    printf("Palavra invertida: %s\n",invertida);
}
