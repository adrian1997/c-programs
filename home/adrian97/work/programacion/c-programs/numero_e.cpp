#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char **argv){

    int numero;
    double termino = 0;
    double resultado = 0;
    double factorial = 1;

    printf("¿Hasta que número quieres calcularlo?: ");
    scanf(" %i", &numero);

    while((int)termino != numero + 1){
	resultado += 1/factorial;
	termino++;
	factorial *= termino;
    }

    printf("Número e vale:%.2f\n", resultado);

    return EXIT_SUCCESS;
}
