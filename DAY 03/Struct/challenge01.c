//challenge 01 // struct // DAY 03
#include <stdio.h>
#include <string.h>
int main() {
   struct informations{
       char nom[40][20];
       char prenom[40][20];
       int age[40];
   };
   struct informations pro;
   int N,i;
   printf("commbien des personne : ");
   scanf("%d",&N);
   for(i=0;i<N;i++){
   printf("nom ; ");
   scanf("%s",&pro.nom[i]);
   printf("prenom : ");
   scanf("%s",&pro.prenom[i]);
   printf("age : ");
   scanf("%d",&pro.age[i]);
   }
    for(i=0;i<N;i++){
        printf("nom : %s\n",pro.nom[i]);
        printf("prenom : %s\n",pro.prenom[i]);
        printf("age : %d\n",pro.age[i]);
        
        
    }

    return 0;
}