#include <stdio.h>
#include <string.h>
#define MAX 1000

void insere(char str[], char ins, int indice){
    int i, j;
    int tam=strlen(str);
    
    str[tam+2]='\0';
    
    for(i=tam; i>=indice; i--)
        str[i+1]=str[i];    
    
    str[indice]=ins;
    
    printf("%s", str);
}


int main()
{
    char str[MAX], ins;
    int indice;
    
    printf("Informe a string\n");
    scanf("%[^\n]%*c", str);
    printf("Informe o caractere que deseja inserir na string\n");
    scanf("%c", &ins);
    printf("Informe a posição (indice) na qual deseja inserir o caractere\n");
    scanf("%d", &indice);
    
    insere(str, ins, indice);

    return 0;
}
