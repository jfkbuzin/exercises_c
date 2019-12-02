#include <stdio.h>
#include <stdlib.h>
#define MAX 7
// função tipo ponteiro inteiro

int *maior_valor_vetor (int vet[], int num_elem_vetor)
{
    int i, *p_elem;
    p_elem = vet;
    for (i=0; i < num_elem_vetor; i++)
        if (vet[i] > *p_elem)
            p_elem = vet + i;
    return p_elem;
}

int main()
{
    int vet_acha_maior[7]={0,13,-7,20,-23,13,0},*maior;
    int i;
    printf("Vetor a ser analisado:\n");

    for (i=0; i<MAX; i++)
        printf("%5d ",vet_acha_maior[i]);

    maior = maior_valor_vetor(vet_acha_maior, MAX);

    printf("\nMaior valor encontrado:%d\n", *maior);
    system("pause>>null");
    return 0;
}
