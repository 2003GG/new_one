//challenge 06 , les conditions 01
#include <stdio.h>
#include <math.h>
int main() {
 int n; 
 printf("entre un nombre : ");
 scanf("%d",&n);
 if (n<0)
 printf("le nombre est negatif");
  else if (n>0)
 printf("le nombre est positive");
else
 printf("le nombre est null");


    return 0;
}