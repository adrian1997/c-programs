#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    int lado;
    char respuesta;
    int opcion = 0;

    printf("Dime el lado del triángulo: ");
    scanf(" %i", &lado);

    printf("¿Quieres calcular el área?(s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
	opcion += 0;
    
    printf("¿Quieres calcular el perimetro?(s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
	opcion += 1;

    printf("¿Quieres calcular el altura?(s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
	opcion += 2;

    switch(opcion){
	case 0:
             printf("El área es: 5/4*%i^2=%i.\n", lado, 5/4*lado^2);
    break;
        case 1:
             printf("El perimetro es: 3*%i=%i.\n", lado, 3*lado);
    break;
	case 2:
             printf("La altura es: 5/2*%i=%i.\n", lado, 5/2*lado);
    break;}
    return EXIT_SUCCESS;
}
