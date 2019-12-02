#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX 200

void listar_dados(FILE *fp);

int main()
{
    system("mode con:cols=125 lines=35");

    int ano, latitude, longitude;
    char numero[7], nome[30], classe[100], buf[MAX];

    FILE *fp;

    FILE *fpbin;

    fp = fopen("usacarriers.txt", "r");
    fpbin = fopen("usacarriers.bin", "w+b");

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

                fwrite(numero,1,sizeof(numero),fpbin);
                fwrite(nome,1,sizeof(nome),fpbin);
                fwrite(&ano,1,sizeof(int),fpbin);
                fwrite(classe,1,sizeof(classe),fpbin);
                fwrite(&latitude,1,sizeof(int),fpbin);
                fwrite(&longitude,1,sizeof(int),fpbin);

            }
        }
        //printf("---------+--------------------------+--------+----------------------------------------------+-----+-------\n");

        fclose(fp);
        fclose(fpbin);
    }
    else
    {
        printf("Erro ao abrir o Arquivo");
    }

    fpbin = fopen("usacarriers.bin", "r+b");

    //rewind(fpbin);
    if (fpbin != NULL)
    {

        while(!feof(fpbin))
        {
            fread(numero,1,sizeof(numero),fpbin);
            fread(nome,1,sizeof(nome),fpbin);
            fread(&ano,1,sizeof(int),fpbin);
            fread(classe,1,sizeof(classe),fpbin);
            fread(&latitude,1, sizeof(int),fpbin);
            fread(&longitude,1, sizeof(int),fpbin);

            printf("%20s | %20s | %03d | %20s | \t%03d | \t%03d \n", numero, nome, ano, classe, latitude, longitude);
        }

    }
    else
    {
        printf("Erro ao criar o Arquivo Bin");
    }
    fclose(fpbin);

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
