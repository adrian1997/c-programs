#include <stdio.h>
#include <stdlib.h>

#define P 3
#define N 2

struct Pila{
    int *dato;
    int posicion_libre;
    int n;
};

void meter(struct Pila pila[P], int numero, int respuesta){   
    if(pila[respuesta].posicion_libre >= pila[respuesta].n){
	pila[respuesta].dato = (int *) realloc(pila[respuesta].dato, (pila[respuesta].posicion_libre + 1) * sizeof(int));
	    pila[respuesta].n = pila[respuesta].posicion_libre;
    }
    pila[respuesta].dato[pila[respuesta].posicion_libre++] = numero;
    printf("Posicion actual libre: %i\n", pila[respuesta].posicion_libre);
}

int soltar(struct Pila pila[P], int respuesta){
   if(pila[respuesta].posicion_libre <= 0)
      return 0;
   return pila[respuesta].dato[--pila[respuesta].posicion_libre];
}

void iniciar(struct Pila pila[P], int respuesta){
    pila[respuesta].dato = NULL;
    pila[respuesta].posicion_libre = 0;
    pila[respuesta].n = 0;
}

int main(){

    struct Pila pila[P];
    int respuesta;
    int soltados[N];
    int numero;

    printf("Elige una pila (1,2 o 3): ");
    scanf(" %i", &respuesta);

    iniciar(pila, respuesta);

    printf("Mete: ");
    scanf(" %i", &numero);
    meter(pila, numero, respuesta);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(pila, numero, respuesta);
    soltados[0] = soltar(pila, respuesta);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(pila, numero, respuesta);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(pila, numero, respuesta);
    soltados[1] = soltar(pila, respuesta);
    printf("Mete: ");
	scanf(" %i", &numero);
    meter(pila, numero, respuesta);

    for(int i=0; i<pila[respuesta].posicion_libre; i++)
	printf("En la pila: %i\n", pila[respuesta].dato[i]);

    for(int i=0; i<N; i++)
	printf("Soltados: %i\n", soltados[i]);


    return EXIT_SUCCESS;
}
