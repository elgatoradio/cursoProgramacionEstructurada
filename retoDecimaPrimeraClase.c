#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main()
{
    char name[50];
    int size;
    printf(" \n\nInvertiremos tu nombre\n\n");
    printf("¿Cual es tu nombre? ");
    gets(name);
    printf(" \n\nTu nombre es: ");
    puts(name);
    size = strlen(name);
    printf(" \n\nSu tamaño es: %i \n", size);
    for (int i = size; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    printf(" \n\n");

    return 0;
}