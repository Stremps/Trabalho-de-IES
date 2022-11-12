#include <stdio.h>
#define MAXL 5 //Caso seja alterado o número de linhas, basta alterar aqui
#define MAXC 3 //Caso seja alterado o númrro de colunas, basta alterar aqui

void lerMatriz(float matriz[][MAXC], int linha, int coluna){ //Função genérica de leitura de matriz
    int i, j;

    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            scanf("%f", &matriz[i][j]);
}

float mediaColunaPar(float matriz[][MAXC], int linha, int coluna){
    int i, j, elementos;
    float soma;
    for(j = 1, soma = elementos = 0; j < coluna; j+=2) //Considerar a coluna com indice 1 como a coluna 2, que é um número par
        for(i = 0; i < linha; i++){
            soma += matriz[i][j];
            elementos++; //Variável para realizar a divisão da média depois
        }

    return soma/elementos;
}

float mediaLinhaImpar(float matriz[][MAXC], int linha, int coluna){
    int i, j, elementos;
    float soma;
    for(i = 0, soma = elementos = 0; i < linha; i+=2) //Considerar a coluna com indice 0 como a coluna 1, que é um número impar
        for(j = 0; j < coluna; j++){
            soma += matriz[i][j];
            elementos++; //Variável para realizar a divisão da média depois
        }

    return soma/elementos;
}

int main(){
    float matriz[MAXL][MAXC], diferenca;

    lerMatriz(matriz, MAXL, MAXC);
    
    diferenca = mediaColunaPar(matriz, MAXL, MAXC) - mediaLinhaImpar(matriz, MAXL, MAXC); //Para facilitar a legibilidade
    printf("A diferença é igual a: %.2f\n", diferenca);

    return 0;
}