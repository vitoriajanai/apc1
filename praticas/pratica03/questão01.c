/*
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/ 
#include <stdio.h>

int main() {
  int a1 = 0;
  int a2 = 0;
  float media = 0.0f;

  printf("Entre com a nota A1: ");
  scanf("%d" , &a1);
  printf("nota A2: ");
  scanf("%d" , &a2);
  media = (0.4 * a1) + (0.6 * a2);


  printf("Média final: %f\n" , media);
  return 0;
}
  