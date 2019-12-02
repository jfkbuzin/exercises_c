#include <stdio.h>
#include <stdlib.h>

int main()

{

    int i,j;
    char st1[100],st2[100];

    printf("digite algo\n");
    gets(st1);
    for(i=0;st1[i];i++);
        i = i-1;
    for(j=0,i;i>=0;j++)
    {
        st2[j]=st1[i];
        i--;
    }

    st2[j]='\0';

    printf(" String digitada foi: %s \n Invertida: %s \n",st1,st2);
    system("pause");

}
