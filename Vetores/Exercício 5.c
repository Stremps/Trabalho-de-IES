#include <stdio.h>

void lerVet(int vetor[], int tamanho){ //Função genérica de leitura de um vetor de tamanho fixo
    int i;
    for(i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

int mediaVetor(int vetor[], int tamanho){ 
    int i, soma;
    for(i = soma = 0; i < tamanho; i++)
        soma+=vetor[i]; //Enquanto não terminar o vetor faz a passagem por ele

    return soma/tamanho;
}

void encontraElementoIgualMedia(int vetor[], int tamanho){
    int i, media;
    media = mediaVetor(vetor, tamanho);

    for(i = 0; i < tamanho; i++){
        if(vetor[i] == media) //Quando achar o elemento printa ele, no formato em que o úsuario entenda
            printf("V[%d] é igual a média\n", i+1); //No mundo real, fora da linguagem c, o indice inicia por 1, e não 0, por isso + 1
    }
}

int main(){
    int vetor[10];

    lerVet(vetor, 10);
    encontraElementoIgualMedia(vetor, 10);

    return 0;
}