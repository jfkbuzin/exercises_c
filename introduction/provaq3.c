//Matriz de inteiros com 3 linhas por 6 colunas
#include <stdio.h>

int main()
{
    int m[3][6];
    int lin, col;

    for(lin=0;lin<2;lin++)
        for(col=0;col<6;col++)
        {
            printf("\ndigite um valor inteiro para o elemento[%d][%d]: ", lin, col);
            scanf("%d", &m[lin][col]);
        }

    for(lin=2;lin>1;lin--)
        for(col=0;col<6;col++)
            m[lin][col] = m[0][col] + m[1][col];

    printf("\nMatriz:\n");

    for(lin=0;lin<3;lin++)
    {
        for(col=0;col<6;col++)
            printf("%d * ", m[lin][col]);

        printf("\n\n");
    }

    int temp;

    temp = m[0][0];
    m[0][0] = m[0][2];
    m[0][2] = temp;

    temp = m[1][0];
    m[1][0] = m[1][2];
    m[1][2] = temp;

    temp = m[2][0];
    m[2][0] = m[2][2];
    m[2][2] = temp;

    int maior = 0;
    int mlin = 0;
    int mcol = 0;

    for(lin=0;lin<3;lin++)
        for(col=0;col<6;col++)
        {
            if (m[lin][col] > maior)
            {
                maior = m[lin][col];
                mlin = lin;
                mcol = col;
            }
        }

    printf("\nMatriz Final:\n");

    for(lin=0;lin<3;lin++)
    {
        for(col=0;col<6;col++)
            printf("%d * ", m[lin][col]);

        printf("\n\n");
    }

    printf("\nIndices do maior elemento da matriz: [%d][%d]", mlin, mcol);
}
