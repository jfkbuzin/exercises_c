/* mensagem do saldo atualizado após o desconto de 3 cheques */
#include <stdio.h>

int main()
{
    float saldo_atual;
    float cheque1;
    float cheque2;
    float cheque3;

    printf("\nDigite o saldo atual da conta: R$");
    scanf("%f", &saldo_atual);

    printf("\nDigite o valor do primeiro cheque: R$");
    scanf("%f", &cheque1);

    if (cheque1 > saldo_atual)
        printf("\nSaldo Insuficiente para descontar o cheque");
        else
            saldo_atual = saldo_atual - cheque1;

    printf("\nDigite o valor do segundo cheque: R$");
    scanf("%f", &cheque2);

    if (cheque2 > saldo_atual)
        printf("\nSaldo Insuficiente para descontar o cheque");
        else
            saldo_atual = saldo_atual - cheque2;

    printf("\nDigite o valor do terceiro cheque: R$");
    scanf("%f", &cheque3);

    if (cheque3 > saldo_atual)
        printf("\nSaldo Insuficiente para descontar o cheque");
        else
            saldo_atual = saldo_atual - cheque3;

    printf("\nSaldo atualizado: RS %4.2f", saldo_atual);

}


