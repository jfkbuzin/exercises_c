/* Definir o perimetro e o raio de uma circunferencia*/
#include <stdio.h> // incluir biblioteca com os comandos
#include <ctype.h> // tolower

 main()
 {
    float raio, PI, pa;
    #define PI 3.1416

    printf("Digite o raio de uma circunferencia: ");
    scanf("%f", &raio);

    if (raio <= 0) printf("\nValor do raio deve ser maior que 0");
    else
    {
        printf("Digite 1 ou 2 para definir a area ou perimetro da circunferencia: ");
        scanf("%f", &pa);
        if (pa == 1)
        {
            pa = PI * raio * raio;
            printf("\nArea do Circulo: %4.2f", pa);
        }
        else
        {
            if (pa == 2)
            {
                pa = 2 * PI * raio;
                printf("\nPerimetro do Circulo: %4.2f", pa);
            }
                else
                    printf("\nLetra digitada não foi a ou p");
        }
    }
    return 0;
 }

