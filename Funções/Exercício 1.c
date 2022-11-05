#include <stdio.h>

float pot(float numero, float expoente){ //Função recursiva que ira realizar multiplicações sucessivas
    if(expoente == 0) return 1; // Caso base
    else return numero*pot(numero, expoente - 1);
}

int main(){
    float numero, expoente;
    scanf("%f %f", &numero, &expoente);

    printf("A potência é: %.2f\n", pot(numero, expoente));
    return 0;
}