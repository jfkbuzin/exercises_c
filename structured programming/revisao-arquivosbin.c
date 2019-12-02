#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

void listar_dados(FILE *fp);

int main()
{
    system("mode con:cols=125 lines=35");

    int ano, latitude, longitude;
    char numero[7], nome[30], classe[100], buf[MAX];

    FILE *fp;

    FILE *fpbin;

    fp = fopen("usacarriers.txt", "r");

    if (fp != NULL)
    {
        //printf("    NUM  |          NOME            |   ANO  |   CLASSE                                    | LAT | LONG \n");
        //printf("---------+--------------------------+--------+---------------------------------------------+-----+--------\n");

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

                //printf("%20s | %20s | %03d | %20s | %03d | %03d \n", numero, nome, ano, classe, latitude, longitude);
            }
        }
        //printf("---------+--------------------------+--------+----------------------------------------------+-----+-------\n");

        fclose(fp);
    }
    else
    {
        printf("Erro ao abrir o Arquivo");
    }
    fclose(fp);

    fpbin = fopen("usacarriers.bin", "wb");

    if (fpbin != NULL)
    {
        while(!feof(fpbin))
        {
            fwrite(&numero,sizeof(char),1,fpbin);
            fwrite(&nome,sizeof(char),1,fpbin);
            fwrite(&ano,sizeof(int),1,fpbin);
            fwrite(&classe,sizeof(char),1,fpbin);
            fwrite(&latitude,sizeof(int),1,fpbin);
            fwrite(&longitude,sizeof(int),1,fpbin);

        }

    }
    else
    {
        printf("Erro ao criar o Arquivo Bin");
    }
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
