// challenge 02 / Day 2 / les fonctions
#include <stdio.h>

int M,N1,N2;
int Multiplication(){
    
    M=N1/N2 ;
    printf(" la Multiplication de %d et %d est : %d",N1,N2,M);
    return M;
}   



int main() {
 printf("veullez saisir la premier valeur : ");
 scanf("%d",&N1);
  printf("veullez saisir la deuxiem valeur : ");
 scanf("%d",&N2);
 M=Multiplication();
   
    return 0;
}