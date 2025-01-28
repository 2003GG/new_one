// challenge 01 // les bucles // dat 02
#include <stdio.h>

int main() {
   int N,i;
  printf("entre un nombre : ");
  scanf("%d",&N);
    
    for(i=10;i>=1;i--){
        
       
       
         printf("%d * %d = %d\n",N,i,N*i);
    }


    return 0;
}