//challenge 02 // struct // DAY 03
#include <stdio.h>
#include <string.h>
int main() {
   struct etudiant{
       char nom[40][20];
       char prenom[40][20];
       float note[40];
   };
   struct etudiant S1;
   int N,i;
   printf("commbien des étudiants : ");
   scanf("%d",&N);
   for(i=0;i<N;i++){
   printf("nom d'étudiant %d ; ",i+1);
   scanf("%s",&S1.nom[i]);
   printf("prenom d'étudiant %d: ",i+1);
   scanf("%s",&S1.prenom[i]);
   printf("note d'étudiant %d: ",i+1);
   scanf("%f",&S1.note[i]);
   }
    for(i=0;i<N;i++){
        printf("nom : %s\n",S1.nom[i]);
        printf("prenom : %s\n",S1.prenom[i]);
        printf("note: %2.f\n",S1.note[i]);
        
        
    }

    return 0;
}