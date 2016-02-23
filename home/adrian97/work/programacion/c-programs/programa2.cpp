#include <stdio.h>
#include <stdlib.h>

int main(){
  
   char nombre[20];
   int dia, mes, año; 
   
    printf("Dime tu nombre: ");
    scanf(" %s\n", nombre);
    
    printf("Dime tu fecha de nacimiento: ");
    scanf(" %i/%i/%i", &dia, &mes, &año);

    printf("Te llamas %s\n", nombre);
    printf("Y naciste el %i de %s del %i.\n", dia, mes, año);
    
    
    return EXIT_SUCCESS;
}
