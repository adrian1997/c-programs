#include <stdio.h>
#include <stdlib.h>

int main(){

    const char *list[3] = {
    "bread",
    "toast",
    "bacon"
    };
    
    printf("Give me %s beacause i want make me a %s with %s.\n", list[0], list[1], list[2]);

    return EXIT_SUCCESS;
}
