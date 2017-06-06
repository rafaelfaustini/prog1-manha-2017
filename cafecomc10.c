#include <stdio.h>

main()
{
int n[3];

  
      printf("Digite o primeiro numero: ");
    scanf("%d", &n[0]);  
  
      printf("Digite o segundo numero: ");
    scanf("%d", &n[1]);  
  
      printf("Digite o terceiro numero: ");
    scanf("%d", &n[2]); 
  
  if ((n[0]>n[1])&&(n[0]>n[2]))
  {
    printf("O maior numero digitado eh %d\n", n[0]);
  }
  
    if ((n[1]>n[0])&&(n[1]>n[2]))
  {
    printf("O maior numero digitado eh %d\n", n[1]);
  }
  
    if ((n[2]>n[0])&&(n[2]>n[1]))
  {
    printf("O maior numero digitado eh %d \n", n[2]);
  }
  
  
  
  
}