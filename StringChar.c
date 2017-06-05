#include <stdio.h>

int main()
{
  
  char nome[20];
  float media,av2,av1;
  
  printf("Qual e o seu nome ");
  scanf("%s", nome);
  
   printf("Entre com a AV1: ");
  scanf("%f",&av1);
     printf("Entre com a AV2: ");
  scanf("%f",&av2);
  media=(av1+av2)/2;
  
  printf("Ola %s, sua media = %f",nome,media);

  return 0;
  
}