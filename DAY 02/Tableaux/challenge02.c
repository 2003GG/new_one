//challenge02//les tableux//day 02
#include <stdio.h>

int main() {
  
    int k,i;
   printf("how many numbers : ");
   scanf("%d",&k);
     int N[k]={};
     
   for(i=0;i<k;i++){
       printf("entre  numbers %d: ",i+1);
       scanf("%d",&N[i]);
       
      
   }
   for(i=0;i<k;i++){
    printf("%d\n",N[i]);  
   
   }
     
    return 0;
}