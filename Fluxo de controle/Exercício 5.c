#include <stdio.h>

float media(float a, float b){
    return (a+b)/2;
}

int main()
{
    int num_alunos, i;
    float nota1=0, nota2;
    printf("Digite o numero de alunos. Posteriormente preencha todas as notas ou digite "50" para finalizar\n");
    scanf("%d", &num_alunos);
    
    for(i=0; i < num_alunos && nota1!=50 ; i++){
        printf("Digite as duas notas das provas realizadas pelo aluno\n");
        scanf("%f%f", &nota1, &nota2);
        printf("A media do aluno eh: %.2f\n", media(nota1, nota2));
}

    return 0;
}
