#include <stdio.h>

main()
{
int n,t,i;
  
    printf("Digite o numero para ver a tabuada: ");
    scanf("%d", &n);
    
    for(i=1;i<=10;i++)
  {
    t= n*i;
    printf("\n%d x %d = %d\n", n, i, t); 
    t=0;
  }

}