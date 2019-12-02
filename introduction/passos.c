/* Define a distancia em Km que John Doe correu*/
#include <stdio.h> // incluir biblioteca com os comandos

 main()
 {
    float passos_primeiro_min;
    float passos_ultimo_min;
    float tempo_total_horas;
    float tempo_total_min;
    float tempo_total;
    float distancia;
    float media_passos;
    float passo;

    #define passo 70

    printf("Digite o numero de passos no primeiro minuto: ");
    scanf("%f", &passos_primeiro_min);

    printf("Digite o numero de passos no ultimo minuto: ");
    scanf("%f", &passos_ultimo_min);

    printf("Digite o numero de horas que John correu ao todo: ");
    scanf("%f", &tempo_total_horas);

    printf("Digite o numero de minutos extras que John correu ao todo(se tiver): ");
    scanf("%f", &tempo_total_min);

    tempo_total = tempo_total_horas * 60 + tempo_total_min;

    media_passos = ((passos_primeiro_min + passos_ultimo_min) / 2);

    distancia = ((tempo_total * media_passos * passo) / 100000);

    printf("Distancia total percorrida em Km: %4.2f", distancia);

    return 0;
 }

