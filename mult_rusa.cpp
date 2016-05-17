#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int numero1;
    int numero2;
    int resultado = 0;

    printf("Mete el 1º número: ");
    scanf(" %i", &numero1);
    printf("Mete el 2º número: ");
    scanf(" %i", &numero2);

    while( numero2 != 0){
	if((numero2 % 10) == 1 || (numero2 % 10) == 3 || (numero2 % 10) == 5 || (numero2 % 10) == 7 || (numero2 % 10) == 9)
	    resultado += numero1;

	numero1 *= 2;
	numero2 /= 2;
    }

    printf("Resultado: %i\n", resultado);

    return EXIT_SUCCESS;
}
