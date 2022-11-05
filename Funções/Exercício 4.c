#include <stdio.h>
#include <math.h>

double juros(int parcelas, double valor){
    double taxa = 0.03; //Por padrão a taxa é de 3% ao mes
    
    return valor*pow((1+taxa), parcelas); //Calculo de juros compostos
}

void pagamento(double valor, int tipo){
    int parcelas;
    
    switch (tipo){
    case 1: //Opção 1
        printf("1x de %.2lf\n", valor-=valor*0.1);
        break;
    case 2: //Opção 2
        printf("2x de %.2lf\n", valor/2);
        break;
    case 3: //Opção 3
        printf("Quantidade de meses(3-10): ");
        scanf("%d", &parcelas); //Leitura das parcelas
        printf("%dx de %.2lf\n", parcelas, juros(parcelas, valor)/parcelas);
        break;
    default:
        break;
    }
}

int main(){
    double valor;
    int tipo;
    printf("Insira o valor da compra: ");
    scanf("%lf", &valor);

    printf("\n \n \n"); //Espaçamento entre leitura e impressão
    printf("Deseja selecionar qual tipo de pagamento?\n");
    printf("1) Opção: a vista com 10%% de desconto\n");
    printf("2) Opção: em duas vezes (preço da etiqueta)\n");
    if(valor >= 100) //Opção ativa apenas quando o valor for acima de 100 reais
        printf("3) Opção: de 3 até 10 vezes com 3%% de juros ao mês.\n");
    scanf("%d", &tipo);
    printf("\n \n \n"); //Espaçamento entre leitura e impressão

    pagamento(valor, tipo);
    return 0;
}