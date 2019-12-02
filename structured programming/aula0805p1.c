
#include <stdio.h>
#include <ctype.h>

void menuf(char vet1[5], char vet2[5][20], float vet3[5]);

int main()
{
    char menu[5] = {'A', 'B', 'C', 'D', 'E'};
    char menu2[5][20] = {"refrigerante", "Casquinha Simples", "Casquinha Dupla", "Sundae", "Banana Split"};
    float menu3[5] = {0.60, 1, 1.2, 1.5, 2};

    char codigo;
    float tota = 0;
    float totb = 0;
    float totc = 0;
    float totd = 0;
    float tote = 0;
    char continua = 'S';
    float pagar;
    float numa = 0;
    float numb = 0;
    float numc = 0;
    float numd = 0;
    float nume = 0;
    float numtot;
    float media;


    do
    {
        menuf(menu, menu2, menu3);

        printf("\nDigite o codigo do produto que deseja comprar: ");
        scanf("%c", &codigo);

        codigo=toupper(codigo);

        switch(codigo)
        {
            case 'A' : tota = tota + 0.60;
            break;
            case 'B' : totb = totb + 1;
            break;
            case 'C' : totc = totc + 1.2;
            break;
            case 'D' : totd = totd + 1.5;
            break;
            case 'E' : tote = tote + 2;
            break;
            default : printf("\ncodigo errado\n");
        }

        switch(codigo)
        {
            case 'A' : numa++;
            break;
            case 'B' : numb++;
            break;
            case 'C' : numc++;
            break;
            case 'D' : numd++;
            break;
            case 'E' : nume++;
            break;
            default : break;
        }

        printf("\nComprar mais um produto?(s/n) ");
        fflush(stdin);
        scanf("%c", &continua);

        continua=toupper(continua);

    } while(continua == 'S');

    pagar = tota + totb + totc + totd + tote;
    numtot = numa + numb + numc + numd + nume;
    printf("\nTotal a pagar : %6.2f\n\n", pagar);

    printf("\nRelatorio: \n");
    printf("\nNumero total de refrigerantes vendidos e total pago: %6.2f %6.2f\n", numa, tota);
    printf("\nNumero total de casquinhas simples vendidas e total pago: %6.2f %6.2f\n", numb, totb);
    printf("\nNumero total de casquinhas duplas vendidas e total pago: %6.2f %6.2f\n", numc, totc);
    printf("\nNumero total de sundae vendidos e total pago: %6.2f %6.2f\n", numd, totd);
    printf("\nNumero total de bananas split vendidas e total pago: %6.2f %6.2f\n\n", nume, tote);
    printf("\nTotal arrecadado : %6.2f\n\n", pagar);

    media = pagar / numtot;
    printf("\nMedia de valor pago por pedido : %6.2f\n", media);


}

void menuf(char vet1[5], char vet2[5][20], float vet3[5])
{
    int lin = 0;

    printf("\nMenu:\n");
    printf("Codigo \tProduto \t\t  Preco\n");

    while(lin<5)
    {
                switch(lin)
                {
                    case 0 : printf(" %c  ", vet1[lin]);
                    break;
                    case 1 : printf(" %c  ", vet1[lin]);
                    break;
                    case 2 : printf(" %c  ", vet1[lin]);
                    break;
                    case 3 : printf(" %c  ", vet1[lin]);
                    break;
                    default : printf(" %c  ", vet1[lin]);
                }

                fflush(stdin);


                switch(lin)
                {
                    case 0 : printf(" %s  ", vet2[lin]);
                    break;
                    case 1 : printf(" %s  ", vet2[lin]);
                    break;
                    case 2 : printf(" %s  ", vet2[lin]);
                    break;
                    case 3 : printf(" %s  ", vet2[lin]);
                    break;
                    default : printf(" %s  ", vet2[lin]);
                }


                switch(lin)
                {
                    case 0 : printf("\t\t %6.2f \n", vet3[lin]);
                    break;
                    case 1 : printf("\t %6.2f \n", vet3[lin]);
                    break;
                    case 2 : printf("\t\t %6.2f \n", vet3[lin]);
                    break;
                    case 3 : printf("\t\t\t %6.2f \n", vet3[lin]);
                    break;
                    default : printf("\t\t %6.2f \n", vet3[lin]);
                }

                lin++;
    }
}
