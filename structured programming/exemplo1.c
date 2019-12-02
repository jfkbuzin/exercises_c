#include <stdio.h> /*biblioteca com as definições necessárias*/

FILE *arq; /*declaração global de um “ponteiro de arquivo”*/

typedef struct
{ /*declaração da estrutura utilizada*/
    char Nome[30];
    int Idade;
    float Altura;
} ATLETA;


int main()
{
 /*a função principal se encarrega
de chamar as demais funções a partir
da interação com o usuário*/
    criaInsere();
    listaArquivo();
    consultaAltura();
    insereFim();

}


void criaInsere()
{
    ATLETA buffer;
    char nome[15];
    int op;
    printf("Nome do arquivo: ");
    scanf("%s",&nome);
    if(!(arq = fopen(nome,"wb")))
    { /*abre pra leitura*/
        printf("Erro criacao ");
    }
    else
    {
        do
        { /*coleta dados do usuário e os escreve*/
            printf("\nNome: ");
            scanf("%s",&buffer.Nome);
            printf("\nIdade: ");
            scanf("%d",&buffer.Idade);
            printf("\nAltura: ");
            scanf("%f",&buffer.Altura);
            fwrite(&buffer,sizeof(ATLETA),1,arq);
            printf("\n1-InserirNovo, 2-Encerrar\n");
            op = (char)getch();
        } while(op != '2');
    fclose(arq); /*fecha*/
    }   // fim do else
}

void listaArquivo()
{
    ATLETA buffer;
    char nome[15];
    printf("Nome do arquivo: ");
    scanf("%s",&nome);
    if(!(arq = fopen(nome,"rb")))
    { /*abre pra leitura*/
        printf("Erro abertura");
    }
    else
    {
        printf("-----Comeco da listagem-----\n");

        while(!feof(arq))
        { /*até o fim do arquivo...*/
            if(fread(&buffer,sizeof(ATLETA),1,arq) == 1)
            {/*faz a leitura e confirma se o que foi lido é
            realmente uma estrutura, então imprime*/
            printf("Nome: %s\n",buffer.Nome);
            printf("Idade: %d\n",buffer.Idade);
            printf("Altura: %.2f\n\n",buffer.Altura);
            }
        }
    printf("-----Fim da listagem-----\n");
    fclose(arq);
    }// fim do else
}

void consultaAltura()
{
    int encontrado = 0, contador = 0;
    ATLETA buffer;
    char nome[15], procurado[30];
    printf("Nome do arquivo: ");
    scanf("%s",nome);
    if(!(arq = fopen(nome,"rb")))
        printf("Erro abertura");
    else
    {
        printf("Nome do procurado: ");
        scanf("%s",procurado);
        while(!feof(arq))
        {
            (fread(&buffer,sizeof(ATLETA),1,arq) == 1);
            if(!(strcmp(buffer.Nome,procurado)))
            { /*compara*/
                printf("\nAltura do procurado: %.2f",buffer.Altura);
                encontrado = 1; /*verdade, alguém foi encontrado*/
                contador++;
            }
        }
        if (!encontrado)
            printf("\nNenhum atleta encontrado");
        else
            printf("\nOcorrencias encontradas: %d",contador);
            fclose(arq);
    } // Fim do else
}

void insereFim()
{
    ATLETA buffer;
    char nome[15];
    char op;
    printf("Nome do arquivo: ");
    scanf("%s",nome);
    if(!(arq = fopen(nome,"ab")))
    { /*abre para acrescentar dados */
        printf("Erro criacao ");
    }
    else
    {
        do
        {
            printf("\nNome: ");
            scanf("%s",buffer.Nome);
            printf("\nIdade: ");
            scanf("%d",&buffer.Idade);
            printf("\nAltura: ");
            scanf("%f",&buffer.Altura);
            fwrite(&buffer,sizeof(ATLETA),1,arq);
            printf("\n1-InserirNovo, 2-Encerrar\n");
            op = (char)getch();
        } while(op != '2');
    fclose(arq);
    } // Fim do else
}
