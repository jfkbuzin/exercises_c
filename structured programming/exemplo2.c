    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {

        // Escrever no Arquivo

        FILE *fp;
        int i;

        fp = fopen("Arquivo.txt", "w");

        if (fp != NULL)
        {
          for (i= 1; i <= 100; i++)
          {
            fprintf(fp,"unit_%003d\n",i);
          }
        }
            else
            {
                printf("Erro ao criar o Arquivo");
            }
        fclose(fp);

        printf("\nPrograma criado com sucesso\n\n");


        // Ler o Arquivo

        const int STR_TAMANHO = 25;

        FILE *arquivo = fopen("Arquivo.txt", "r");
        char ler[STR_TAMANHO];


        if(arquivo != NULL)
        {

            while(fgets(ler, STR_TAMANHO, arquivo))
            {
                printf("%s", ler);
            }
        }
                else
                {
                    printf("Nao foi possivel abrir o arquivo.");
                }
        fclose(arquivo);

        printf("\n\n");
        system("Pause");
        return 0;

    }
