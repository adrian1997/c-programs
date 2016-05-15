#include <stdio.h>
#include <stdlib.h>

double factorial(double numero){
    if(numero == 0)
	return 1;
    return numero * factorial(numero-1);
}

int main(int argc, const char **argv){

    double resultado = 0;
    double numero = 0;
    int numero2;

    printf("¿Hasta que número quieres?: ");
    scanf(" %i", &numero2);

    while(numero != numero2 + 1){
	resultado += 1/factorial(numero);
	numero++;
    }

    printf("El número e vale: %.2f\n", resultado);

    return EXIT_SUCCESS;
}
