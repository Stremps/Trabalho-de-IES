#include <stdio.h>
#include <stdlib.h>

struct operacoes;
struct operacoes {
  int soma;
  int diferenca;
  int produto;
};


struct operacoes ex1 (int x,int y) {
  struct operacoes ops = { .soma = x+y, .diferenca = x-y, .produto = x * y};
  return ops;
}

int main(int argc, char *argv[])
{
  if (argc == 3) {
    int x, y;
    sscanf(argv[1], "%d", &x);
    sscanf(argv[2], "%d", &y);
    struct operacoes exemplo = ex1(x,y);
    printf("soma: %d\n",exemplo.soma);
    printf("diferenca: %d\n",exemplo.diferenca);
    printf("produto: %d\n",exemplo.produto);
  }
}
