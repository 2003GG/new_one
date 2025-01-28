//challenge 08, les conditions 01
#include <stdio.h>

int main() {
 int n; 
 printf("entre la moyenne de note : ");
 scanf("%d",&n);
 
 if(n<10)
 printf("recalé");
 else if(n<12 && n>=10)
 printf("mention passable");
 else if (n>=12 && n<14)
 printf(" mention assez bien");
 else if (n>=14 && n<16)
 printf(" mention bien");
 else if (n>=16)
 printf("mention très bien");
  
else
 printf("ERROR");


    return 0;
}