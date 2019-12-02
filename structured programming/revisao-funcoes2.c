#include <stdio.h>

void manipula_vetor1(int v[], int n, int a);
void manipula_vetor2(int v[], int n, int *a);
int manipula_vetor3(int v[], int ind, int a);

int main()
{
    int n;

    printf("\nDigite o valor de n(tamanho do vetor):");
    scanf("%d", &n);

    int vetor[n];
    int ind;

    for(ind=0;ind<n;ind++)
    {
        printf("\nDigite o valor do elemento %d : ", ind);
        scanf("%d", &vetor[ind]);
    }

    int a;

    manipula_vetor1(vetor, n, a);

    manipula_vetor2(vetor, n, &a);

    for(ind=0;ind<n;ind++)
    {
        printf("\nvalor das somas de vetores: %d", manipula_vetor3(vetor, ind, a));
    }

}

void manipula_vetor1(int v[], int n, int a)
{
    int ind;

    printf("\nDigite o valor de a:");
    scanf("%d", &a);

    for(ind = 0;ind < n; ind++)
    {
        v[ind] = v[ind] + a;
        printf("\nvalor das somas de vetores: %d", v[ind]);
    }
}


void manipula_vetor2(int v[], int n, int *a)
{
    int ind;

    printf("\nDigite o valor de a:");
    scanf("%d", &*a);

    for(ind = 0;ind < n; ind++)
    {
        *a = *a + v[ind];
        printf("\nvalor a: %d", *a);
    }
}

int manipula_vetor3(int v[], int ind, int a)
{

    printf("\nDigite o valor de a:");
    scanf("%d", &a);

    v[ind] = v[ind] + a;
    return v[ind];

}
