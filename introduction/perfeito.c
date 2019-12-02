//Encontrar numeros perfeitos
#include <stdio.h>

int main()
{
    int contador;
    int divisao;
    int numero = 0;
    int resto;

    for(contador=2;contador<=100;contador++)
        {
        for(divisao=1;divisao<contador;divisao++)
            {
            resto = contador%divisao;
            if (resto == 0)
                numero = divisao + numero;
            }
        if (contador == numero)
            {
            printf("Numero Perfeito : \t%d\n", numero);
            }
        numero = 0;
        }

}





