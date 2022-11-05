#include <stdio.h>

int fatLaco(int numero){
    int fatorial; //Var auxiliável para guardar as multiplicações

    for(fatorial = 1; numero != 0; numero--) //Enquanto o numero for diferente de 0
        fatorial*=numero; //Multiplicação de si mesmo com o número
    
    return fatorial;
}

int fatRecursivo(int numero){
    if(numero == 0) return 1; //Caso base
    else return numero*fatRecursivo(numero - 1);
}

int main(){
    int numero;

    scanf("%d", &numero);
    printf("Fatorial em laço: %d\n", fatLaco(numero));
    printf("Fatorial em recusivo: %d\n", fatRecursivo(numero));

    return 0;
}