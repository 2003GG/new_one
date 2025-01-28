//challenge 05 , les conditions 01
#include <stdio.h>
#include <math.h>
int main() {
    int a,M,J,H,m,S;
    printf("entre les nombres des anes : ");
    scanf("%d",&a);
    M=12*a;
    J=365*a;
    H=12*30*24*a;
    m=12*30*24*60*a;
    S=12*30*24*60*6*a;
printf("mois = %d\n",M);

printf("jour = %d\n",J);

printf("Heures = %d\n",H);

printf("Minutes = %d\n",m);
printf("secondes = %d\n",S);








    return 0;
}