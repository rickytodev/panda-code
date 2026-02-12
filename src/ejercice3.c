#include <stdio.h>

int main()
{
    float num;

    printf("Ingresa un numero: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("El numero es positivo");
    }
    else if (num < 0)
    {
        printf("El numero es negativo");
    }
    else
    {
        printf("El numero es cero");
    }
}
