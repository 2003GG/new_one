#include <stdio.h>
#include <math.h>
int main() {
     float a,b,c;
     float M;
     printf("entrez le premier nombre ; ");
     scanf("%f",&a);
     printf("entrez le deuxieme nombre : ");
     scanf("%f",&b);
     printf("entrez le troisieme nombre : ");
     scanf("%f",&c);
     M = pow((a*b*c),(1/3));
     printf ("%3.f = (%3.f*%3.f*%3.f)^(1/3)",M,a,b,c);
      
     
      
      
   

    return 0;
}