#include <stdio.h>

int realizaOperacao(int numero1, char operador, int numero2){
    switch(operador){ // O switch case vai realizar verificação com o char operador, já retornando a operação
        case('+') : return numero1 + numero2;
        case('-') : return numero1 - numero2;
        case('*') : return numero1 * numero2;
        case('/') : return numero1 / numero2; 
    }
    return -1; //Se não for inserido um operador válido retorna -1 (flag de erro)
}

int main(){
    int numero1, numero2;
    char operador;

    scanf("%d %c %d", &numero1, &operador, &numero2);

    printf("%d\n", realizaOperacao(numero1, operador, numero2));

    return 0;
}