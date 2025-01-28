// problem
#include <stdio.h>

int main() {
   int i,t[6],tmp,j;
  
   for(i=0;i<6;i++){ 
    printf("entre l elements  %d: ",i+1);
       scanf("%d",&t[i]);
       for(j=i+1;j<6;j++){
      
    if(t[i]<t[j]){
        
        t[i]=tmp ;
        t[j]=t[i] ;
        tmp=t[j];
    }
   }
   }
   printf("la somme des elements :%d",t[6]);
    return 0;
}