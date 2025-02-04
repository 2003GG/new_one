//challenge 03 // struct // DAY 03
#include <stdio.h>
#include <string.h>
int main() {
struct rectangle{
    float longueur;
    float largeur;
    float A;
};
 struct rectangle cal;
 printf("la valeur de longueur : ");
 scanf("%f",&cal.longueur);
 printf("la valeur de largeur : ");
 scanf("%f",&cal.largeur);
 
 cal.A = cal.longueur * cal.largeur ;
 printf("%2.f * %2.f = %2.f\n",cal.longueur,cal.largeur,cal.A);
 printf("l'aire du rectangle : %2.f",cal.A);

    return 0;
}