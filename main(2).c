#include <stdio.h>
#include <ctype.h>
#define MAX 1000

void print_by_line(char *str){ //funcao responsavel por printar uma palavra por linha da string passada
    
    for(; *str!='\0'; *str++ ){
        
        printf("%c", *str);
        
        if(isspace(*str))  //Ao encontrar um espaco, eh printado um \n e então a proxima palavra
        printf("\n");
    }
}

int main()
{
    char str[MAX];
    
    scanf("%[^\n]%*c", str);

    run_string(str);

    return 0;
}
