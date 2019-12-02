/* Calcular a quantidade de notas de real necessarias para alcançar um valor inteiro */
#include <stdio.h> // incluir biblioteca com os comandos

main()
{
    int valor_inteiro;
    int cem;
    int resto1;
    int resto2;
    int resto3;
    int resto4;
    int resto5;
    int resto6;
    int cinquenta;
    int vinte;
    int dez;
    int cinco;
    int dois;
    int um;

    printf("Digite um valor inteiro: R$");
    scanf("%d", &valor_inteiro);

    cem = (valor_inteiro / 100);
    resto1 = (valor_inteiro % 100);
    cinquenta = (resto1 / 50);
    resto2 = (resto1 % 50);
    vinte = (resto2 / 20);
    resto3 = (resto2 % 20);
    dez = (resto3 / 10);
    resto4 = (resto3 % 10);
    cinco = (resto4 / 5);
    resto5 = (resto4 % 5);
    dois = (resto5 / 2);
    resto6 = (resto5 % 2);
    um = (resto6 / 1);

    printf("\nValor em Notas de Cem: %d", cem);
    printf("\nValor em Notas de Cinquenta: %d", cinquenta);
    printf("\nValor em Notas de Vinte: %d", vinte);
    printf("\nValor em Notas de Dez: %d", dez);
    printf("\nValor em Notas de Cinco: %d", cinco);
    printf("\nValor em Notas de Dois: %d", dois);
    printf("\nValor em Notas de Um: %d", um);

}
