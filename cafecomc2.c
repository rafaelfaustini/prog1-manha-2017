#include <stdio.h>

main ()
{
  float a1;
  float an;
  float n;
  float s;
  float m;

  a1=1;
  an=100;
  n=100;
  
  s= (a1+an)*n/2;
      printf("A soma é %.0f\n", s);
  m= s/n;
      printf("A média é %.1f\n", m);
  
}
