/* Converter o preço de um produto em reais para dolar */
#include <stdio.h> // incluir biblioteca com os comandos


main()
{
    float a;
    float b;
    float divisao;

    printf("Digite o preco do produto em reais: R$");
    scanf("%f", &a);

    printf("\nDigite o valor da taxa do dolar: $");
    scanf("%f", &b);

    divisao = (a / b);

    printf("\nPreco do Produto em Dolares: $%4.2f", divisao);

}
