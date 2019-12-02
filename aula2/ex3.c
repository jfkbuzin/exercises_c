/* Definir o perimetro e o raio de uma circunferencia*/
#include <stdio.h> // incluir biblioteca com os comandos

 main()
 {
    float raio;
    float PI;
    float perimetro;
    float area;

    #define  PI 3.1416

    printf("Digite o raio de uma circunferencia: ");
    scanf("%f", &raio);

    if (raio <= 0)
        printf("\nValor do raio deve ser maior que 0");
    else
    {
        perimetro = 2 * PI * raio;
        printf("\nPerimetro do Circulo: %4.2f", perimetro);
        area = PI * raio * raio;
        printf("\nArea do Circulo: %4.2f", area);
    }

    return 0;
 }

