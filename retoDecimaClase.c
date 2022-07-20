#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int tamaño;
    long mayor = -2147483648;
    printf(" \n\nVamos a encontrar el numero mas grande de un arreglo \n\n");
    printf("¿De que tamaño va ser el arreglo? : ");
    scanf("%i", &tamaño);

    int numeros[tamaño];

    printf(" \n\nIngresa los valores: \n\n");

    for (int i = 0; i < tamaño; i++)
    {
        printf("Valor %i : ", i + 1);
        scanf("%i", &numeros[i]);
        if(mayor < numeros[i])
        {
            mayor = numeros[i];
        }
    }
    printf(" \n\nY el numero mayor es %ld \n\n", mayor);


    return 0;
}