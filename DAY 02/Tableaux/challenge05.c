//challenge05//les tableux//day 02
#include <stdio.h>

int main() {
  
    int k,i;
   printf("Combien d'éléments voulez-vous entrer ? : ");
   scanf("%d",&k);
     int N[k]={};
     
     
   for(i=0;i<k;i++){
       
       printf("entre  l'element %d : ",i+1);
       scanf("%d",&N[i]);
   }
   int min=N[0];
    for(i=0;i<k;i++){
       if(N[i]<min) {
       min=N[i];
     
       }
       
       }
  
   
       printf("le plus petit élément est : %d\n",min);

     
    return 0;
}