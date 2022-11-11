#include <stdio.h>
#include <string.h>
#define MAX 100

void print_extenso(char *str){
    int aux=1;
    while(*str){//Converte a representação de um número na string para um número do tipo inteiro.
                //A conversão ocorre de posição em posição na string, da esquerda para a direita.
        
        aux=(*str)-48;  
        
        switch (aux)
        {
        case 1:
         printf("um");
         break;

        case 2:
         printf("dois");
         break;
         
        case 3:
         printf("três");
         break;
         
        case 4:
         printf("quatro"); 
         break;

        case 5:
         printf("cinco");
         break;
         
        case 6:
         printf("seis");
         break;
         
        case 7:
         printf("sete");
         break;

        case 8:
         printf("oito");
         break;
         
        case 9:
         printf("nove"); 
         break; 

   default:
     printf("zero");
        }
        if(*(str+1)!='\0');
        printf(", ");
    
    *str++;
    }
}


int main()
{
    char number[MAX];
    scanf("%s%*c", number);
    print_extenso(number);
    printf("\n");
    return 0;
}




