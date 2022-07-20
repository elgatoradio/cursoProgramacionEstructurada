#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int matrizSuma[3][4] = {{1,1,1,1},{2,4,-1,5},{9,7,8,2}};
    int a = 0, b = 0, c = 0;

    printf(" \n\nSumatoria de filas -- Bidimensional Array\n\n");

    for (int i = 0; i < 4; i++)
    {
        a += matrizSuma[0][i];
        b += matrizSuma[1][i];
        c += matrizSuma[2][i];
    }
    
    printf(" \nLa primera fila suma: %i \n\n", a);
    printf("La segunda fila suma: %i \n\n", b);
    printf("La tercera fila suma: %i \n\n", c);
    
    return 0;
}