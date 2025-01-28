// challenge 05  // les bucles // dat 02
#include <stdio.h>

int main() {
  int n,somme=0;
  
 
  printf("entre le nombre   : ");
  scanf("%d",&n);
    for(int i=1;i<=n;i++){
        somme+=i ;
     
      
  }  
  printf("la somme de %d est : %d",n,somme);

    return 0;
}