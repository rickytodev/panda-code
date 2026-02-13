#include <stdio.h>
#include <ctype.h>

int main()
{
    char entrada[100];
    double precio, descuento, precio_final, factor = 0.1;
    int i = 0, puntos = 0, valido = 1, digitos = 0, en_decimal = 0;

    printf("Ingrese el precio del producto: ");
    scanf("%99s", entrada);

    if (entrada[i] == '\0')
        valido = 0;

    while (entrada[i] != '\0' && valido)
    {
        if (entrada[i] == '.')
        {
            puntos++;
            if (puntos > 1)
                valido = 0;
            if (i == 0 || entrada[i + 1] == '\0')
                valido = 0;
        }
        else if (isdigit(entrada[i]))
            digitos++;
        else
            valido = 0;
        i++;
    }

    if (digitos == 0)
        valido = 0;

    if (!valido)
    {
        printf("Error: el precio ingresado no es valido\n");
        return 1;
    }

    precio = 0.0;
    i = 0;
    while (entrada[i] != '\0')
    {
        if (entrada[i] == '.')
            en_decimal = 1;
        else if (!en_decimal)
            precio = precio * 10 + (entrada[i] - '0');
        else
        {
            precio += (entrada[i] - '0') * factor;
            factor *= 0.1;
        }
        i++;
    }

    if (precio > 1000)
    {
        descuento = precio * 0.10;
        printf("Descuento aplicado: 10%%\n");
    }
    else if (precio >= 500 && precio <= 1000)
    {
        descuento = precio * 0.05;
        printf("Descuento aplicado: 5%%\n");
    }
    else
    {
        descuento = 0;
        printf("Sin descuento.\n");
    }

    precio_final = precio - descuento;
    printf("El precio final es: %.2f\n", precio_final);

    return 0;
}
