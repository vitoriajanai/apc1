#include <stdio.h>

int main() {
  float nota1 = 0.0f;
  float nota2 = 0.0;

  printf("entre com a nota: ");
  scanf("%f", &nota1);

  printf("entre com a nota2: ");  
  scanf( "%f", &nota2);

 float media = 0.4 *nota1 + 0.6 * nota2;

  printf("media final é %.1f\n" , media);

  if(media >= 5.0) {
    printf("passei!\n");
  }else {
    printf("Vamos de p3\n");
  }
  
  return 0;
}