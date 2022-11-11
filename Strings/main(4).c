#include <stdio.h>
#define MAXA 45
#define MAXB 25
#define MAXC 14

int main()
{
    char nome[MAXA], endere[MAXB], telefone[MAXC];
    int idade;
    printf("Forneça, respectivamente e um por linha, seu nome, endereço (nome da rua), telefone e idade\n");
    scanf("%[^\n]%*c %[^\n]%*c %[^\n]%*c %d", nome, endere, telefone, &idade);
    printf("Seu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %s .\n", nome, idade, endere, telefone);

    return 0;
}
