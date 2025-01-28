#include <stdio.h>
#include <string.h>



char Titre[50][30];      
char Auteur[50][30];     
float Prix[50][30];          
float Quantite[50][30];        
int count = 0;                  
int n,i;                          
char R[50];                     

void AJOUTE() {
    printf("Combien de livres voulez-vous ajouter? : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Titre du livre %d: ", i + 1);
        scanf("%s",&Titre[i]);

        printf("Auteur du livre %d: ", i + 1);
        scanf("%s",&Auteur[i]);

        printf("Prix du livre %d: ", i + 1);
        scanf("%f", &Prix[i]);

        printf("Quantité en stock %d: ", i + 1);
        scanf("%f", &Quantite[i]);
    }

    count += n;  
}

void AFFICHAGE() {
    if (count == 0) {
        printf("Aucun livre disponible.\n");
        return;
    }
     
    int H;
    printf("1. Afficher les titres\n");
    printf("2. Afficher les auteurs\n");
    printf("3. Afficher les prix\n");
    printf("4. Afficher les quantités en stock\n");
    printf("Choisir un choix : ");
    scanf("%d", &H);

    switch (H) {
    case 1:
        printf("Titres des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%s\n",Titre[i]);
        }
        break;
    case 2:
        printf("Auteurs des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%s\n",Auteur[i]);
        }
        break;
                              //problem in (case 3:) //
    case 3:
        printf("Prix des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%4.fDH\n",Prix[i]);
        }
        break;
                                //Problem in (case 4:) //
    case 4:
        printf("Quantités en stock :\n");
        for (int i = 0; i < count; i++) {
            printf("%4.f\n",Quantite[i]);
        }
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }
     
}

void RECHERCHE() {
    if (count == 0) {
        printf("Aucun livre disponible pour la recherche.\n");
        return;
    }
 
    printf("Recherche par titre : ");
    scanf("%s",&R);

    
    for (int i = 0; i < count; i++) {
        if (strcmp(R,Titre[i]) == 0) {
            printf("Le livre '%s' est disponible.\n", R);
            
            break;
        }
        }
    for(i=0;i<count;i++){
     if(strcmp(R,Titre[i]) == 1){
         printf("Le livre '%S' n'est pas disponible\n",R);
     }
                 }
                 
}
void NOMBRE_TOTAL(){
    
    printf("le nombre total de livres en stock est : %d livres",count);
}

int main() {
    int D;
        while(count>=0){
        printf("\n******* Bonjour à votre librairie ********\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("*******************************************************\n");
        printf("Choisir un choix : ");
        scanf("%d", &D);

        switch (D) {
        case 1:
            AJOUTE();
            break;
        case 2:
            AFFICHAGE();
            break;
        case 3:
            RECHERCHE();
            break;
            case 6:
            NOMBRE_TOTAL();
            break;
            
        default:
            printf("Choix invalide. Essayez à nouveau.\n");
            break;
        }
        
    }
    return 0;
}
