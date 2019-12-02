/* Definir o local onde se encontra uma ponto em um gráfico*/
#include <stdio.h> // incluir biblioteca com os comandos

 main()
 {
    int x;
    int y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("\nDigite um valor para y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
        printf("\no ponto esta na origem");

    if (x > 0 && y > 0)
        printf("\no ponto esta no primeiro quadrante");

    if (((x > 0) || (x < 0)) && (y == 0))
        printf("\no ponto esta na reta x");

    if (x > 0 && y < 0)
        printf("\no ponto esta no quarto quadrante");

    if (((y > 0) || (y < 0)) && (x == 0))
        printf("\no ponto esta na reta y");

    if (x < 0 && y < 0)
        printf("\no ponto esta no terceiro quadrante");

    if (x < 0 && y > 0)
        printf("\no ponto esta no segundo quadrante");

    return 0;
 }

