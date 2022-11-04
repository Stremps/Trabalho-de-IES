#include <stdio.h>
#define MAXL 3 //Max. de linha
#define MAXC 4 //Max. de Coluna

void lerMat(float matriz[][MAXC], int linha, int coluna){
    int i, j;

    printf("Insira os valores da matriz:\n");
    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            scanf("%f", &matriz[i][j]);
}

void somaLinhas(float matriz[][MAXC], int linha, int coluna){
    int i, j;
    float somaLinhas[linha];

    for(i = 0; i < linha; i++){ //Parte responsável por guardar a soma das colunas
        somaLinhas[i] = 0;
        for(j = 0; j < coluna; j++)
            somaLinhas[i] += matriz[i][j];
    }

    for(i = 0; i < linha; i++) //Vai printar todas as somas
        printf("A soma da linha %d é igual: %4.2f\n", i + 1, somaLinhas[i]);
}

void printMat(float matriz[][MAXC], int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            printf("%4.2f ", matriz[i][j]);
        printf("\n"); //Quebra para próxima linha da matriz
    }
}

int main(){
    float matriz[MAXL][MAXC];

    lerMat(matriz, MAXL, MAXC);
    printMat(matriz, MAXL, MAXC);
    somaLinhas(matriz, MAXL, MAXL);

    return 0;
}