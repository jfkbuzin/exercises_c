#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

void listar_dados(FILE *fp);

int main()
{
    system("mode con:cols=125 lines=35");

    //int ano, latitude, longitude;
    //char numero[7], nome[30], classe[100], buf[MAX];

    FILE *fp;

    //FILE *fpbin;

    fp = fopen("usacarriers.txt", "r");
    //fpbin = fopen("usacarriers.bin", "wb");

    if (fp != NULL)
    {
        listar_dados(fp);
    }
    else
    {
        printf("Erro ao abrir o Arquivo");
    }
    fclose(fp);

    printf("\nPrograma encerrado com sucesso\n\n");

}


void listar_dados(FILE *fp)
{
    int ano, latitude, longitude;
    char numero[7], nome[30], classe[100], buf[MAX];

    printf("    NUM  |          NOME            |   ANO  |   CLASSE                                    | LAT | LONG \n");
    printf("---------+--------------------------+--------+---------------------------------------------+-----+--------\n");

    while(!feof(fp))
    {
        if(fgets(buf,MAX,fp) != NULL)
        {
            strcpy(numero, strtok(buf,"$"));
            strcpy(nome, strtok(NULL,"$"));
            ano = atoi(strtok(NULL,"$"));
            strcpy(classe, strtok(NULL,"$"));
            latitude = atoi(strtok(NULL,"$"));
            longitude = atoi(strtok(NULL,"$"));

            printf("%20s | %20s | %03d | %20s | %03d | %03d \n", numero, nome, ano, classe, latitude, longitude);
        }
    }
    printf("---------+--------------------------+--------+----------------------------------------------+-----+-------\n");
}
