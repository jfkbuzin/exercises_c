#include <stdio.h>
#define NTURMAS 10
#define NALUNOS 30

void le_notas(float mat[][NALUNOS],int nturmas,int nalunos)
{
    int i,j;
    for (i= 0; i< nturmas; i++)
        for (j= 0; j< nalunos; j++)
        {
            printf("Entre com a nota da turma %d e aluno %d\n",i+1,j+1);
            scanf("%f", &mat[i][j]);
        }
}

void exibe_notas(float mat[][NALUNOS], int nturmas, int nalunos)
{
    int i,j;
    for (i= 0; i< nturmas; i++)
    {
        printf("-----Notas da turma %d-------\n", i+1);
        for(j= 0; j< nalunos; j++)
        {
            printf("Notas do aluno %2d = %3.2f\n",j+1, mat[i][j]);
        }
        printf("\n\n");
    }
}

char menu(void)
{
    char op;
    printf("Entre com a opcao:\n");
    printf("L - Ler notas\n E - Escrevas notas\n Q - Sair\n");
    scanf(" %c", &op);
    return op;
}

int main()
{
    float mat[NTURMAS][NALUNOS];
    int i,j, op, nal, nt;

    do
    {
        printf("Entre com o nro de alunos: ");
        scanf("%d",&nal);

    } while(nal < 0 || nal > 30);

    do
    {
        printf("Entre com o nro de turmas: ");
        scanf("%d", &nt);

    } while(nt < 0 || nt > 10);

    do
    {
        op=menu();

        switch(op=toupper(op))
        {
            case 'L': le_notas(mat, nt, nal);
            break;
            case 'E': exibe_notas( mat, nt, nal);
            break;
            case 'Q': break;
            default: printf("Opcao invalida!\n");
        }

    } while (op != 'Q');

    return 0;
}
