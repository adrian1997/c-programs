#include <stdio.h>
#include <stdlib.h>

void imprime(char palabra[]){
    static int posicion = 0;

    printf("%c", palabra[posicion]);
    if(palabra[posicion] != '\0'){
	posicion++;
	imprime(palabra);
    }
}

int main(int argc, const char **argv){

    char palabra[] = "Pedro";

    imprime(palabra);
    printf("\n");

    return EXIT_SUCCESS;
}
