#include <stdio.h>
#include <stdlib.h>

#define N 8

void intercambiar(int datos[], int posicion, int posicion_libre){
    int aux = datos[posicion];
    datos[posicion] = datos[posicion_libre];
    datos[posicion_libre] = aux;
}

void ordenar(int datos[]){
    int contador = 0;
    int posicion_libre = 0;
    int posicion = 0;

    while(contador != 9){
	posicion = 0;
	while(posicion != N){
	    if(contador == datos[posicion]){
		intercambiar(datos, posicion, posicion_libre);
		posicion_libre++;
		posicion++;
	    }
	    else 
		posicion++;

	}
	contador++;
    }

}

void imprimir(int datos[]){
    for (int i=0; i<N; i++)
	printf("%i", datos[i]);
    printf("\n");
}

int main(int argc, const char **argv){

    int datos[] = {7, 5, 4, 2, 5, 9, 6, 8};

    imprimir(datos);
    ordenar(datos);
    imprimir(datos);


    return EXIT_SUCCESS;
}
