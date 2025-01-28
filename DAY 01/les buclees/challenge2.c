//challenge 02 /les bucles
#include <stdio.h>
#include <math.h>
int main() {
    int i,n;
    long long r;
    printf("entre un nombre: ");
    scanf("%d",&n);

    for(i=n-1;i>=1;i--){
     r=n * i;
    printf("%d!= %d\n",n,r);
    
    }
  
  
    return 0;
}
// PROBLEM      !!!!!!!!