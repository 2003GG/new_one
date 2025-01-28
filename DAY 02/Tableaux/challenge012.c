// challenge 012/day 02/les tableux
#include <stdio.h>
#include <math.h>
int main() {
   int i,T[6],j;
   
   for(i=0;i<6;i++){
       printf("entre l'elements %d: ",i+1);
       scanf("%d",&T[i]);
   }
   
   for(i=0;i<6;i++){
       if(T[i]%(2)==0){ 
     printf("%d\n",T[i]);
   }
       
   }
    return 0;
}