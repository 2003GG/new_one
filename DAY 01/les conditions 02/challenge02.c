// challenge 02 . les conditions 02
#include <stdio.h>
#include <math.h>
int main() {
 int a,t,n,p,k,f;
 printf("entre le prime : ");
 scanf("%d",&p);
 printf("entre le prime de base : ");
 scanf("%d",&k);
 
  printf("Nombre d'accidents au cours des 5 dernières années : ");
  scanf("%d",&n);
 printf("Âge du conducteur (en années) : ");
 scanf("%d",&a);
 printf("Type de voiture");
 printf("pour sportive ---> 1 \n");
 printf(" pour utilitaire ---> 2 \n");
 printf("pour familiale ---> 3 \n");
 printf("choise un nombre : \n");
 scanf("%d",&t);
 switch(t){
     case 1:
     printf(" type de voiture pour sportive\n");
     break;
     case 2 :
     printf(" type de voiture pour utilitaire\n");
     break;
     case 3 :
     printf(" type de voiture pour familiale\n");
     break;
     default:
     printf("ERRORE");
     break;
     }
     
{
  if(a<25){
  f=k*1.5;
  printf("le resultat est : %d",f);
}
  else if(a>=25 && a<65){
  printf(" Prime de base : %d",k);
}
  else if(a>=65){
  f=k*1.2;
  printf("le resultat est : %d",f);
}
  else if(t=1){
  f=p*2;
  printf("le resultat est : %d",f);
}
  else if(t=2){
  f=p*1.2;
  printf("le resultat est : %d",f);
}
  else if(t=3){
  f=p*1.1;
  printf("le resultat est : %d",f);
}
  else if(n > 1){
  f=p+0.03;
  printf("le resultat est : %d",f);
}
  else{
  printf("ERROR");
}

}




    return 0;
}