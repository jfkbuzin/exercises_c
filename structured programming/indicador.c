//
#include<stdio.h>

int indicador (char, int, int, int);

int main()
{
    char ind;
    int num1, num2, num3;

    puts("\nEntra com o numero 1");
    scanf("%d", &num1);

    puts("\nEntra com o numero 2");
    scanf("%d", &num2);

    puts("\nEntra com o numero 3");
    scanf("%d", &num3);

    puts("\nEntre se quer o Maior ou menor numero (M ou m)");
    scanf(" %c", &ind);

    printf("\n Resultado: %d", indicador(ind, num1, num2, num3));
}

int indicador (char ind, int num1, int num2, int num3)
{
    if (ind == 'M')
        {
            if(num1 > num2)
            {
                if(num1 > num3)
                    return num1;
                else
                    return num3;
            }
            else
            {
                if(num2 > num1)
                {
                    if(num2 > num3)
                        return num2;
                    else
                        return num3;
                }
                else
                    return num3;
            }
        }

    if (ind == 'm')
        {
            if(num1 < num2)
            {
                if(num1 < num3)
                    return num1;
                else
                    return num3;
            }
            else
            {
                if(num2 < num1)
                {
                    if(num2 < num3)
                        return num2;
                    else
                        return num3;
                }
                else
                    return num3;
            }
        }
}
