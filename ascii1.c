#include <stdio.h>

int main()
{
  
  char letra;
  
  printf("Digite uma letra: ");
  scanf("%c",&letra);
  
  if((letra>= 65)&&(letra<=90)){
    

  printf("Letra é maiuscula\n");
  
    }
  else
  printf("Letra é minuscula\n");

  return 0;
  
}