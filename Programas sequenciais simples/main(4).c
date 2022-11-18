#include <stdio.h>

int converte_int(int temperatura){  //Converte temperatura celsius para farenheit e tem um int como retorno
    return (temperatura-32)*(5/9);
}

double converte_double(int temperatura){  //Converte temperatura celsius para farenheit e tem um double como retorno
    return (temperatura-32.0)*(5.0/9.0);
}

int main()
{
    double Valor_farenheit1;
    int Valor_farenheit2;
    
    printf("Qual valor de temperatura deseja converter de farenheit para celsius?\n");
    scanf("%lf", &Valor_farenheit1);
    
    Valor_farenheit2 = (int) Valor_farenheit1;
    
    printf("%d\n", converte_int(Valor_farenheit2));
    printf("%lf", converte_double(Valor_farenheit1));
    
    
    
    return 0;
}
