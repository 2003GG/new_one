// challenge 01 / Day 2 / les fonctions
#include <stdio.h>

int S,N1,N2;
int SOMME(){
    
    S=N1+N2 ;
    printf("la somme de %d et %d est : %d",N1,N2,S);
    return S;
}   



int main() {
 printf("veullez saisir la premier valeur : ");
 scanf("%d",&N1);
  printf("veullez saisir la deuxiem valeur : ");
 scanf("%d",&N2);
 S=SOMME();
   
    return 0;
}