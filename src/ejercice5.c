#include <stdio.h>

int main()
{
    int in;
    char extra;

    printf("Ingrese un numero entero: ");

    if (scanf("%d%c", &in, &extra) != 2 || extra != '\n')
    {
        printf("Error: Ingrese un numero por favor\n");
        return 0;
    }

    if (in % 3 == 0 && in % 5 == 0)
    {
        printf("Divisible entre 3 y 5");
    }
    else if (in % 3 == 0)
    {
        printf("Divisible entre 3");
    }
    else if (in % 5 == 0)
    {
        printf("Divisible entre 5");
    }
    else
    {
        printf("No es divisible entre ninguno");
    }

    return 0;
}
