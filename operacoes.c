#include<stdio.h>

main()
{
  int x;
  int y;
  int soma;
  int sub;
  float div;
  int mult;

    printf("\nEntre com o primeiro valor: ");
  scanf("%d", &x);
      printf("\nEntre com o segundo valor: ");
  scanf("%d", &y);
  
  soma = x+y;
  sub= x-y;
  div= (float)x/y;
  mult= x*y;
 

  
  printf("A soma = %d \n",soma);
  printf("A subtração = %d \n",sub);
  printf("A multiplicação = %d \n",mult);
  printf("A divisão = %f \n",div);

  
  return 0;
  
  
  
}