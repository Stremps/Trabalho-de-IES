#include <stdio.h>
#include <math.h> //Biblioteca que tem a função que faz a potência

int fat(int numero){
    if(numero == 0) return 1; //Caso base
    else return numero*fat(numero - 1);
}

double ex(double x){
    double soma; 
    int i;

    for(soma = i = 1; pow(x,i)/fat(i) > pow(10,-6); i++) //For que ocorre enquanto a operação de x^i/i! for maior que 10^-6
        soma+=pow(x,i)/fat(i);
    
    return soma;
}

int main(){
    double numero;
    scanf("%lf", &numero);

    printf("O número é: %lf\n", ex(numero));
    
    return 0;
}