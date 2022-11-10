#include <stdio.h>
#include <limits.h>

struct estatisticas {
  double media;
  int menor;
  int maior;
};
struct estatisticas calculos(int vetor[] ,int tamanho);
struct estatisticas calculos(int vetor[] ,int tamanho) {
  double med = 0;
  int menor = INT_MAX, maior = 0;
  for (int i = 0; i < tamanho; i++) {
    med += vetor[i];
    if (i != tamanho - 1 && vetor[i] < menor) menor = vetor[i];
    if (vetor[i] > maior) maior = vetor[i];
  }
  med /= tamanho;
  struct estatisticas x = {.media = med, .menor = menor, .maior = maior};
  return x;
}
int main(int argc, char* argv[])
{
  int notas[argc-1], nota;
  for (int i = 1; i < argc; i++) {
    sscanf(argv[i],"%d",&nota);
    notas[i-1] = nota;
  }
  struct estatisticas valores = calculos(notas, argc-1);
  printf("media: %lf\n",valores.media);
  printf("menor: %d\n",valores.menor);
  printf("maior: %d\n",valores.maior);
  
  return 0;
}
