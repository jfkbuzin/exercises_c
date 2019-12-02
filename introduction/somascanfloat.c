#include <stdio.h> // incluir biblioteca com os comandos

/* Realize a soma de dois números */

main()
{
    float a;
    float b;
    float soma;
    // int a, b, soma;

    // a = 2;
    // b = 227;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    soma = a + b;

    printf("Resultado da soma de %f e %f\n: %f", a, b, soma);

}
