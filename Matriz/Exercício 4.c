#include <stdio.h>
#define MAX 3 //A matriz é quadrada

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

int buscaMaior(int matriz[][MAX], int linha, int coluna){
    int i, j, maior = matriz[0][0];

    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            if(maior < matriz[i][j])
                maior = matriz[i][j];


    return maior;
}

int buscaMenor(int matriz[][MAX], int linha, int coluna){
    int i, j, menor = matriz[0][0];

    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            if(menor > matriz[i][j])
                menor = matriz[i][j];

    return menor;
}

int main(){
    int matriz[MAX][MAX], maior, menor;

    lerMat(matriz, MAX, MAX);
    printMat(matriz, MAX, MAX);

    maior = buscaMaior(matriz, MAX, MAX);
    menor = buscaMenor(matriz, MAX, MAX);
    printf("Maior é: %d\n", maior);
    printf("Menor é: %d\n", menor);
    return 0;
}