// challenge 04 / les conditions 02
#include <stdio.h>
#include <math.h>
int main() {
 int n,j,s,t,l;
printf("Nombre total de jours de congés accordés : ");
scanf("%d",&n);
printf("Nombre de jours de congés utilisés : ");
scanf("%d",&j);
if(j<=n){
printf("______Statut de l'employé_______\n");
printf("0--pour temps partiel\n");
printf("1--pour temps plein\n");
printf("Choisissez une option : ");
scanf("%d",&s);
switch(s){
case 0 :
l=((n)/2)-j;
printf("jours restants = %d",l);
break;
case 1 :
l=n-j;
printf("jour restants = %d",l);
break;
default:
printf("ERROR");
break;
}
}
else{
printf("IMPOSSIBLE");
}


    return 0;
}