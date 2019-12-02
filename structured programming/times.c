#define NTIMES 5
struct est_time
{
    char nome[15];
    int pontos;
};
struct est_resultado
{
    int local, visitante; //????
};

void resultado(char n1[15], char n2[15], int *p1, int *p2);

int main()
{
    int result;

    struct est_time times[NTIMES] = {"Alemanha", 0, "Franca", 0, "Brasil", 0,"Italia", 0,"Argentina", 0};
    struct est_resultado jogos[NTIMES][NTIMES];  //????

    resultado(times[0].nome, times[1].nome, &times[0].pontos, &times[1].pontos);
    resultado(times[0].nome, times[2].nome, &times[0].pontos, &times[2].pontos);
    resultado(times[0].nome, times[3].nome, &times[0].pontos, &times[3].pontos);
    resultado(times[0].nome, times[4].nome, &times[0].pontos, &times[4].pontos);
    resultado(times[1].nome, times[0].nome, &times[1].pontos, &times[0].pontos);
    resultado(times[1].nome, times[2].nome, &times[1].pontos, &times[2].pontos);
    resultado(times[1].nome, times[3].nome, &times[1].pontos, &times[3].pontos);
    resultado(times[1].nome, times[4].nome, &times[1].pontos, &times[4].pontos);
    resultado(times[2].nome, times[0].nome, &times[2].pontos, &times[0].pontos);
    resultado(times[2].nome, times[1].nome, &times[2].pontos, &times[1].pontos);
    resultado(times[2].nome, times[3].nome, &times[2].pontos, &times[3].pontos);
    resultado(times[2].nome, times[4].nome, &times[2].pontos, &times[4].pontos);
    resultado(times[3].nome, times[0].nome, &times[3].pontos, &times[0].pontos);
    resultado(times[3].nome, times[1].nome, &times[3].pontos, &times[1].pontos);
    resultado(times[3].nome, times[2].nome, &times[3].pontos, &times[2].pontos);
    resultado(times[3].nome, times[4].nome, &times[3].pontos, &times[4].pontos);
    resultado(times[4].nome, times[0].nome, &times[4].pontos, &times[0].pontos);
    resultado(times[4].nome, times[1].nome, &times[4].pontos, &times[1].pontos);
    resultado(times[4].nome, times[2].nome, &times[4].pontos, &times[2].pontos);
    resultado(times[4].nome, times[3].nome, &times[4].pontos, &times[3].pontos);

    printf("\npontos da Alemanha : %d\n", times[0].pontos);
    printf("pontos da Franca : %d\n", times[1].pontos);
    printf("pontos do Brasil : %d\n", times[2].pontos);
    printf("pontos da Italia : %d\n", times[3].pontos);
    printf("pontos da Argentina : %d\n", times[4].pontos);
}

void resultado(char n1[15], char n2[15], int *p1, int *p2)
{
    int result;

    printf ("Vencedor da Partida %s Vs %s(1, 2 ou 3 para empate): ", n1, n2);
    scanf ("%d", &result);

    switch(result)
    {
        case 1 : *p1 = *p1 + 2;
        break;
        case 2 : *p2 = *p2 + 2;
        break;
        default : *p1 = *p1 + 1, *p2 = *p2 + 1;
    }

}
