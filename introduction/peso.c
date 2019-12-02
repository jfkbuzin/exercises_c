//Encontrar numeros perfeitos
#include <stdio.h>
#include <limits.h>

int main()
{
    float contador;
    float peso;
    float soma = 0;
    float maior=INT_MIN;
    float menor=INT_MAX;


    for(contador=1;contador<=6;contador++)
        {
        printf("Digite o peso de uma pessoa: ");
        scanf("%f", &peso);
        if(peso > maior)
            maior=peso;
        if(peso < menor)
            menor=peso;
        soma = soma + peso;
        }

    printf("O maior peso eh: %4.2f\n", maior);
    printf("O menor peso eh: %4.2f\n", menor);
    printf("Soma dos pesos : %4.2f\n", soma);
}





