#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingrese un numero entero: \n");
    if (scanf("%d", &numero) == 0)
    {
        printf("Error: el valor ingresado no es un entero valido\n");
        return 0;
    }
    if ((numero >= 100 && numero <= 999) || (numero <= -100 && numero >= -999))
    {
        printf("El numero tiene tres cifras exactas");
    }
    else
    {
        printf("El numero no tiene tres cifras exactas");
    }
    return 0;
}
