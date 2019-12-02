//
#include <stdio.h>

int main()
{
    int m[10][2];
    int est, pre;
    int codigo;
    int compra;
    float total = 0;
    float produto;
    char resposta;

    for(est=0;est<10;est++)
    {
        for(pre=0;pre<2;pre++)
        {
            if(pre==0)
            {
                printf("\nDigite a quantidade em estoque do produto de codigo %d : ", est);
                scanf("%d", &m[est][pre]);
            }
            if(pre==1)
            {
                printf("\nDigite o preco do do produto de codigo %d : ", est);
                scanf("%d", &m[est][pre]);
            }
        }
    }

    printf("\nLista Completa de Produtos: \n");
    printf("Codigo \tEstoque \tPreco \n");

    for(est=0;est<10;est++)
    {
        codigo = est;
        printf("%d     *     ", codigo);


        for(pre=0;pre<2;pre++)
            printf("%d     *     ", m[est][pre]);

        printf("\n\n");
    }

    do
    {
        printf("Informe o codigo do produto: ");
        scanf("%d", &codigo);

        printf("Informe a quantidade de produtos a ser comprada: ");
        scanf("%d", &compra);

        switch(codigo)
        {
            case 0 : if(m[0][0] > compra)
                    {
                        m[0][0] = m[0][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 1 : if(m[1][0] > compra)
                    {
                        m[1][0] = m[1][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 2 : if(m[2][0] > compra)
                    {
                        m[2][0] = m[2][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 3 : if(m[3][0] > compra)
                    {
                        m[3][0] = m[3][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 4 : if(m[4][0] > compra)
                    {
                        m[4][0] = m[4][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 5 : if(m[5][0] > compra)
                    {
                        m[5][0] = m[5][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 6 : if(m[6][0] > compra)
                    {
                        m[6][0] = m[6][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 7 : if(m[7][0] > compra)
                    {
                        m[7][0] = m[7][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 8 : if(m[8][0] > compra)
                    {
                        m[8][0] = m[8][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            case 9 : if(m[9][0] > compra)
                    {
                        m[9][0] = m[9][0] - compra;
                    }
                    else
                        printf("\nNao ha essa quantidade de produtos em estoque");
            break;
            default : printf("Codigo Incorreto");
        }

        for(est=0;est<10;est++)
        {
            produto = m[est][0] * m[est][1];
            total = total + produto;
        }

        printf("\nValor total de todos os produtos em estoque: R$%6.2f\n", total);

        printf("\nLista de produtos com menos de 10 unidades em estoque: ");
        printf("\nCodigo \tEstoque \tPreco \n");

        for(est=0;est<10;est++)
        {
            if(m[est][0] < 10)
            {
                printf("%d     *     ", est);
                printf("%d     *     %d", m[est][0], m[est][1]);
            }
            printf("\n\n");
        }


        printf("\nDeseja continuar ou sair(c/s)? ");
        scanf(" %c", &resposta);


    } while(resposta == 'c');


    return 0;
}
