#include <stdio.h>

int divisao(double, double, double*);
int divisao(double x, double y,double* resultado) {
  if (y != 0) {
    *resultado = x / y;
    return 1;
  }
  else return 0;
}

int main(int argc, char *argv[])
{
  if (argc == 3) {
    double x,y,z;
    sscanf(argv[1],"%lf",&x);
    sscanf(argv[2],"%lf",&y);
    if (divisao(x, y, &z) == 0) {
      printf("%lf\n",z);
    }
  }
}
