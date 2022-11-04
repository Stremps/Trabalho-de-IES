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

void printDiagonal(int matriz[][MAX], int linha, int coluna){
    int i;
    for(i = 0; i < linha && i < coluna; i++)
        printf("%d ", matriz[linha-i-1][i]);
    printf("\n");
}

int main(){
    int matriz[MAX][MAX];

    lerMat(matriz, MAX, MAX);
    printMat(matriz, MAX, MAX);
    printDiagonal(matriz, MAX, MAX);

    return 0;
}