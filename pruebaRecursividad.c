#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int factorial(int n)
{
    printf( "\n\nEntra a la funcion factorial, n vale: %i\n", n);
    if (n > 1)
    {
        printf("La funcion se llamara asi misma otra vez\n");
        return n * factorial(n-1);
    }
    else
    {
        printf("n es iguala  1 termina la recursividad\n");
        return 1;
    }
    
}

int main()
{
    printf(" \n\nRecursividad\n");

    int result = factorial(5);
    printf(" \nEl resultado es: %i \n\n", result);

    return 0;
}