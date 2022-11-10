#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[80];
  float preco;
} produto;
void corrigirPrecos(produto*,int);
int lerProdutos(char[],produto**);
void ordenarProduto(produto*, int);
void tp(produto*,produto *);

// sinonimo de memcpy para escrever menos move 2 para 1
void tp(produto * _1, produto * _2) {
  memcpy(_1, _2, sizeof(produto));
}

void corrigirPrecos(produto* p,int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    if (p[i].preco < 100) {
      p[i].preco *= 1.05;
    }
  }
}
// le produtos de um arquivo o float primeiro para não ter chance de pegar o numero como parte da string
// retorna um ponteiro para o ponteiro com memoria alocada
int lerProdutos (char nomeArquivo[],produto** lido) {
  produto res;
  int i, cap;
  FILE* arquivo = fopen(nomeArquivo, "r");

  for (i = 0,cap = 1 ; fscanf(arquivo, "%f %79s",&res.preco ,res.nome) == 2; i++) {
    if(i > cap - 1) { 
      cap *= 2;
      *lido = realloc(*lido, cap * sizeof(produto));
    }
    memcpy(&((*lido)[i]), &res, sizeof(produto));
  }
  fclose(arquivo);
  return i;
}
// ordenação não estável implementando quicksort in-place
void ordenarProduto(produto* vetor, int  tamanho) {
  if(tamanho < 2 ) return;
  const int ue = tamanho-1;
  produto* pivo = (produto *)malloc(sizeof(produto));
  int sG = 0;
  int sP = 0;
  produto* comparado = (produto *)malloc(sizeof(produto));
  tp(pivo,&vetor[0]);
  for (tp(comparado,&vetor[ue]); sG + sP < ue;) {
    //aqui temos espaço livre na frente e no fundo
    if (strcmp(comparado->nome, pivo->nome) < 0) {
      tp(&vetor[sP],comparado);
      sP++;
      tp(comparado,&vetor[sP]); //criar espaço livre preenchido por ter colocado o comparado na posição livre da frente
    } else {
      tp(&vetor[ue-sG],comparado);
      sG++;
      tp(comparado,&vetor[ue-sG]); // idem linha 53 mas no final
    }
  }
  // pós-condição do loop: sG+sP == ue -> então temos uma posição vazia em sP ou uE-sG
  // pós-condição do loop: todos elementos antes da posição sP são menores que pivo e todos depois são maiores ou iguais a pivo
  free(comparado);
  tp(&vetor[sP],pivo);
  free(pivo); 
  ordenarProduto(vetor, sP);
  ordenarProduto(&vetor[sP+1], sG);
}

void imprimirProdutos(produto* vetor,int tamanho){
  for (int i = 0; i < tamanho; i++) {
    printf("produto:%s preco:%f\n",vetor[i].nome,vetor[i].preco);
  }
}

int main(int argc, char* argv[])
{
  if(argc>1) 
  {
    produto* lista = (produto*) malloc(sizeof(produto)); 
    int tamanho = lerProdutos(argv[1],&lista);
    corrigirPrecos(lista, tamanho);
    ordenarProduto(lista, tamanho);
    imprimirProdutos(lista, tamanho);
  }
  return 0;
}
