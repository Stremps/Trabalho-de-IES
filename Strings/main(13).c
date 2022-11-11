#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
    
    
    long long int converte2decimal(long long int *nownumber, int base){
        long long int i=0, convertido=0, *ptr=nownumber;
        
        while(*ptr>0){
            convertido=convertido+(*ptr%10)*pow(base,i);
            *ptr=*ptr/10;
            i++;
        }
        return convertido;
    }
    
int main()
{
    char number[MAX];
    long long int base;
    long long int nownumber;
    
    printf("Informe o número\n");
    scanf("%s%*c", number);
    printf("Informe a base\n");
    scanf("%lld",&base);
    
    nownumber= atoi(number); //Função responsável por converter os numeros representados pela string para inteiro
    
    printf("%lld\n", converte2decimal(&nownumber, base)); //Função responsável por converter um número de uma base dada para decimal

    return 0;
}


