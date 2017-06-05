#include <stdio.h>

main()
{
  int a1;
  int a2;
  int fibo;
  int i;
  int n;
  
  
    
  i=0; 
    printf("Quer ver a sequencia de fibonacci até qual termo (indice do termo)?");
    scanf("%d", &n);
  
   do{
  fibo = a1+a2;
  printf("%d\n", fibo);
  a1= a2;
  a2= fibo;
    
  }
  while (i != n);  


    }

  
  
  
