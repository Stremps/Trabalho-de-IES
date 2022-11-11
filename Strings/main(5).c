#include <stdio.h>
#include <string.h>
#define MAX 4

int boolean(char choose[]){
    if(!strcmp(choose, "SIM")) return 1;
    if(!strcmp(choose, "NAO")) return 0;
    
}



int main()
{
    char str[MAX];
    scanf("%s%*c", str);
    
    if(!strcmp(str, "SIM") || !strcmp(str, "NAO")) //condição necessária, pois caso a string não seja nem "SIM", nem "NAO", não deve haver retorno
    printf("%d", boolean(str));

    return 0;
}


