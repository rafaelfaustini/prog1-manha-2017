#include <stdio.h>
#include <math.h>
main()
{
float c1,c2,h;
  
      printf("Digite o primeiro cateto ");
    scanf("%f", &c1);  
  
      printf("Digite o segundo cateto ");
    scanf("%f", &c2);  
  
  
 h= sqrt(pow(c1,2) + pow(c2,2));
  
  printf("%f\n",h);

}