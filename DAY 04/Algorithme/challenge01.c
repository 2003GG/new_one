#include <stdio.h>

int main() {
   int T[40];
   int D,tmp,i,j;
   printf("commbien des nombres : ");
   scanf("%d",&D);
   for(i=0;i<D;i++){
       printf("entre les nombre : ");
       scanf("%d",&T[i]);
   }
   for(i=0;i<D-1;i++){
       for(j=0;j<D-i-1;j++){
           
           if(T[j] > T[j+1]){
           
           tmp=T[j];
           T[j]=T[j+1];
           T[j+1]=tmp;
              
           }

       }
    
   }
   for(i=0;i<D;i++){
       printf("%d\n",T[i]);
   }

    return 0;
}