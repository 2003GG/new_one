#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;
 char arr[i] = {};
int size=5;
// tom_james","harry_potter","ramona","the_hobbit","germinal
    int *choise;
    float prix[100][40]={};
    char titre[100][40]={};
    int quant[100]={};
    char auteur[100][40]={};
    char *n ,z;
    int x ,nq;
    void ajoute (){
        // int x ;
        printf("combien de livres allez-vous ajouter : ");
        scanf("%d",&x);
        for(int i=0;i<x;i++)
        {
     printf("le titre de livre : ");
    scanf("%c\n",&titre);
    printf("Auteur du livre : ");
    scanf("%c\n",&auteur);
    printf("Prix du livre : ");
    scanf("%f\n",&prix);
    printf("Quantité en stock : ");
    scanf("%d\n",&quant);
        
        void afficher (){
    printf("les livres que disponible : ");
    for(i=0 ; i<size ; i++)
    printf("%s",arr[i]);
    }
    void recherch(){
        // char n
        printf("le titre de livre : ");
        scanf("%s",&n);
        for(i=0;i<arr[5];i++)
        if(strcmp(n,arr[i])==0)
        printf("vous avez déjà ce livre");
        
        else 
        printf("ajoute le livre");
        
    }
     void la_quantite(){  
        //  int z;
     printf("quel numéro du livre voulez-vous changer sa quantité : ",size-1);
     scanf("%d",&z);
     if(z>=0 && z<size)
    //  int nq;
    //  nouvelle_quant=nq
     printf("nouvelle quante : ");
     scanf("%d",&nq);
     quant[z]=nq;
     printf("quantite mise a jour\n");
     else
     printf("error");
     
     
        //  char arr[z]={};
         
         
         
     }   
        
        
        
    }
}
int main() {
   int i;
    
    
    printf("ajoute un livre au stock --> 1\n");
    printf("afficher tous les livres disponibles --> 2\n");
    printf("recherch un livre par son titre --> 3\n");
    printf("mettre a jour la quantite d'un livre --> 4\n");
    printf("suprime un livre du stock --> 5\n");
    printf("affiche le nombre total de livres total en stock --> 1\n");
    printf("choise un nombre :");
    scanf("%d",&choise);
    switch(choise){
    case 1 :
    ajoute();
    
    break;
    
    case 2 : 
    afficher();

   break;
   case 3 : 
   recherch();
   
   break;
   case 3 :
   la_quantite();
   
   
   
    
    
    
    
    return 0;
}