#include <stdio.h>
#define MAX 4

void lerMat(int matriz[][MAX], int linha, int coluna){
    int i, j;

    printf("Insira os valores da matriz:\n");
    for(i = 0; i < linha; i++) //For dentro de for que guardará todos elementos inseridos
        for(j = 0; j < coluna; j++)
            scanf("%d", &matriz[i][j]);
}

void printMat(int matriz[][MAX], int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n"); //Quebra para próxima linha da matriz
    }
}

void somaColunas(int matriz[][MAX], int linha, int coluna){
    int i, j, somaColunas[coluna];

    for(i = 0; i < coluna; i++) //Prepara o vetor para receber as somas das colunas
        somaColunas[i] = 0;

    for(i = 0; i < linha; i++) //Parte responsável por guardar a soma das colunas
        for(j = 0; j < coluna; j++)
            somaColunas[j] += matriz[i][j];

    for(i = 0; i < coluna; i++) //Vai printar todas as somas
        printf("A soma da coluna %d é igual: %d\n", i + 1, somaColunas[i]);
}

int main(){
    int matriz[MAX][MAX];

    lerMat(matriz, 4, 4);
    printMat(matriz, 4, 4);

    somaColunas(matriz, 4, 4);

    return 0;
}