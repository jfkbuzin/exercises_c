/* Definir o salário bruto de um funcionario*/
#include <stdio.h> // incluir biblioteca com os comandos

 main()
 {
    float valor_recebido;
    float horas_mes;
    float numero_filhos;
    float produto;
    float salario_bruto;
    float salario_familha;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_mes);

    printf("\nDigite o valor recebido por hora: R$");
    scanf("%f", &valor_recebido);

    printf("\nDigite numero de filhos com menos de 14 anos: ");
    scanf("%f", &numero_filhos);

    produto = horas_mes * valor_recebido;

    if (numero_filhos > 0)
        salario_familha = numero_filhos * 37.18;
    else
        salario_familha = 0;

    salario_bruto = salario_familha + produto;

    printf("\nSalario Bruto: R$%4.2f", salario_bruto);

    return 0;
 }

