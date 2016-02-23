#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int altura;

    printf("Cual es la altura: ");
    scanf(" %i", &altura);

    for(int fila=0; fila<altura; fila++){
      for(int col=0; col<altura; col++ )
        if(col>fila)
          printf(" ");
        else
          printf("*");
   printf("\n"); }

    
    return EXIT_SUCCESS;
}
