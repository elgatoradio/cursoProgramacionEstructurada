#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int numeros[5], random, resultado = 1;
    srand(time(NULL));
    printf(" \n\n");

    for (int i = 0; i < 5; i++)
    {
        random = rand() % 9;
        numeros[i] = random + 1;
        printf("Valor %i = %i\n", i+1, numeros[i]);
        resultado *= numeros[i];
    }

    printf(" \n\nEl resultado de la multiplicacion de todos los elementos es: %i \n\n", resultado);

    resultado = 1;

    printf(" \n\nIngresa 5 valores enteros en el 1 y el 10 para multiplicarlos entre ellos\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Valor %i = ", i+1);
        scanf("%i", &numeros[i]);
        while (numeros[i] < 1 || numeros[i] > 10)
        { 
            printf("#Error!! %i no es un numero valido \n", numeros[i]);
            printf("Valor %i = ", i+1);
            scanf("%i", &numeros[i]);
        }
        resultado *= numeros[i];
    }
    
    printf(" \n\nEl resultado de la multiplicacion de todos los elementos es: %i \n\n", resultado);

    return 0;
}