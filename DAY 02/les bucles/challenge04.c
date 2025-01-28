// challenge 04 / les bucles / DAY 02
#include <stdio.h>
#include <math.h>
int main() {
   int i,k;
   
   printf("Combien d'éléments voulez-vous entrer ? : ");
   scanf("%d",&k);
    
     
     
   for(i=0;i<=k;i++){
       printf("entre les elements : ");
       scanf("%d",&i);
       
     
   }
   for(i=k;i>0;i--){
       printf("les elements : %d\n",i);
   }
  
       
   
    return 0;
}