#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *pf;

    pf = fopen("cancion.txt", "w");

    fprintf(pf,"i see a red door and i want it painted black No colors anymore, i want them to turn black I see the girls walk by dressed in their summer clothes I have to turn my head until my darkness goes");

   fclose(pf);

    return EXIT_SUCCESS;
}
