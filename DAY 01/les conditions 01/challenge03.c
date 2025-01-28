//challenge 03, les conditions 01
#include <stdio.h>
#include <math.h>
int main() {
 int x,y,s;  
 printf("entre le premier nombre : ");
 scanf("%d",&x);
 printf("entre le deuxieme nombre : ");
 scanf("%d",&y);
 if(x!=y) {
 s=(y+x);
 printf("la somme est : %d",s);
 }
 else if (x == y)
 {
 s=(y+x)*3 ;
 printf("le triple de la somme est : %d",s);
 }
 else
 {
 printf("ERROR");
 }
 
 
    return 0;
}