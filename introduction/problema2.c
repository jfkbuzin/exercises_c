/* emitir o salário com bonus confome o numero de vendas de um vendedor */
#include <stdio.h>

int main()
{
    int numero_vendedor;
    float sal_fixo;
    int vendas;
    float sal_premio;

    printf("\nDigite o numero do vendedor: ");
    scanf("%d", &numero_vendedor);

    printf("\nDigite o valor do salario fixo do vendedor: R$");
    scanf("%f", &sal_fixo);

    printf("\nDigite a quantidade de produtos vendidos: ");
    scanf("%d", &vendas);

    if (vendas > 100 && vendas <= 500)
        sal_premio = sal_fixo + 50;
    else
    {
        if (vendas > 500 && vendas <= 750)
            sal_premio = sal_fixo + 70;
        else
        {
          if (vendas > 750)
            sal_premio = sal_fixo + 100;
          else
            sal_premio = sal_fixo;
        }
    }

    printf("\nNumero do Vendedor: %d", numero_vendedor);
    printf("\nSalario com o Premio: R$ %4.2f", sal_premio);

}


