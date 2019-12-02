/* Definir a nota final de um aluno*/
#include <stdio.h> // incluir biblioteca com os comandos

 main()
 {
    float nota1;
    float nota2;
    float nota3;
    float media_ponderada;

    printf("Digite o a nota da questao 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota da questao 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota da questao 3: ");
    scanf("%f", &nota3);

    media_ponderada = (((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10);

    printf("\nNota Final Aluno: %4.2f", media_ponderada);

    return 0;
 }

