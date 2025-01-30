
#include <stdio.h>
#include <string.h>
int main() {
   char nom,prenom,sexe;
   int age;
   printf("nom :");
   scanf("%s",&nom);
   printf("prénom : ");
   scanf("%s",&prenom);
   printf("âge : ");
   scanf("%d",&age);
   printf("sexe : ");
   scanf("%s",&sexe);
 
   printf("les iformations : \n");
   
   printf("nom : %s",nom);
   printf("prénom : %s",prenom);
   printf("âge : %d",age);
   printf("sexe : %s",sexe);
   

    return 0;
}