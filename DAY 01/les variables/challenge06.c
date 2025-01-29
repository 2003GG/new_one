#include <stdio.h>
#include <math.h>
int main() {
     float a,b,c;
     printf ("entrez le premier nombre ; ");
     scanf("%f",&a);
     printf("entrez le deuxieme nombre : ");
     scanf("%f",&b);
      
      c = a+b ;
      printf("%f + %f = %f\n",a,b,c);
      c = a-b ;
      printf("%f - %f = %f\n",a,b,c);
        c= a*b ;
      printf("%f * %f = %f\n",a,b,c);
      
      c = a / b ;
      printf("%f / %f = %f\n",a,b,c);
      
      
   

    return 0;
}