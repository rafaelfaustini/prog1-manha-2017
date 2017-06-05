#include <stdio.h>
main()
{
  int c1=0,c2=0,votar=1,c=0,soma,s;
  float p1,p2;


  
  
   do{

    printf("Qual o seu voto ? (1 ou 2) ");
    scanf("%d", &c);  
    
     if (c==1) 
     {
       c1+=1;
     }
     
     if (c==2)
     {
       c2+=1;
     }
     
     
    printf("Deseja continuar ?(1/0)");
    scanf("%d", &s);  
     votar=0;
     if (s==0){
       votar=0;
       break;
     }
     
    
  }
  while (votar=1);  
  
  soma=c1+c2;
  p1= (float)c1/soma;
  p2= (float)c2/soma;
  
  printf("O candidato 1 teve %2.f por cento dos votos \n", p1*100);
    printf("O candidato 2 teve %2.f por cento dos votos\n", p2*100);
  
}
