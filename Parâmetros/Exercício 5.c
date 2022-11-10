#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
  char nome[30];
  char endereco[100];
  char fone[10];
  long int CEP;
};

void menu(char[]);
struct cadastro adicionarCadastro();
void imprimirCadastro();
void procurarCadastro();

void menu(char str[])
{
  printf("digite um comando\n os validos sao terminar, adicionar nome, imprimir cadastro e procurar cadastro\n");
  fgets(str, 100, stdin);
}

struct cadastro adicionarCadastro() {
  struct cadastro c;
  char strCEP[100];
  printf("digite o nome\n");
  fgets(c.nome,30,stdin);
  printf("digite o endereco\n");
  fgets(c.endereco, 100, stdin);
  printf("digite o telefone\n");
  fgets(c.fone, 10, stdin);
  printf("digite o cep\n");
  fgets(strCEP, 100, stdin);
  sscanf(strCEP,"%ld",&c.CEP);
  return c;
}

void imprimirCadastro(struct cadastro clientes[],int tamanho){
  char nome[30];
  printf("digite o nome\n");
  fgets(nome, 30, stdin);
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(nome,clientes[i].nome) ==0)
    {
      printf("nome:%s\nendereco:%s\nfone:%s\nCEP:%ld\n",
             clientes[i].nome,clientes[i].endereco,clientes[i].fone,clientes[i].CEP);
    }
  }
}

void procurarCadastro(struct cadastro clientes[],int tamanho) {
  char c;
  printf("digite uma letra\n");
  fgets(&c, 1, stdin);
  for (int i = 0; i< tamanho; i++) {
    if ( clientes[i].nome[0] == c) {
      printf("nome:%s\nendereco:%s\nfone:%s\nCEP:%ld\n",
             clientes[i].nome,clientes[i].endereco,clientes[i].fone,clientes[i].CEP);
    }
  }
}

int main(int argc, char* argv[])
{ 
  char str[100];
  struct cadastro clientes[100];
  int plivre = 0;
  for(int fim = 0; !fim; menu(str)) {
    int valido = 0;
    if(strcmp(str, "terminar\n") == 0){ fim = 1; valido = 1;};
    if(strcmp(str, "adicionar nome\n") == 0) { clientes[plivre] = adicionarCadastro(); plivre++ ;valido = 1;}
    if(strcmp(str, "imprimir cadastro\n")== 0) { imprimirCadastro(clientes, plivre + 1); valido = 1;}
    if(strcmp(str, "procurar cadastro\n") == 0) { procurarCadastro(clientes, plivre + 1); valido = 1;}
    if(!valido) printf("erro: %s não é um comando válido\n",str);
  }
  return 0;
}
