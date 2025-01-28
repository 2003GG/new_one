#include <stdio.h>
#include <string.h>
#include <math.h>

char Titre[50][30];      
char Auteur[50][30];     
float Prix[50];          
float Quantite[50];        
int count = 0;                  

char R[50];                     

void AJOUTE() {
    int n;
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
    scanf("%d",&H);

    switch (H) {
    case 1:
        printf("Titres des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%s\n", Titre[i]);
        }
        break;
    case 2:
        printf("Auteurs des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%s\n",Auteur[i]);
        }
        break;
    case 3:
        printf("Prix des livres disponibles :\n");
        for (int i = 0; i < count; i++) {
            printf("%.4f DH\n",Prix[i]);
        }
        break;
    case 4:
        printf("Quantités en stock :\n");
        for (int i = 0; i < count; i++) {
            printf("%.4f\n", Quantite[i]);
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
        
    }
 
    printf("Recherche par titre : ");
    scanf("%s",&R);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(R, Titre[i]) == 0) {
            printf("Le livre '%s' est disponible.\n", R);
        }
        }
    for (int i = 0; i < count; i++) {
    if ((strcmp(R, Titre[i]) != 0)) {
        printf("Le livre '%s' n'est pas disponible.\n", R);
    }
}
}
void NOMBRE_TOTAL(){
    printf("Le nombre total de livres en stock est : %d livres\n", count);
}

void METTRE_A_JOUR() {
    char titre[30];
    float Q, P;
    
    printf("Entrez le titre du livre à mettre à jour : ");
    scanf("%s", titre);
    
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(titre, Titre[i]) == 0) {
            printf("Le livre '%s' est disponible.\n", titre);
            printf("Entrez la nouvelle quantité : ");
            scanf("%f", &P);
            Quantite[i] = P;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Le livre '%s' n'a pas été trouvé.\n", titre);
    }
}
void SUPPRIME() {
    char supp[50];
    printf("Entrez le titre du livre à supprimer : ");
    scanf("%s", supp);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(supp, Titre[i]) == 0) {
            
            for (int j = i; j < count - 1; j++) {
                
                strcpy(Titre[j], Titre[j + 1]);
                strcpy(Auteur[j], Auteur[j + 1]);
                Prix[j] = Prix[j + 1];
                Quantite[j] = Quantite[j + 1];
            }
            count--; 
            printf("Livre '%s' supprimé avec succès !\n", supp);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Livre '%s' non trouvé dans le stock.\n", supp);
    }
}

    


int main() {
    int D;
    while (1) {  
        printf("\t*********** Bonjour à votre librairie ***************\n");
        printf("\t*\t1. Ajouter un livre au stock\t\t\t\t\t*\n");
        printf("\t*\t2. Afficher tous les livres disponibles\t\t\t*\n");
        printf("\t*\t3. Rechercher un livre par son titre\t\t\t*\n");
        printf("\t*\t4. Mettre à jour la quantité d'un livre\t\t\t*\n");
        printf("\t*\t5. Supprimer un livre du stock\t\t\t\t\t*\n");
        printf("\t*\t6. Afficher le nombre total de livres en stock\t*\n");
       
        printf("\t*****************************************************\n");
        printf("\t\t\tChoisir un choix : ");
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
        case 4: 
            METTRE_A_JOUR();
            break;
            case 5:
            SUPPRIME();
        case 6:
            NOMBRE_TOTAL();
            break;
       
            
        default:
            printf("Choix invalide. Essayez à nouveau.\n");
            break;
        }
    }
}
