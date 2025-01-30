#include <stdio.h>

int main() {
    float T;
    printf(" la température en Celsius : ");
    scanf("%f",&T);
    if (T < 0){
        printf ("l'état de l'eau est Solide");
    }
   else if(T>=0 && T<100){
       printf ("l'état de l'eau est Liquide");
   }
   else {
       printf ("l'état de l'eau est Gaz");
   }
   
   

    return 0;
}