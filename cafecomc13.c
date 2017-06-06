#include <stdio.h>

main()
{
  int v[10],i,sal[10];
  float s,ss;
  char c[10][1];
  
    for(i=0;i<=9;i++)
  {

    printf("Qual eh o peso ? ");
    scanf("%d", &v[i]);  
    printf("Qual eh o salario ? ");
    scanf("%d", &sal[i]);  
    printf("m/f ? ");
    scanf("%c", &c[0][i]);  
    
    if (v[i]>50 && c[i][0]=='f') // Somar peso das mulheres acima de 50
    {
      s+=v[i];
      
    }
    
        if ((sal[i]>100 && sal[i]<3000) && (c[i][0]=='m')) // Somar peso das mulheres acima de 50
    {
      ss+=v[i];
      
    }
    
    
    

  }
s= (float)s/i;
ss= (float)ss/i;
  
  printf("\nA media dos pesos das mulheres com mais de 50 kg eh: %f\n", s);
  printf("\nA media do salario dos homens que recebem entre 1000 e 3000 eh: %f\n", ss);


}