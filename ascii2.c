#include <stdio.h>

int main()
{
  
  char numero;
  
  printf("Digite um caracter: ");
  scanf("%c",&numero);
  
  if((numero>= 48)&&(numero<=57)){
    

  printf("Você digitou um numero\n");
  
    }
  else
  printf("Voce nao digitou um numero\n");

  return 0;
  
}