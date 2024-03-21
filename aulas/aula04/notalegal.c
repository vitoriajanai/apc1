#include <stdio.h>

int main() {
  char nome [31];
  int quantidade;
  float valor;

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a qtde do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com a valor do produto: ");
  deu_certo = scanf("%f", &valor);
  
  printf("------------------------\n");
  printf("NOTA LEGAL\n");
  printf("------------------------\n");
  printf("ITEM   QTDE   VALOR\n");
  printf("%-13.6s %3i %8.2f\n", nome, quantidade, valor);  
  
  return 0; 
}