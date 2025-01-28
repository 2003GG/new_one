// challenge 03 / Day 2 / les fonctions
#include <stdio.h>

int N1,N2;
int Maximum(){
  if(N1>N2){
      printf("la valeux maximum est : %d",N1);
  }
      else if(N2>N1){
           printf("la valeur maximum est : %d",N2);
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
Maximum();
   
    return 0;
}