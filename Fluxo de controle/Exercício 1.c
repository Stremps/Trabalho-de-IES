#include <stdio.h>

void printCrescente(int maior, int menor){
    for(; menor <= maior; menor++) //Laço de repetição em que a variável menor é incrementada e printada de forma crescente
        printf("%d\n", menor);
}

void printDecrescente(int maior, int menor){
    for(; menor <= maior; maior--) ///Laço de repetição em que a variável maior é decrementada e printada de forma decresncete
        printf("%d\n", maior);
}

int main(){
    int numero1, numero2;

    printf("Insira dois valores: ");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 < numero2) printCrescente(numero2, numero1);
    else if(numero1 > numero2) printDecrescente(numero1, numero2);
    else printf("Números iguais\n"); //Se não é maior nem menor, é igual

    return 0;
}