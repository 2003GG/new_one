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
       for(j=i+1;j<D-1;j++){
           
           if(T[i] > T[j]){
           
           tmp=T[i];
           T[i]=T[j];
           T[j]=tmp;
              
           }

       }
    
   }
   for(i=0;i<D;i++){
       printf("%d\n",T[i]);
   }

    return 0;
}