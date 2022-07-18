#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int choice;

    printf(" \n\nLlegaste fiel guerrero, despues de tu largo camino, te toca la que te asfixia...\n");
    printf("digo la catafixia, tenemos estas puertas elige: \n\n");
    printf("    Puerta\n\n");
    printf("   1   2   3\n\n");
    printf("Puerta: ");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
    printf(" \n\nHaz elegido unos muebles troncozo con la calidad y el amor que te dan!!\n\n");
        break;
    case 2:
    printf(" \n\nHijoles cuate te toco la mera riata del Señor Aguilera!!\n\n");
        break;
    case 3:
    printf(" \n\nCuate te llevaste una poderosisima avalancha ultimo modelo, regresa a tu pueblo en verguiza!!\n\n");
        break;
    
    default:
        printf(" \n\nNo mames cuate no tengo una puerta con el numero %i, te pasas pinche cuate!!\n\n", choice);
        break;
    }

    return 0;
}