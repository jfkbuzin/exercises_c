#include <stdio.h>
#include <string.h>
//a)função  para  preenchimento  de  todos  os  dados  para  as lojas
//b)função  para  inclusão  de  novos  produtos  em  uma  das  lojas
//c)função  para  realização  de  venda  de  um  produto  de  uma  loja,  subtraindo  de  sua  quantidade
//d)função  para  apresentar  todos  os  produtos  de  uma  loja  específica

typedef  struct
{
    char  nome[10];
    int  quantidade; //subtrair
    float  preco_unitario;

}  PRODUTO;

typedef  struct
{
    int  codigo;
    char  nome[10];
    PRODUTO itens[5];

}  LOJA;

//a)
void ler_dados( LOJA *loja);

//b)
void novo_prod( LOJA *loja);

//c)
void venda_prod( LOJA *loja);

//d)
void mostrar_dados( LOJA *loja);

int main()
{
    LOJA lojas[3];

    ler_dados(lojas);

    novo_prod(lojas);

    venda_prod(lojas);

    mostrar_dados(lojas);
}

void ler_dados( LOJA *loja)
{
    int ind;
    int ind2;

    for(ind=0;ind<3;ind++)
    {
        printf("\nCodigo da Loja %d: ", ind);
        scanf("%d", &loja[ind].codigo);

        printf("\nNome da Loja %d: ", ind);
        fflush(stdin);
        gets(loja[ind].nome);

        for(ind2=0;ind2<5;ind2++)
        {
            strcpy( loja[ind].itens[ind2].nome, "nenhum");

            loja[ind].itens[ind2].quantidade = 0;

            loja[ind].itens[ind2].preco_unitario = 0;
        }
    }
}

void novo_prod( LOJA *loja)
{

    int ind;
    int ind2;
    char continua;
    char continua2 = 's';

    while(continua2 != 'n')
    {
        printf("\nNumero da Loja em que serao criados os novos produtos(0, 1 ou 2): ");
        scanf("%d", &ind);

        continua = 's';
        ind2 = 0;

        while (continua != 'n')
        {
            printf("\nNome do Produto %d na Loja: ", ind2);
            fflush(stdin);
            gets(loja[ind].itens[ind2].nome);

            printf("\nQuantidade do Produto %d na Loja: ", ind2);
            scanf("%d", &loja[ind].itens[ind2].quantidade);

            printf("\nPreco unitario do Produto %d na Loja: ", ind2);
            scanf("%f", &loja[ind].itens[ind2].preco_unitario);

            printf("\nCriar mais um produto(s/n)?");
            fflush(stdin);
            scanf("%c", &continua);

            ind2++;

            if (ind2 > 4)
            {
                printf("\nQuantidade maxima de produtos alcancada");
                continua == 'n';
            }
        }

        printf("\nCriar produtos para uma outra loja(s/n)?");
        fflush(stdin);
        scanf("%c", &continua2);
    }
}

void venda_prod( LOJA *loja)
{
    int ind;
    int ind2 = 0;
    int continua = 's';


    while (continua != 'n')
    {
        printf("\nNumero da Loja em que serao vendidos produtos(0, 1 ou 2): ");
        scanf("%d", &ind);

        printf("\nNumero do produto a ser vendido(0 a 4): ");
        scanf("%d", &ind2);

        if (loja[ind].itens[ind2].quantidade == 0)
        {
            printf("\nNao ha esse produto em estoque para venda");
        }
        else
            loja[ind].itens[ind2].quantidade--;

        printf("\nVender mais um produto(s/n)?");
        fflush(stdin);
        scanf("%c", &continua);
    }

}

void mostrar_dados( LOJA *loja)
{
    int ind;
    int ind2;
    int continua = 's';

    while (continua != 'n')
    {
        printf("\nNumero da Loja cujos dados serao apresentados(0, 1 ou 2): ");
        scanf("%d", &ind);

        printf("\nCodigo da Loja %d : %d\n", ind, loja[ind].codigo);

        printf("Nome da Loja %d : %s\n\n", ind, loja[ind].nome);

        for(ind2=0;ind2<5;ind2++)
        {
            printf("Nome de Produto %d na Loja  %d : %s\n", ind2, ind, loja[ind].itens[ind2].nome);

            printf("Quantidade do Produto %d na Loja %d : %d\n", ind2, ind, loja[ind].itens[ind2].quantidade);

            printf("Preco Unitario do Produto %d na Loja %d : %6.2f\n\n", ind2, ind, loja[ind].itens[ind2].preco_unitario);
        }

        printf("\nMostrar dados de outra loja(s/n)?");
        fflush(stdin);
        scanf("%c", &continua);
    }
}
