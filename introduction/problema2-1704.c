//programa para uma matriz de 6 linhas e 4 colunas
#include <stdio.h>
#define  FILA_MAX 20
#define POLTRONA_MAX 15

int main()
{
    int lugar[FILA_MAX] [POLTRONA_MAX];
    int fila, pol;
    int contocup = 0;
    int contlivre = 0;
    int fila2, pol2;
    int fil, po;

    srand(time(0));

    for (fila = 0; fila < FILA_MAX; fila++)
        for (pol = 0; pol < POLTRONA_MAX; pol++)
        {
        lugar[fila][pol] = rand()%2;
        }

    for (fila = 0; fila < FILA_MAX; fila++)
        for (pol = 0; pol < POLTRONA_MAX; pol++)
        {
        if (lugar[fila][pol] == 0)
            contlivre++;
        if (lugar[fila][pol] == 1)
            contocup++;
        }

    printf("\nPoltornas Livres: %d", contlivre);
    printf("\nPoltornas Ocupadas: %d", contocup);

    printf ("\nInforme a fila para saber se uma poltrona esta ocupada: ");
    scanf("%d", &fila2);

    printf ("\nInforme o numero da poltrona para saber se uma poltrona esta ocupada: ");
    scanf("%d", &pol2);

    for (fila = 0; fila < FILA_MAX; fila++)
        for (pol = 0; pol < POLTRONA_MAX; pol++)
        {
            if((fila2 == fila)&&(pol2 == pol))
            {
                if (lugar[fila][pol] == 0)
                    printf("\nPoltrona Livre");
                if (lugar[fila][pol] == 1)
                    printf("\nPoltrona Ocupada");
            }
        }

    printf ("\nInforme a fila da poltrona que deseja ocupar: ");
    scanf("%d", &fil);

    printf ("\nInforme o numero da poltrona que deseja ocupar: ");
    scanf("%d", &po);

    for (fila = 0; fila < FILA_MAX; fila++)
        for (pol = 0; pol < POLTRONA_MAX; pol++)
        {
        if((fil == fila)&&(po == pol))
                lugar[fila][pol] = 1;
        }
    printf ("\nFinal de Reservas\n");

    printf("\nMapa de ocupacao das poltronas: \n");
    for (fila = 0; fila < FILA_MAX; fila++)
    {
        for (pol = 0; pol < POLTRONA_MAX; pol++)
            printf ("%d ", lugar[fila][pol]);
        printf("\n");
    }
}
