//challenge 04 /les conditions 2
#include <stdio.h>
#include <math.h>
int main() {
    int S,A,R;
    float Res;
    printf("Score de performance (de 0 à 100) : ");
    scanf("%d",&S);
    printf("Ancienneté (en années) : ");
    scanf("%d",&A);
    printf("______Récompenses reçues______\n");
    printf("pour aucune--->0\n");
    printf("pour une--->1\n");
    printf("pour deux ou plus--->2\n");
    printf("____________________________________________________________________\n");
    printf("choise un nombre : ");
    scanf("%d",&R);
    switch(R){
        case 0:
        printf("Récompenses reçues pour aucune\n");
        printf("Resultat final de Récompenses reçues est : 0");
        break;
        case 1:
        printf("Récompenses reçues pour une\n");
        Res=R*0.10 ;
        printf("Resultat final de Récompenses reçues est : %.2f\n",Res);
        break;
        case 2:
        printf("Récompenses reçues pour deux ou plus\n");
        Res=R*0.20 ;
    printf("Resultat final de Récompenses reçues est :  %.2f\n",Res);
        break;
    }
    {
     if(S>=90 && A>=5)
     printf("Excellente\n");
     else if(S>=75 && A>3)
     printf("Bonne\n");
     else if(S>=50 && A<3)
     printf("Satisfaisante\n");
     else 
     printf("Insuffisante\n");
    }
    
    
  
  
    return 0;
}