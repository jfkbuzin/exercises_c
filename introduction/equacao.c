/* Programa Equacao de Segundo Grau */
#include<stdio.h>
#include<math.h> // para usar funçãosqrt

int main ()
{
    float a,b,c; //coeficientes
    float disc; // discriminante
    float r1,r2; // raízes

    printf("digite A:");
    scanf("%f",&a);

    printf("digite B:");
    scanf("%f",&b);

    printf("digite C:");
    scanf("%f",&c);

    if (a == 0)
        {
        printf("não e equação de segundo grau\n");
        }
        else
            {
            disc = (b * b) - (4 * a * c);
            printf("disc: %4.2f\n", disc);
            if (disc < 0)
                printf("raizes nao reais\n");
            else
                if (disc == 0)
                {
                r1 = -b / (2 * a);
                printf("raiz unica: %4.2f\n", r1);
                }
                else
                    {
                    r1 = ( -b + sqrt (disc) ) / (2*a);
                    r2 = ( -b - sqrt (disc) ) / (2*a);
                    printf("raiz 1 : %4.2f\n", r1);
                    printf("raiz 2 : %4.2f\n", r2);
                    }
            }

return 0;
}
