#include <stdio.h>
#define MAX_CONTRIBUINTES 30

typedef struct
{
    int codigo;
    char profissao[30];
    float TaxaDesconto;

}TRABALHADOR;

void arm_conteudo(FILE *arq, TRABALHADOR *contribuintes);
void cinco(FILE *arq, TRABALHADOR *contribuintes);

int main()
{
    TRABALHADOR contribuintes[MAX_CONTRIBUINTES];
    int numcaracteres = 0;
    char caracter;

    FILE *arq;
    FILE *dat;


    arq = fopen( "profissoes.txt", "r");
    dat = fopen( "profissoes_selecionadas.dat", "wb");

    if(arq != NULL)
    {
        arm_conteudo(arq, contribuintes);
        cinco(dat, contribuintes);
    }
    else
        printf("erro ao abrir arquivo");

    fclose(arq);
    fclose(dat);


    arq = fopen( "profissoes_selecionadas.dat", "rb");

    while (!feof(arq))
    {
        fread(caracter, 1, 1, arq);
        numcaracteres++;
    }

     fclose(arq);

     printf("\n O número de caracteres do arquivo é: %d", numcaracteres);
}

void arm_conteudo(FILE *arq, TRABALHADOR *contribuintes)
{
    char buf[100];
    int ind = 0;

    while(!feof(arq))
    {
        if(fgets(buf,100,arq) != NULL)
        {
            contribuintes[ind].codigo = atoi(strtok(buf," "));
            strcpy(contribuintes[ind].profissao, strtok(NULL," "));
            contribuintes[ind].TaxaDesconto = atof(strtok(NULL," "));
            ind++;
        }
    }
}

void cinco(FILE *arq, TRABALHADOR *contribuintes)
{
    int ind;

    for(ind = 0; ind< MAX_CONTRIBUINTES;ind++)
    {
        if(contribuintes[ind].TaxaDesconto < 5)
        {
            fwrite(&contribuintes[ind].codigo,1,sizeof(int),arq);
            fwrite(contribuintes[ind].profissao,1,sizeof(contribuintes[ind].profissao),arq);
            fwrite(&contribuintes[ind].TaxaDesconto,1,sizeof(float),arq);
        }
    }
}
