//Coletar dados de 10 entrevistados
#include <stdio.h>

int main()
{
    int entrevistado = 0;
    int clube;
    int cidade;
    int torcedores_gremio = 0;
    int torcedores_inter = 0;
    int poa_n = 0;
    float salario;
    float salario_gremio = 0;
    float salario_inter = 0;
    float media_inter = 0;
    float media_gremio = 0;
    char entrevista = 's';

    printf("Numero \tClube\n");
    printf("1 \tGremio\n");
    printf("2 \tInter\n");
    printf("3 \tOutros\n");

    printf("Numero \tCidade\n");
    printf("1 \tPorto Alegre\n");
    printf("2 \tOutras\n");

    while(entrevista == 's')
    {

        entrevistado = entrevistado + 1;
        printf("\nEntrevistado numero: %d\n", entrevistado);

        printf("Informe o clube do entrevistado: ");
        scanf("%d", &clube);

        printf("Informe o salario do entrevistado: ");
        scanf("%f", &salario);

        printf("Informe a cidade onde mora o entrevistado: ");
        scanf("%d", &cidade);

        if (clube == 1)
        {
            torcedores_gremio ++;
            salario_gremio = salario_gremio + salario;
        }

        if (clube == 2)
        {
            torcedores_inter ++;
            salario_inter = salario_inter + salario;
        }

        if ((clube == 3) && (cidade == 1))
            poa_n ++;

        printf("Entrevistar uma  outra pessoa(s ou n)?");
        fflush(stdin);
        scanf("%c", &entrevista);

    }
    if ((salario_gremio > 0) && (torcedores_gremio > 0))
    {
        media_gremio = salario_gremio / torcedores_gremio;
        printf("\nMedia de Salarios de Torcedores do Gremio Entrevistados: %4.2f\n", media_gremio);
    }

    if ((salario_inter > 0) && (torcedores_inter > 0))
    {
        media_inter = salario_inter / torcedores_inter;
        printf("\nMedia de Salarios de Torcedores do Inter Entrevistados: %4.2f\n", media_inter);
    }

    printf("\nNumero de Torcedores do Gremio Entrevistados: %d\n", torcedores_gremio);
    printf("\nNumero de Torcedores do Inter Entrevistados: %d\n", torcedores_inter);
    printf("\nPortoalegrenses entrevistados que nao torcem para o Gremio ou Inter: %d\n", poa_n);
    printf("\nNumero de Pessoas Entrevistadas: %d\n", entrevistado);
}





