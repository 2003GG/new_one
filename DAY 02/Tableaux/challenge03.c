#include <stdio.h>

int main() {
   int i,t[8];
   int S=0 ;
   for(i=0;i<8;i++){
       printf("entre l elements  %d: ",i+1);
       scanf("%d",&t[i]);
       S=S+t[i];
   }
   printf("la somme des elements :%d",S);
    return 0;
}