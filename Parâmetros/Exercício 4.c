#include <stdio.h>

double notas(double*,double*,double*);
double notas(double* x, double* y, double* z) {
  printf("escreva as 3 notas em uma linha separadas por espaço\n");
  scanf("%lf %lf %lf",x,y,z);
  return (*x + *y + *z)/(double)3;
}

int main(int argc, char* argv[])
{
  double _1,_2,_3, media;
  media = notas(&_1,&_2,&_3);
  printf("media: %lf\n",media);
  return 0;
}
