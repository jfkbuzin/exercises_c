/* preço de uma compra de um determidado produto */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char codigo_prod;
    codigo_prod=toupper(codigo_prod);
    float preco;
    float num_unidades;
    int produtos;
    float preco_total = 0;

    printf("Codigo \tProduto \tPreco\n");
    printf("C \tCaderno 50fls \tR$3.00\n");
    printf("E \tEsferografica \tR$2.50\n");
    printf("L \tLapis         \tR$1.20\n");
    printf("F \tFolhas A4-pac \tR$4.50\n");

    for(produtos=1;produtos<=3;produtos++)
    {
        printf("\nDigite o codigo do produto: ");
        fflush(stdin);
        scanf("%c", &codigo_prod);

        printf("\nDigite o numero de unidades compradas: ");
        scanf("%f", &num_unidades);

        switch (codigo_prod)
        {
            case 'C' : preco = num_unidades * 3;
            break;
            case 'E' : preco = num_unidades * 2.5;
            break;
            case 'L' : preco = num_unidades * 1.2;
            break;
            case 'F' : preco = num_unidades * 4.5;
            break;
            default : printf("\nCodigo do produto incorreto\n");
        }
        preco_total = preco_total + preco;
    }


    printf("\nValor a pagar: R$ %4.2f", preco_total);

}


