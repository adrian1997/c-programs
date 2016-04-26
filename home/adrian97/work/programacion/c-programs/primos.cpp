#include <stdio.h>
#include <stdlib.h>

bool calcular(int numero, int divisor){
    bool resultado;

    if(divisor == 1)
	return false;
    
    if(numero % divisor == 0)
	resultado = true;
    else
	resultado = false;

    return resultado || calcular(numero, divisor - 1);
}

int main(int argc, const char **argv){

    int numero;
    int divisor = numero;

    printf("Mete un número: ");
    scanf(" %i", &numero);

    if (calcular(numero, divisor - 1))
	printf("No es un número primo\n");
    else
	printf("Si es un número primo\n");

    return EXIT_SUCCESS;
}
