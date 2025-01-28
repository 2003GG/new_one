// challenge 04 / Day 2 / les fonctions
#include <stdio.h>

int N1,N2;
int Minimum(int N1,int N2){
  if(N1<N2){
      printf("la valeux Minimum est : %d",N1);
  }
      else if(N2<N1){
           printf("la valeur Minimum est : %d",N2);
      }
      else{
          printf("%d et %d est le meme",N1,N2);
      }
      

}   



int main() {
 printf("veullez saisir la premier valeur : ");
 scanf("%d",&N1);
  printf("veullez saisir la deuxiem valeur : ");
 scanf("%d",&N2);
Minimum();
   
    return 0;
}