#include <stdio.h>
#define MAX 100 //Pode ser alterado pelo escopo do cliente

void lervet(double vetor[], int* tamanho){ //Função genérica de leitura que também lê tamanho
    int i;
    scanf("%d", tamanho);

    for(i = 0; i < *tamanho; i++)
        scanf("%lf", &vetor[i]);
}

void printvet(double vetor[], int tamanho){ //Função genérica de saída de um vetor
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%.02lf\n", vetor[i]);
}

int main(){
    double vetor[MAX];
    int n;

    lervet(vetor, &n);
    printvet(vetor, n);

    return 0;
}