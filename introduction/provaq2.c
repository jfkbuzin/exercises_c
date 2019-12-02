/*programa*/
#include <stdio.h>

int main()
{
    float a, b, c, res;
    float total;
    int num_termos = 1;

    a = 70;
    b = 7;
    res = a / b;
    total = res;
    c = b;

    printf("%6.2f, %6.2f\n", total, res);

    while(res > 0.01)
    {
        a = a - 1;
        c = b + c;
        total = total + (a/c);
        res = a/c;
        printf("%6.2f, %6.2f\n", total, res);
        num_termos++;
    }

    printf("\nsoma igual a: %6.2f\n", total);
    printf("\nforam usados %d termos", num_termos);

    return 0;
}
