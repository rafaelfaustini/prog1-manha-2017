#include <stdio.h>

main()
{
  int vetor[60];
  int num;
  int i=0,j;
  
    printf("Qual e o numero?");
    scanf("%d", &num); 
  	while(num > 0)
	{

		vetor[i] = num % 2;
		i++;
		num = num / 2;
	}

  	for(j = i - 1; j >= 0; j--)
    {
		printf("%d", vetor[j]);

}
  printf("\n");
	return 0;
  
 
}
