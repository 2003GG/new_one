//challenge 01 /les bucles
#include <stdio.h>
#include <math.h>
int main() {
    int i,n,r=0;
    
    printf("entre un nombre: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
      r= r * i;
    printf("%d * %d = %d\n",n,i,r);
    
    }
  
  
    return 0;
}