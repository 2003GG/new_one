// problem challenge 014 
// day 02 / les tableux
#include <stdio.h>
#include <math.h>
int main() {
   int i,k,S,M;
   
   printf("Combien d'éléments voulez-vous entrer ? : ");
   scanf("%d",&k);
     int T[k];
     
     
   for(i=0;i<k;i++){
       printf("entre l'elements %d: ",i+1);
       scanf("%d",&T[i]);
       S=S+T[i];
     
   }
     M=S/(k);
   printf("le moyenne est : %d",M);
       
   
    return 0;
}