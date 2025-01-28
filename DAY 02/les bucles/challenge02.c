//challenge 02/ les bucles 2 / day 02
#include <stdio.h>

int main() {
  int n,i,j;
  printf("how many stares you want : ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
  
      printf("*");
  }
  printf("\n");
  }

    return 0;
}