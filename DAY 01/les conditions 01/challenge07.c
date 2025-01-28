//challenge 07 , les conditions 01
#include <stdio.h>

int main() {
 char n; 
 printf("entre un caractère : ");
 scanf("%c",&n);
 if (n<=90 && n>=60)
 printf("le caractère est un lettre majuscule");
  
else
 printf("le caractère est un lettre mminiscule");


    return 0;
}