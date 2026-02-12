#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

    printf("Ingrese el primer numero: ");

    if (scanf("%f", &n1) == 0)
    {
        printf("Caracter no valido\n");
        return 0;
    }

    printf("Ingrese el segundo numero: ");

    if (scanf("%f", &n2) == 0)
    {
        printf("Error: los valores ingresados no son numeros validos\n");
        return 0;
    }

    if (n1 > n2)
    {
        printf("El numero mayor es: %f", n1);
    }
    else if (n2 > n1)
    {
        printf("El numero mayor es: %f", n2);
    }
    else
    {
        printf("Ambos numeros son iguales");
    }
}
