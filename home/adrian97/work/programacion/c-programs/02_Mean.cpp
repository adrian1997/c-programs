#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int suma = 0;
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int numero6;
    int numero7;
    int numero8;
    int numero9;
    int numero10;

    printf("Introduzca los 10 números para calcular su media:\n");

    printf("1º Número: ");
    scanf(" %i", &numero1);
    printf("2º Número: ");
    scanf(" %i", &numero2);
    printf("3º Número: ");
    scanf(" %i", &numero3);
    printf("4º Número: ");
    scanf(" %i", &numero4);
    printf("5º Número: ");
    scanf(" %i", &numero5);
    printf("6º Número: ");
    scanf(" %i", &numero6);
    printf("7º Número: ");
    scanf(" %i", &numero7);
    printf("8º Número: ");
    scanf(" %i", &numero8);
    printf("9º Número: ");
    scanf(" %i", &numero9);
    printf("10º Número: ");
    scanf(" %i", &numero10);

    suma = numero1 + numero2 + numero3 + numero4 + numero5 + numero6 + numero7 + numero8 + numero9 + numero10;
   suma /= 10;
  printf("La media es de:%i\n", suma); 
    return EXIT_SUCCESS;
}
