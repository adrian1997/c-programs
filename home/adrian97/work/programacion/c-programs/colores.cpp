#include <stdio.h>
#include <stdlib.h>

int main(){

    int color1;
    int color2;

    //Preguntar al usuario si ve rojo si=1/no=0.
    printf("¿Tu ves rojo? si=1/no=0: ");
    //Introducir el dato en COLOR1.
    scanf(" %i", &color1);
    //Preguntar al usuario si ve azul si=1/no=0.
    printf("¿Tu ves azul? si=1/no=0: ");
    //Introducir el dato en COLOR2.
    scanf(" %i", &color2);
    //SI COLOR1=1, COLOR2=0 ves rojo.
    if(color1 = 1, color2 = 0)
      printf("Tu ves rojo.\n");
    //SI NO COLOR1=0, COLOR2=1 ves azul.
    else
	printf("Tu ves azul.\n");
    //SI NO COLOR1=1, COLOR2=1 ves morado.
    else
        printf("Tu ves morado.\n");
    //SI NO COLOR1=0, COLOR2=0 ves negro.
    else
        printf("Tu ves negro.\n");
    return EXIT_SUCCESS;
}
