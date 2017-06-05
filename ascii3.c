#include <stdio.h>

int main()
{
  
  char letra;
  
  printf("Digite uma letra: ");
  scanf("%c",&letra);
  
  if((letra>= 97)&&(letra<=122)){
    
   
   printf("%c \n ",letra-32);
  
    }
  else
  {

       printf("%c \n",letra+32);
  }


}