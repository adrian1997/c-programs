#include <stdio.h>
#include <stdlib.h>

int sumatorio(int n){
    if (n == 0)
	return 0;
    return n + sumatorio(n-1);
}

int main(int argc, const char **argv){

    int numero;

    printf("Mete número: ");
    scanf(" %i", &numero);

    printf("El valor: %i\n", sumatorio(numero));

    return EXIT_SUCCESS;
}
