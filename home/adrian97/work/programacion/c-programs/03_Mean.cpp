#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int contador = 1;
    int numero;
    int suma = 0;
    int divisor = 0;

    printf("Introduzca los números a calcular hasta que sea menor que 0:\n");

    do{
    printf("%iº Número: ", contador);
    scanf(" %i", &numero);
    contador += 1;
    suma += numero;
    divisor += 1;
    }while(numero != 0);
    
    divisor -= 1;
    suma /= divisor;

    printf("La media es de:%i\n", suma);

    return EXIT_SUCCESS;
}
