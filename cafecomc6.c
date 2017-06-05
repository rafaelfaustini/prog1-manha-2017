#include <stdio.h>

main()
{
int tri[3];
    printf("Digite a medida do primeiro lado do triangulo: ");
    scanf("%d", &tri[0]);  
  
      printf("Digite a medida do segundo lado do triangulo ");
    scanf("%d", &tri[1]);  
  
      printf("Digite a medida do terceiro lado do triangulo ");
    scanf("%d", &tri[2]);  
  
  if((tri[0]!= tri[1])&&(tri[0]!= tri[2])){
    printf("O triangulo eh escaleno\n");
    
  }
  
  if((tri[0]== tri[1])&&(tri[0]== tri[2])){
   printf("O triangulo eh equilatero\n"); 
  }

   if(((tri[0]= tri[1])&&(tri[0]!= tri[2]))||((tri[0]= tri[2])&&(tri[0]!= tri[1]))){

   printf("O triangulo eh isosceles\n"); 
  }
  
  

  
}
