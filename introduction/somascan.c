#include <stdio.h> // incluir biblioteca com os comandos

/* Realize a soma de dois números */

main()
{
    int a;
    int b;
    int c;
    int soma;
    int produto;
    // int a, b, soma;

    // a = 2;
    // b = 227;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    soma = a + b + c;

    produto = a * b * c;

    printf("Resultado da soma de %d, %d e %d: %d", a, b, c, soma);

    printf("\nResultado do produto de %d, %d e %d: %d", a, b, c, produto);

}
