//challenge 04, les conditions 01
#include <stdio.h>
#include <math.h>
int main() {
 int a,b,c;
 double x,x1,x2,delta;
 
 printf("entre a = ");
 scanf("%d",&a);
 printf("entre b = ");
 scanf("%d",&b);
 printf("entre c = ");
 scanf("%d",&c);
 
  a*pow(x,2)+b*x+c == 0 ;
  
 pow(b,2) - 4*c*a == delta ; 
 
  if (delta > 0)
  {
  printf("L'équation possède deux solutions distinctes\n");
  x1= (-b-sqrt(delta))/(2*a) ;
  x2= (-b+sqrt(delta))/(2*a) ;  
  printf("x1 = %2.f\n",x1);
  printf("x2 = %2.f\n",x2);
  }
  
  else if (delta = 0)
{  
  printf("cette équation admet une solution unique\n");
  x == (-b)/(2*a) ; 
  printf("x = %2.f\n",x);
}
  
  else 
 {
  printf("L'équation ne possède aucune solution");
}


    return 0;
}