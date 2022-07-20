#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int temp, n;
    int fib0 = 0, fib1 = 1;

    printf(" \nHasta cual numero natural quieres que calculemos la susecion de Fibonacci: \n\n");
    scanf("%i", &n);
    printf(" \n\n");

    if(n >= 0)
    {
        int i = n;
        for(i; i > 0; i--)
            {
                printf("la sucecion es %i \n", fib0);
                temp = fib0;
                fib0 = fib1;
                fib1 = fib1 + temp;
            }
        printf(" \n");
    }
    else
        printf("#Error!! Ese no es un numero natural\n");

    return 0;
}