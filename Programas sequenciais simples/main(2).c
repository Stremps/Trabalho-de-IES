#include <stdio.h>

//A seguinte função imprime as tubuadas dos numeros de 1 a 9

float print_tabuada(){
    int i, j;
    
    for(i=1; i<= 9; i++){
       
        for(j=1; j<= 9; j++){
            printf(" | %dx%d=%3d |   ", i, j, i*j);
        }
        printf("\n");
    }
    
    for(i=1; i<= 9; i++){
        printf(" | 10x%d=%2d |   ", i, i*10);
        
    }
}

int main()
{
    print_tabuada();

    return 0;
}
