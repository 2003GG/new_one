//  challenge  03/ les bucles 1                                                                                              
#include <stdio.h>
#include <math.h>
int main() {
   int i,n,s;
       printf("entre un nombre : ");
   scanf("%d",&n);
   
   for(i=1;i<n-1;i++){ 
     s=s+i;
      
   }
    printf("%d+%d=%d\n",n,i,s);
    return 0;
}