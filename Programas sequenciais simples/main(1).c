#include <stdio.h>

float converte_medidas(float metros){  // Converte uma medida de metros para cm, dm e mm.
    printf("Equivalente em milimetros:%.3f\n", metros*1000);
    printf("Equivalente em centimetros:%.2f\n", metros*100);
    printf("Equivalente em decimetros:%.2f\n", metros*10);
}

int main()
{
    float metros;
    printf("Qual valor em metros gostaria de converter em milimetros, centimetros e decimetros?\n");
    scanf("%f", &metros);
    converte_medidas(metros);

    return 0;
}

