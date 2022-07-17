#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numeroA = 5, numerob;
    
    printf("Vamos a ver si adivinas el numero \n \n");
    printf("Ingresa un numero del 1 al 10 :");
    scanf("%i", &numerob);

    if(numerob < 1 || numerob > 10)
    {
        printf(" \n \nQue pongas un numero entre el 1 y el 10 chingada madre!! vete alv!!");
    }
    else if (numeroA == numerob)
    {
        printf(" \n \nA perro adivinaste!! toma un gato =^.^=");
    }
    else
    {
        printf(" \n \nChin... mi perro no le atinaste");
    }
    return 0;
}