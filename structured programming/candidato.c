#include <stdio.h>
#include <string.h>

typedef struct str_candidato
{
    char nome[30];
    char partido; // Um de: A,B,C
    int nro_votos;

} TIPO_CANDIDATO;


int main()
{
    FILE *fpbin;
    TIPO_CANDIDATO c;

    int na=0, nb=0, nc=0;
    int va=0, vb=0, vc=0;
    int maior_votos=-1;

    char nome_mais_votado[30];
    char partido_mais_votado;

    fpbin=fopen("candidatos.bin", "rb"); //cade o arquivo candidatos.bin?

    if (fpbin != NULL)
    {
        while(!feof(fpbin))
        {
            if (fread(&c,sizeof(TIPO_CANDIDATO),1,fpbin) == 1)
            {
                if (c.nro_votos > maior_votos)
                {
                    strcpy(nome_mais_votado, c.nome);
                    partido_mais_votado = c.partido;
                    maior_votos = c.nro_votos;
                }
                switch(c.partido)
                {
                    case 'A': na++; va+= c.nro_votos;
                    break;
                    case 'B': nb++; vb+= c.nro_votos;
                    break;
                    case 'C': nc++; vc+= c.nro_votos;
                    break;
                }
            }
        }

        printf("Candidato mais votado: %s do partido %c\n", nome_mais_votado, partido_mais_votado);
        printf("Numero de candidatos:\n PartidoA %d\n PartidoB %d\n PartidoC %d\n", na, nb, nc);
        printf("Totais de votos:\n PartidoA %d\n PartidoB %d\n PartidoC %d\n", va, vb, vc);

        fclose(fpbin);
    }
    else
        printf("Problema para abertura do arquivo binario!\n");

    return 0;
 }
