#include <stdio.h>
#include <stdlib.h>

int main(){

    int ma[12];
    int mb[15];
    int Fila[20];

    //Meter datos en las matrices A y B
    printf("Mete los datos de la matriz A:");

    for(int i=0; i<12; i++)
	scanf(" %i", &ma[i]);

    printf(" Matriz A:%i, %i, %i\n", ma[0], ma[1], ma[2]);
    printf("          %i, %i, %i\n", ma[3], ma[4], ma[5]);
    printf("          %i, %i, %i\n", ma[6], ma[7], ma[8]);
    printf("          %i, %i, %i\n", ma[9], ma[10], ma[11]);

    printf("Mete los datos en la matriz B:");

    for(int i=0; i<15; i++)
	scanf(" %i", &mb[i]);

    printf(" Matriz B:%i, %i, %i, %i, %i\n", mb[0], mb[1], mb[2], mb[3], mb[4]);
    printf("          %i, %i, %i, %i, %i\n", mb[5], mb[6], mb[7], mb[8], mb[9]);
    printf("          %i, %i, %i, %i, %i\n", mb[10], mb[11], mb[12], mb[13], mb[14]);

   //Calcular matrices
   //1ºFila
    Fila[0] = ma[0]*mb[0]+ma[1]*mb[5]+ma[2]*mb[10];
    Fila[1] = ma[0]*mb[1]+ma[1]*mb[6]+ma[2]*mb[11];
    Fila[2] = ma[0]*mb[2]+ma[1]*mb[7]+ma[2]*mb[12];
    Fila[3] = ma[0]*mb[3]+ma[1]*mb[8]+ma[2]*mb[13];
    Fila[4] = ma[0]*mb[4]+ma[1]*mb[9]+ma[2]*mb[14];
   //2ºFila
    Fila[5] = ma[3]*mb[0]+ma[4]*mb[5]+ma[5]*mb[10];
    Fila[6] = ma[3]*mb[1]+ma[4]*mb[6]+ma[5]*mb[11];
    Fila[7] = ma[3]*mb[2]+ma[4]*mb[7]+ma[5]*mb[12];
    Fila[8] = ma[3]+mb[3]+ma[4]*mb[8]+ma[5]*mb[13];
    Fila[9] = ma[3]+mb[4]+ma[4]*mb[9]+ma[5]*mb[14];
   //3ºFila
    Fila[10] = ma[6]*mb[0]+ma[7]*mb[5]+ma[8]*mb[10];
    Fila[11] = ma[6]*mb[1]+ma[7]*mb[6]+ma[8]*mb[11];
    Fila[12] = ma[6]*mb[2]+ma[7]*mb[7]+ma[8]*mb[12];
    Fila[13] = ma[6]*mb[3]+ma[7]*mb[8]+ma[8]*mb[13];
    Fila[14] = ma[6]*mb[4]+ma[7]*mb[9]+ma[8]*mb[14];
   //4ºFila
    Fila[15] = ma[9]*mb[0]+ma[10]*mb[5]+ma[11]*mb[10];
    Fila[16] = ma[9]*mb[1]+ma[10]*mb[6]+ma[11]*mb[11];
    Fila[17] = ma[9]*mb[2]+ma[10]+mb[7]+ma[11]*mb[12];
    Fila[18] = ma[9]*mb[3]+ma[10]+mb[8]+ma[11]*mb[13];
    Fila[19] = ma[9]*mb[4]+ma[10]+mb[9]+ma[11]*mb[14];
   
    printf("Resultado: %i, %i, %i, %i, %i\n", Fila[0], Fila[1], Fila[2], Fila[3], Fila[4]);
    printf("           %i, %i, %i, %i, %i\n", Fila[5], Fila[6], Fila[7], Fila[8], Fila[9]);
    printf("           %i, %i, %i, %i, %i\n", Fila[10], Fila[11], Fila[12], Fila[13], Fila[14]);
    printf("           %i, %i, %i, %i, %i\n", Fila[15], Fila[16], Fila[17], Fila[18], Fila[19]);

    return EXIT_SUCCESS;
}


