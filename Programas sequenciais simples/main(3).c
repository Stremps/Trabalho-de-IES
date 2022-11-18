#include <stdio.h>

unsigned int print_hexa(unsigned int num){
    printf("%X\n", num);
}

float print_octal(unsigned int num){
    printf("%o", num);
}

int main()
{
    unsigned int num;
    scanf("%d", &num);
    print_hexa(num); //Converte um numero para hexadecimal
    print_octal(num); //Converte um numero para octal

    return 0;
}
