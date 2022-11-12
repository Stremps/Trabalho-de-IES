#include <stdio.h>

void toAscii(int codigo){
    printf("Decimal: %d\n", codigo); //Código inserido pelo usuário
    printf("Hexadecimal: %X\n", codigo); //A função printf converte para Hexa
    (codigo >= 32) ? printf("Caractere: %c\n", codigo) : printf("Caractere: Não printável\n");//A função printf converte para ASCII
}

int main(){
    int codigo;

    printf("Insira um código de 0 a 127\n");
    scanf("%d", &codigo);

    toAscii(codigo);

    return 0;
}