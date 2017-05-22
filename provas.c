#include <stdio.h>
#include <math.h>

int main()

{

float av1;
float av2;
float av3;
float media;

printf("\nEntre com o valor da av1:");
scanf("%f", &av1);

printf("\nEntre com o valor da av2:");
scanf("%f", &av2);
  
printf("\nEntre com o valor da av3:");
  scanf("%f", &av3);

media= (av1+av2)/2;
  
  
  if (av3 > av1) and (av3 < av2){
    media= (av1+av3)/2;
    printf("\nResultado=%f\n",media);
  }
  
    if (av3 > av2) and (av3< av1) 
  {
    media= (av2+av3)/2;
    printf("\nResultado=%f\n",media);
  }
  
    if (av3 > av1) and (av3 >av2) and (av1>av2)
  {
    media= (av1+av3)/2;
    printf("\nResultado=%f\n",media);
  }
  
     if (av3 > av1) and (av3 >av2) and (av2>av1)
  {
    media= (av2+av3)/2;
    printf("\nResultado=%f\n",media);
  }
  
  

printf("\nResultado=%f\n",media);
}