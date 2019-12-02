// Classificação pelo método da seleção : decrescente
#include <stdio.h>
#define LIM_ARRANJO 10

int main()
{
	int arranjo[LIM_ARRANJO];
	int ind_arranjo;
	int maior;

	printf("Entre os %d valores inteiros do arranjo:", LIM_ARRANJO);
	for (ind_arranjo= 0; ind_arranjo < LIM_ARRANJO; ind_arranjo++)
		scanf("%d", &arranjo[ind_arranjo]);

	printf("Escrita do arranjo\n");
	for (ind_arranjo = 0; ind_arranjo < LIM_ARRANJO; ind_arranjo++)
		printf("%d", arranjo[ind_arranjo]);
	printf("\n\n");

    printf("Arranjo em ordem decrescente:\n");

    int ind_arranjo2;
    int ind_arranjo3;
    int arranjo2[LIM_ARRANJO];
    int aux;

    for(ind_arranjo2 = 0; ind_arranjo2 < ind_arranjo; ind_arranjo2++)
    {
        maior = ind_arranjo2;
        for(ind_arranjo3 = ind_arranjo2 + 1; ind_arranjo3 < ind_arranjo; ind_arranjo3++)
            if(arranjo[ind_arranjo3] > arranjo[maior])
            {
                maior = ind_arranjo3;
            }

        int aux = arranjo[ind_arranjo2];
        arranjo[ind_arranjo2] = arranjo[maior];
        arranjo[maior] = aux;
        printf("%d", arranjo[ind_arranjo2]);
    }
    printf("\n\n");
}
