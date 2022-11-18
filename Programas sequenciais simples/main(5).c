#include <stdio.h>
#include <math.h>

float soma(float num1, float num2){
    return printf("A soma dos numeros eh: %f\n", num1+num2);
}

float primeiro_pelo_quadrado_segundo(float num1, float num2){
    return printf("O produto do primeiro numero pelo quadrado do segundo eh: %f\n", num1*pow(num2, 2));
}

float quadrado_do_primeiro(float num1){
    return printf("O quadrado do primeiro numero eh: %f\n", pow(num1, 2));
}

float sqrt_sum_quad(float x, float y){
    return printf("A raiz quadrada da soma dos quadrados dos numeros eh: %f\n", sqrt(pow(x, 2) + pow(y, 2)));
}

float seno_da_diferenca(float num1, float num2){
    return printf("O seno da diferenca do primeiro pelo segundo numero eh: %f\n", sin(num1-num2));
}

float modulo(float num1){
    if(num1>=0) return printf("O modulo do primeiro numero eh: %f", num1);
    return printf("O modulo do primeiro numero eh: %f", -num1);
}


int main()
{
    float numero1, numero2;
    
    scanf("%f%f", &numero1, &numero2 );
    
    soma(numero1, numero2);
    primeiro_pelo_quadrado_segundo(numero1, numero2);
    quadrado_do_primeiro(numero1);
    sqrt_sum_quad(numero1, numero2);
    seno_da_diferenca(numero1, numero2);
    modulo(numero1);
    

    return 0;
}

