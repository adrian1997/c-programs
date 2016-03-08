#include <stdio.h>
#include <stdlib.h>

void set(int *matriz, int f, int c, int dato, int col){
    *(matriz + f*col + c) = dato;
}

void get(int *matriz, int fila, int col){

    for(int f=0; f<fila; f++){
	for(int c=0; c<col; c++)
	    printf("\t%i", *(matriz + f*col + c));
	    printf("\n");

	}
}

int main(){

    int *a = NULL;
    int fila, col;
    int buffer;
    // Preguntar al usuario.
    printf("¿Cuantas filas quieres?: ");
    scanf(" %i", &fila);
    printf("¿Cuantas columnas quieres?: ");
    scanf(" %i", &col);
    // reservar espacio para a.
    a = (int *) realloc( a, (fila*col)*sizeof(int));



    for (int f=0; f<fila; f++)
	for (int c=0; c<col; c++){
	    printf("(%i, %i):", f+1, c+1);
	    scanf(" %i", &buffer);
	    set(a, f, c, buffer, col);
	}
    // Imprimir la matriz usando get
    get(a, fila, col);

    // Liberar espacio para a
    free(a);
    return EXIT_SUCCESS;
}
