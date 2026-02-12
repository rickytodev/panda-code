#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    int tipo;

    printf("Ingresa el primer lado: ");
    scanf("%f", &lado1);

    printf("Ingresa el segundo lado: ");
    scanf("%f", &lado2);

    printf("Ingresa el tercer lado: ");
    scanf("%f", &lado3);

    if((lado1+lado2>lado3)&&(lado1+lado3>lado2)&&(lado2+lado3>lado1)){

        if(lado1==lado2&&lado2==lado3){
            tipo=1;
        }else if(lado1==lado2||lado1==lado3||lado2==lado3){
            tipo=2;
        }else{
            tipo=3;
        }
        switch(tipo){
            case 1:
                printf("Triangulo Equilatero\n");
                break;
            case 2:
                printf("Triangulo Isosceles\n");
                break;
            case 3:
                printf("Triangulo Escaleno\n");
                break;
        }
    }else{
        printf("Error: No forman un triangulo valido\n");
    }

    return 0;
}
