#include <stdio.h>

main()
{
  int idade;

   printf("Quantos anos voce tem ? ");
    scanf("%d", &idade);
  
  if(idade<16)
  {
    printf("Você ainda nao pode votar !\n");
    
  }
     if(((idade>=16)&&(idade <18))||(idade>70))
  {
    printf("Seu voto eh facultativo\n");
    
  }
  
  if(idade>=18 && idade<=70)
  {
    printf("Seu voto eh obrigatorio\n");
  }
  

  

}