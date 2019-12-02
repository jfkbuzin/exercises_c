/* preço da compra de uma determinada quntidade de ovos de pascoa */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char tipo_ovo;
    float preco;
    int num_unidades;

    printf("\nDigite o tipo de ovo: ");
    scanf("%c", &tipo_ovo);
    printf("\nDigite o numero de unidades compradas: ");
    scanf("%d", &num_unidades);

    tipo_ovo=toupper(tipo_ovo);

    switch (tipo_ovo)
        {
            case 'A' : if (num_unidades <= 50)
                {
                preco = num_unidades * 12;
                printf("\nNumero unidades vendidas: %d", num_unidades);
                }
                else
                    {
                     preco = 50 * 12;
                     printf("\nNumero unidades excedido, sera calculado o preco para a compra de 50 unidades");
                    }
            break;
            case 'B' : if (num_unidades <= 30)
                {
                preco = num_unidades * 15.50;
                printf("\nNumero unidades vendidas: %d", num_unidades);
                }
                else
                    {
                     preco = 30 * 15.50;
                     printf("\nNumero unidades excedido, sera calculado o preco para a compra de 30 unidades");
                    }
            break;
            case 'C' : if (num_unidades <= 20)
                {
                preco = num_unidades * 21.30;
                printf("\nNumero unidades vendidas: %d", num_unidades);
                }
                else
                    {
                     preco = 20 * 21.30;
                     printf("\nNumero unidades excedido, sera calculado o preco para a compra de 20 unidades");
                    }
            break;
            default : printf("\nTipo de ovo incorreto");
        }

    printf("\nProduto Solicitado: %c", tipo_ovo);
    printf("\nValor a pagar: R$ %4.2f", preco);

}


