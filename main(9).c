#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct nome{
    char nome[21];
    char sobrenome[51];
}Nome;


void lerNomes(Nome nomes[], int* tamanho){
    int i;
    char nome[72], *aux;
    
    for(i = 0; i < 20; i++){
        scanf("%[^\n]%*c", nome);
        if(!strcmp(nome, "FIM")) break;
        aux = strchr(nome, ' ');
        *aux = '\0'; //Limita o primeiro nome para a função de cópia
        aux++; //Pula o '\0' adicionado
        strcpy(nomes[i].nome, nome); //Copia até o primeiro '\0'
        strcpy(nomes[i].sobrenome, aux); //Copia até o segundo '\0' natural da string
    }

    *tamanho = i;
}

//Algoritmo de troca entre struct
void troca(Nome *a, Nome *b){
    Nome aux = *a;
    *a = *b;
    *b = aux;
}

char *tokey1 (char *key, char n[]){
    sprintf(key, "%-50s", n); //Formato que permite comparação

    return key;
}

void ordenaNomes(Nome vetor[], int tamanho){
    int i, j; 
    char key1[MAX], key2[MAX];

    for(i = tamanho - 1; i > 0; i--)
        for(j = 0; j < i; j++){
            tokey1(key1, vetor[j].nome);
            tokey1(key2, vetor[j+1].nome);
            if(strcmp(key1, key2) > 0)
                troca(&vetor[j], &vetor[j+1]);
        }
}

// Algoritmo de Ordenação baseado em chaves
void ordenaSobrenomes(Nome vetor[], int tamanho){
    int i, j; 
    char key1[MAX], key2[MAX];

    for(i = tamanho - 1; i > 0; i--)
        for(j = 0; j < i; j++){
            tokey1(key1, vetor[j].sobrenome);
            tokey1(key2, vetor[j+1].sobrenome);
            if(strcmp(key1, key2) > 0) //A função string compare retorna um valor dependendo da relação
                troca(&vetor[j], &vetor[j+1]); //Função para trocar entre o vetor de struct
        }
}

void imprimirLista(Nome nomes[], int tamanho){
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%s %s\n", nomes[i].nome, nomes[i].sobrenome);
    
}

int main(){
    Nome nomes[20]; //Vetor que guarda nome e sobrenome separado
    int tamanho;
    
    lerNomes(nomes, &tamanho);

    printf("\nNomes em ordem alfabética\n");
    ordenaNomes(nomes, tamanho);
    imprimirLista(nomes, tamanho);

    printf("\nSobrenome em ordem alfabética\n");
    ordenaSobrenomes(nomes, tamanho);
    imprimirLista(nomes, tamanho);
    
    
    return 0;
}
