#include <stdio.h>
#include <ctype.h>

int main()
{
    char entrada[100];
    int fecha = 0, i = 0, valido = 1, negativo = 0;

    printf("Introduzca el periodo que desea comprobar: ");
    scanf("%99s", entrada);

    if (entrada[0] == '-')
    {
        negativo = 1;
        i = 1;
    }
    else if (entrada[0] == '+')
        i = 1;

    if (entrada[i] == '\0')
        valido = 0;

    while (entrada[i] != '\0' && valido)
    {
        if (!isdigit(entrada[i]))
            valido = 0;
        i++;
    }

    if (!valido)
    {
        printf("Error: Ingrese un numero por favor\n");
        return 1;
    }

    int inicio = (entrada[0] == '-' || entrada[0] == '+') ? 1 : 0;

    for (i = inicio; entrada[i] != '\0'; i++)
        fecha = fecha * 10 + (entrada[i] - '0');

    if (negativo)
        fecha = -fecha;

    if ((fecha % 4 == 0 && fecha % 100 != 0) || (fecha % 400 == 0))
        printf("El periodo %d es bisiesto\n", fecha);
    else
        printf("El periodo %d no es bisiesto\n", fecha);

    return 0;
}
