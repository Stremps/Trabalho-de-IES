#include <stdio.h>
#define MAX 3 //A matriz desse problema sempre é 3

void lerMat(int matriz[][MAX], int linha, int coluna){
    int i, j;

    printf("Insira os valores da matriz:\n");
    for(i = 0; i < linha; i++) //For dentro de for que guardará todos elementos inseridos
        for(j = 0; j < coluna; j++)
            scanf("%d", &matriz[i][j]);
}

int somaImpar(int matriz[][MAX], int linha, int coluna){
    int i, j, soma;

    for(i = soma = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            if(matriz[i][j]%2) //Se for impar vai retornar resto 1, pois não é multiplo de 2
                soma+=matriz[i][j];

    return soma; //Retorno da soma 
}

void printMat(int matriz[][MAX], int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            printf("%d ", matriz[i][j]);
        printf("\n"); //Quebra para próxima linha da matriz
    }
}

int main(){
    int matriz[MAX][MAX], impar;

    lerMat(matriz, 3, 3); //Função padrão para leitura de matriz de qualquer proporção
    impar = somaImpar(matriz, 3, 3); //Guarda a soma dos impares que a função retorna

    printMat(matriz, 3, 3); //Função padrão para impressão da matriz
    printf("Soma dos impares: %d\n", impar); //Impressão da variável que guarda a soma dos impares
    return 0;
}