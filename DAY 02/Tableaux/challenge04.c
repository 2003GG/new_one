//challenge04//les tableux//day 02
#include <stdio.h>

int main() {
  
    int k,i;
   printf("Combien d'éléments voulez-vous entrer ? : ");
   scanf("%d",&k);
     int N[k]={};
     
     
   for(i=0;i<k;i++){
       
       printf("entre  element %d : ",i+1);
       scanf("%d",&N[i]);
   }
   int MAX=N[0];
    for(i=0;i<k;i++){
       if(N[i]>MAX) {
       MAX=N[i];
     
       }
       
       }
  
   
       printf("le plus grand élément est : %d\n",MAX);

     
    return 0;
}