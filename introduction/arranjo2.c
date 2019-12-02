/* Programa que preenche arranjo por leitura, imprime, verifica quantas vezes um dado valor Esta no arranjo, e ordena o arranjo
Entradas: 10 valores do arranjo (lidos do teclado), e valor para comparacao
Saida: impressaodo arranjo original, do numero de valores igual ao informado, e do arranjo ordenado */
#include <stdio.h>
#include <limits.h>
#define LIM_ARRANJO 10

int main()
{
	int arranjo[LIM_ARRANJO];
	int ind_arranjo;
	int menor = INT_MAX;

	printf("Entre os %d valores inteiros do arranjo:", LIM_ARRANJO);
	for (ind_arranjo= 0; ind_arranjo < LIM_ARRANJO; ind_arranjo++)// item 1
		scanf("%d", &arranjo[ind_arranjo]);

	printf("Escrita do arranjo\n");
	for (ind_arranjo = 0; ind_arranjo < LIM_ARRANJO; ind_arranjo++) // item 2
		printf("%d", arranjo[ind_arranjo]);
	printf("\n\n");

	int val_lido;       // valor lido
	int cont; // contador
	printf("Entre um valor inteiro:");
	scanf("%d", &val_lido);                //  item 3

	cont= 0;                        // item 4
	for (ind_arranjo= 0; ind_arranjo< LIM_ARRANJO; ind_arranjo++)
		if(arranjo[ind_arranjo] == val_lido)
			cont++;
	printf("O valor %d aparece %d vezes no arranjo\n", val_lido, cont);
	printf("\n\n");

	printf("Os seguintes valores do arranjo sao maiores do que %d\n", val_lido);
	for (ind_arranjo= 0; ind_arranjo< LIM_ARRANJO; ind_arranjo++) // item 5
		if(arranjo[ind_arranjo] > val_lido)
			printf ("%d", arranjo[ind_arranjo]);
	printf("\n\n");


    printf("Arranjo em ordem crescente:\n");

    int ind_arranjo2;
    int ind_arranjo3;
    int aux;

    for(ind_arranjo2 = 0; ind_arranjo2 < ind_arranjo; ind_arranjo2++)
    {
        menor = ind_arranjo2;

        for(ind_arranjo3 = ind_arranjo2 + 1; ind_arranjo3 < ind_arranjo; ind_arranjo3++)
            if(arranjo[ind_arranjo3] < arranjo[menor])
            {
                menor = ind_arranjo3;
            }

        int aux = arranjo[ind_arranjo2];
        arranjo[ind_arranjo2] = arranjo[menor];
        arranjo[menor] = aux;
        printf("%d", arranjo[ind_arranjo2]);

    }
    printf("\n\n");
}
