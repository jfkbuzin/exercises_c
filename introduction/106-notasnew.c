/* Calcular a quantidade de notas de real necessarias para alcançar um valor inteiro */
#include <stdio.h> // incluir biblioteca com os comandos
#include <math.h> // funcao round

main()
{
    float valor;
    int cem;
    int cinquenta;
    int vinte;
    int dez;
    int cinco;
    int dois;
    int um;
    int cinquentas;
    int vinte_cinco;
    int dezs;
    int cincos;
    int uns;
    int pint;
    int pdecimal;

    printf("Digite um valor a ser convertido em notas: R$");
    scanf("%f", &valor);

    pint = ( int ) valor;
    pdecimal = ( int ) ( round ( (valor-pint) * 100) );

    cem = (pint / 100);
    pint = (pint % 100);
    cinquenta = (pint / 50);
    pint = (pint % 50);
    vinte = (pint / 20);
    pint = (pint % 20);
    dez = (pint / 10);
    pint = (pint % 10);
    cinco = (pint / 5);
    pint = (pint % 5);
    dois = (pint / 2);
    um = (pint % 2);

    printf("\n\nValor Lido: R$%.2lf\n", valor);
    printf("\nValor em Notas de Cem: %d\n", cem);
    printf("\nValor em Notas de Cinquenta: %d\n", cinquenta);
    printf("\nValor em Notas de Vinte: %d\n", vinte);
    printf("\nValor em Notas de Dez: %d\n", dez);
    printf("\nValor em Notas de Cinco: %d\n", cinco);
    printf("\nValor em Notas de Dois: %d\n", dois);
    printf("\nValor em Notas de Um: %d\n", um);

    cinquentas = (pdecimal / 50);
    pdecimal = (pdecimal % 50);
    vinte_cinco = (pdecimal / 25);
    pdecimal = (pdecimal % 25);
    dezs = (pdecimal / 10);
    pdecimal = (pdecimal % 10);
    cincos = (pdecimal / 5);
    uns = (pdecimal % 5);

    printf("\nValor em Moedas de Cinquenta: %d\n", cinquentas);
    printf("\nValor em Moedas de Vinte e Cinco: %d\n", vinte_cinco);
    printf("\nValor em Moedas de Dez: %d\n", dezs);
    printf("\nValor em Moedas de Cinco: %d\n", cincos);
    printf("\nValor em Moedas de Um: %d\n", uns);
}
