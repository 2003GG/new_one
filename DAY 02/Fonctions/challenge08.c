// challenge08 // les fonctions // DAY 02
#include <stdio.h>
int N;

int nombre(){ 
  if(N%2==0){
      printf("le nombre %d est paire",N);
  }
else if(N%2!=0){
    
   printf("le nombre %d est impaire",N);
    
}
}
int main(){
    printf("entre le nombre : ");
    scanf("%d",&N);
   nombre();
    return 0;
}