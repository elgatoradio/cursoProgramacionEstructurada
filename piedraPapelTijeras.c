#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int ataqueJugador, ataqueCpu;
    printf(" \n \nSelecciona el numero de tu ataque \n\n");
    printf("Piedra = 0 \n");
    printf("Papel = 1 \n");
    printf("Tijeras = 2 \n\n");
    scanf("%i", &ataqueJugador);

    while (ataqueJugador < 0 || ataqueJugador > 2)
    {
        printf(" \nEscoge un numero entre el 0 y 2 animal ");
        scanf("%i", &ataqueJugador);
    }
    if (ataqueJugador == 0)
    {
        printf(" \nEscogiste Piedra");
    }
    if (ataqueJugador == 1)
    {
        printf(" \nEscogiste Papel");
    }
    if (ataqueJugador == 2)
    {
        printf(" \nEscogiste Tijeras");
    }

    printf(" \n\nAhora escogera tu enemigo\n");

    ataqueCpu = rand() % 3;

    if (ataqueCpu == 0 )
    {
        printf(" \nEscogio Piedra\n");
    }
     if (ataqueCpu == 1 )
    {
        printf(" \nEscogio Papel\n");
    }
     if (ataqueCpu == 2 )
    {
        printf(" \nEscogio Tijeras\n");
    }

    if (ataqueJugador == 0 && ataqueCpu == 0)
    {
        printf(" \nEmpataste\n\n");
    }
    if (ataqueJugador == 0 && ataqueCpu == 1)
    {
        printf(" \nPerdiste :(\n\n");
    }
    if (ataqueJugador == 0 && ataqueCpu == 2)
    {
        printf(" \nGanaste :D\n\n");
    }

    if (ataqueJugador == 1 && ataqueCpu == 0)
    {
        printf(" \nGanaste :D\n\n");
    }
    if (ataqueJugador == 1 && ataqueCpu == 1)
    {
        printf(" \nEmpataste\n\n");
    }
    if (ataqueJugador == 1 && ataqueCpu == 2)
    {
        printf(" \nPerdiste :(\n\n");
    }

    if (ataqueJugador == 2 && ataqueCpu == 0)
    {
        printf(" \nPerdiste :(\n\n");
    }
    if (ataqueJugador == 2 && ataqueCpu == 1)
    {
        printf(" \nGanaste :D\n\n");
    }
    if (ataqueJugador == 2 && ataqueCpu == 2)
    {
        printf(" \nEmpataste\n\n");
    }
    return 0;
}