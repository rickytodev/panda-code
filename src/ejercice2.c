#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("\nPuede votar");
    }
    else if (edad < 0)
    {
        printf("\nEdad no valida");
    }
    else
    {
        printf("\nNo puede votar");
    }
}
