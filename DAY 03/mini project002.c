#include <stdio.h>
#include <string.h>

int count = 0, i;

struct info {
    char nom[40][20];
    char numero[40][20];
    char email[40][30]; 
};

struct info pro;

void Ajoute() {
    int N;
    printf("Combien de contacts : ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Nom : ");
        scanf("%19s", pro.nom[i]); 
        printf("Numéro de téléphone : ");
        scanf("%19s", pro.numero[i]);
        printf("Adresse e-mail : ");
        scanf("%29s", pro.email[i]); 
    }
    count += N; 
}

void Affiche() {
    int F;
    printf("1-\t Afficher les noms\n");
    printf("2-\t Afficher les numéros de téléphone\n");
    printf("3-\t Afficher les adresses e-mail\n");
    printf("Choisir un choix : ");
    
    scanf("%d", &F);
    
    switch (F) {
        case 1:
            for (i = 0; i < count; i++) {
                printf("%s\n", pro.nom[i]);
            }
            break;
        case 2:
            for (i = 0; i < count; i++) {
                printf("%s\n", pro.numero[i]);
            }
            break;
        case 3:
            for (i = 0; i < count; i++) {
                printf("%s\n", pro.email[i]);
            }
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
}

void SUPPRIME() {
    char supp[50];
    printf("Entrez le nom du contact à supprimer : ");
    scanf("%s", supp);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(supp, pro.nom[i]) == 0) {
            for (int j = i; j < count - 1; j++) {
                strcpy(pro.nom[j], pro.nom[j + 1]);
                strcpy(pro.email[j], pro.email[j + 1]);
                strcpy(pro.numero[j], pro.numero[j + 1]);
            }
            count--; 
            printf("Le contact de '%s' a été supprimé avec succès !\n", supp);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Le contact '%s' n'a pas été trouvé.\n", supp);
    }
}

void Recherch() {
    char C[40];
    
    if (count == 0) {
        printf("Aucun contact disponible pour la recherche.\n");
    }
 
    printf("Recherche par nom : ");
    scanf("%s", C);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(C, pro.nom[i]) == 0) {
            printf("Le contact '%s' est disponible.\n", C);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Le contact '%s' n'est pas disponible.\n", C);
    }
}

void Modofier() {
    char name[30];
    char A[20], E[30];  // Corrected to simple char arrays
    
    int found = 0;
    
    printf("Entrez le nom de contact à mettre à jour : ");
    scanf("%s", name);
    
    for (int i = 0; i < count; i++) {
        if (strcmp(name, pro.nom[i]) == 0) {
            printf("Le contact '%s' est disponible.\n", name);
            printf("Entrez le nouveau numéro de téléphone : ");
            scanf("%19s", A);  // Corrected input to match phone number size
            strcpy(pro.numero[i], A);  // Corrected strcpy
            
            printf("Entrez la nouvelle adresse e-mail : ");
            scanf("%29s", E);  // Corrected input to match email size
            strcpy(pro.email[i], E);  // Corrected strcpy
            
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Le contact '%s' n'a pas été trouvé.\n", name);
    }
}

int main() {
    int K;
    
    while (1) {
        printf("\n1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("Sélectionnez le numéro de service : ");
        scanf("%d", &K);

        switch(K) {
            case 1:
                Ajoute();
                break;
            case 2:
                Modofier();
                break;
            case 4:
                Affiche();
                break;
            case 3:
                SUPPRIME();
                break;
            case 5:
                Recherch();
                break;
            default:
                printf("Option invalide.\n");
                break;
        }
    }

    return 0;
}
