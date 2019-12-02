#include <stdio.h>

int main()
{

    char m[100];
    int ind;
    int i;
    char temp[100];

    for(i=0;i<1;i++)
    {
        printf("Informe uma data formato dia/mes/ano(XX/XX/XXXX): ");
        gets(m);
    }

    for(ind=0;ind<2;ind++)
    {
        temp[ind] = m[ind+3];
    }

    for(ind=3;ind<5;ind++)
    {
        temp[ind] = m[ind-3];
    }

    for(ind=2;ind<3;ind++)
    {
        temp[ind] = m[ind];
    }

    for(ind=5;ind<10;ind++)
    {
        temp[ind] = m[ind];
    }

    temp[ind] = '\0';
    printf("\ndata alterada para mes/dia/ano:  %s\n", temp);
}
