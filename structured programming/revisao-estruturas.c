#include <stdio.h>

typedef struct
{
    int dia;
    char mes[30];
    int ano;
} HORARIO;

typedef struct
{
    char nome_pac[30];
    char endereco[30];
    char convenio[30];
    char nome_med[30];
    HORARIO calendario[15];
} CONSULTA; //meia hora


void marca_c(CONSULTA *cons, int *num);

void muda_m(CONSULTA *cons);

void relatorio();

int main()
{
    //marcar consultas
    CONSULTA cons[15];
    int num = 0;

    marca_c(cons, &num);

    muda_m(cons);

    printf("Numero Total de Consultas do Dia: %d", num);

    return 0;

    //mudar o medico da consulta em deternminado horario
    //relatorio com  numero total de consultas
}

void marca_c(CONSULTA *cons, int *num)
{
    int ind = 0;
    char termino = 's';

    while(termino != 'n')
    {
        printf("\nDigite o nome do paciente que vai marcar a consulta: ");
        fflush(stdin);
        gets(cons[ind].nome_pac);

        printf("\nDigite o endereco do paciente que vai marcar a consulta: ");
        fflush(stdin);
        gets(cons[ind].endereco);

        printf("\nDigite o nome do convenio do paciente que vai marcar a consulta: ");
        fflush(stdin);
        gets(cons[ind].convenio);

        printf("\nDigite o nome do medico que fara a consulta: ");
        fflush(stdin);
        gets(cons[ind].nome_med);


        printf("\nDigite o dia da consulta: ");
        scanf("%d", &cons[ind].calendario[ind].dia);

        printf("\nDigite o mes da consulta: ");
        fflush(stdin);
        gets(cons[ind].calendario[ind].mes);

        printf("\nDigite o ano da consulta: ");
        scanf("%d", &cons[ind].calendario[ind].ano);

        ind++;
        *num = *num+1;

        if(ind == 16)
            break;

        printf("\nCriar nova consulta(s/n)?");
        fflush(stdin);
        scanf("%c", &termino);

    }

}


void muda_m(CONSULTA *cons)
{
    int d, a;
    char m[30];
    char m2[30];
    int ind;
    char termino = 's';

    while(termino != 'n')
    {

        printf("\nDigite o dia da consulta a qual deseja trocar o medico: ");
        scanf("%d", &d);

        printf("\nDigite o mes da consulta a qual deseja trocar o medico: ");
        fflush(stdin);
        gets(m);

        printf("\nDigite o ano da consulta a qual deseja trocar o medico: ");
        scanf("%d", &a);

        printf("\nDigite o nome do novo medico para atender a consulta: ");
        fflush(stdin);
        gets(m2);

        for(ind=0;ind<16;ind++)
        {
            if(d == cons[ind].calendario[ind].dia)
               if(m == cons[ind].calendario[ind].mes)
                    if(a == cons[ind].calendario[ind].ano)
                        strcpy(cons[ind].nome_med , m2);

        }


        printf("\nMudar outro medico(s/n)?");
        fflush(stdin);
        scanf("%c", &termino);


    }
}
