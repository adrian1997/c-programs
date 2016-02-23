#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura;

    printf("Di la altura del cuadrado: ");
    scanf(" %i", &altura);

    for(int ladoa=0; ladoa<altura; ladoa++)
	printf("*");
    printf("\n");
    altura -= 2;
    for(int fila=0; fila<altura; fila++){
	for(int col=0; col<altura; col++)
        if(col = 1)
          printf("*");
        else
          printf(" ");
	printf("\n");
    }
    altura += 2;
    for(int ladob=0; ladob<altura; ladob++)
	printf("*");
    printf("\n");

    return EXIT_SUCCESS;
}
