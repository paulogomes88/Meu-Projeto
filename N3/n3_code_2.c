#include <stdio.h>

int main(){
    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero normal: %d\n", numeroSinal);
    printf("Numero grande: %u\n", numeroSemSinal);
    return 0;
}