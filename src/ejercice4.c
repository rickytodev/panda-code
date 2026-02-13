#include <stdio.h>

int main()
{
    int calificacion;

    printf("Ingresa una calificacion (0-100): ");

    if (scanf("%d", &calificacion) == 1)
    {

        if (calificacion >= 90 && calificacion <= 100)
        {
            printf("Calificacion: A");
        }
        else if (calificacion >= 80)
        {
            printf("Calificacion: B");
        }
        else if (calificacion >= 70)
        {
            printf("Calificacion: C");
        }
        else if (calificacion >= 60)
        {
            printf("Calificacion: D");
        }
        else if (calificacion >= 0)
        {
            printf("Calificacion: F");
        }
        else
        {
            printf("Error: Calificacion fuera de rango");
        }
    }
    else
    {
        printf("Error: Ingrese un numero valido por favor");
    }
}
