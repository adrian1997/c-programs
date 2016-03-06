#include <stdio.h>
#include <stdlib.h>

#define N 2

struct Pila{
    int *dato;
    int posicion_libre;
    int n;
};

void meter(struct Pila *pila, int numero){
    if(pila->posicion_libre >= pila->n){
	pila->dato = (int *) realloc(pila->dato, (pila->posicion_libre + 1) * sizeof(int));
	    pila->n = pila->posicion_libre;
    }
   
    pila->dato[pila->posicion_libre++] = numero;
    printf("Posicion actual: %i\n", pila->posicion_libre); 
}

int soltar(struct Pila *pila){
    if(pila->posicion_libre <= 0)
	return 0;
    return pila->dato[--pila->posicion_libre];
}

void iniciar(struct Pila *pila){
    pila->dato = NULL;
    pila->posicion_libre = 0;
    pila->n = 0;
}

int main(){

    struct Pila pila;
    int soltados[N];
    int numero;

    iniciar(&pila);

    printf("Mete: ");
    scanf(" %i", &numero);
    meter(&pila, numero);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(&pila, numero);
    soltados[0] = soltar(&pila);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(&pila, numero);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(&pila, numero);
    soltados[1] = soltar(&pila);
    printf("Mete: ");
    scanf(" %i", &numero);
    meter(&pila, numero);

    for(int i=0; i<pila.posicion_libre; i++)
	printf("En la pila: %i\n", pila.dato[i]);

    for(int i=0; i<N; i++)
	printf("Soltado: %i\n", soltados[i]);

    return EXIT_SUCCESS;
}
