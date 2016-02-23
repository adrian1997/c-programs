#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    char nombre [20];

    printf("Introduzca su nombre: ");
    scanf(" %s", nombre);
    do{
	numero += 1;
	printf("%s\n", nombre);
    }while ( numero != 73 );

    return EXIT_SUCCESS;
}
