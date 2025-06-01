#include <stdio.h>
#include <string.h>

char nom[30][30];
char branche[30][30];
char ecole[30][30];
char n[30], b[30], e[30];
int age[30], nexam[30], u, i, pos;
int count = 0;

void ajoute()
{

    printf("comien de nomes : ");
    scanf("%d", &u);
    for (i = 0; i < u; i++)
    {
        printf("nom et prenom : ");
        scanf("%s", &nom[i]);
        printf("l'age : ");
        scanf("%d", &age[i]);
        printf("le branche : ");
        scanf("%s", &branche[i]);
        printf("l'ecole : ");
        scanf("%s", &ecole[i]);
        printf("le nombre de l'exam : ");
        scanf("%d", &nexam[i]);
    }
    count += u;
}

void Recherche()
{
    
    printf("********Recherhe le nom dans la liste********\n");
    printf("nom et prenom : ");
    scanf("%s", &n);
    for (i = 0; i < count; i++)
    {
        if (strcmp(n, nom[i]) == 0)
        {
            printf("le nom %s est sur la liste\n", n);
         
            break;
        }
        else
        {

            printf("le nom %s n'est pas sur la liste\n", n);
            break;
        }
    }
}
void supprime()
{
    for (i = 0; i < count; i++)
    {
        printf("le nom %s de position ----> %d\n", nom[i], i);
    }

    printf("entrez la position de nom que vous souhaitez supprimer : ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= count)
    {
        printf("Position invalide.\n");
        return;
    }

    for (i = pos; i < count - 1; i++)
    {
        strcpy(nom[i], nom[i + 1]);
        strcpy(branche[i], branche[i + 1]);
        strcpy(ecole[i], ecole[i + 1]);
    }

    count--;

    printf("Après suppression:\n");
    for (i = 0; i < count; i++)
    {
        printf("le nom %s de position ----> %d\n", nom[i], i);
    }
}
void affiche()
{
    int Y;
    printf("1.pour affiche le nombre des etudiant\n");
    printf("2.pour affiche la liste des informations des etudiantas\n");
    printf("choise le nombr de service : ");
    scanf("%d", &Y);
    printf("-----------------------------------------------\n");
    switch (Y)
    {
    case 1:
        printf("le nombre des etudiant est : %d ", count);
        break;
    case 2:
        for (i = 0; i < count; i++)
        {
            printf("nom : %s\n", nom[i]);
            printf("l'age : %d\n", age[i]);
            printf("branche : %s\n", branche[i]);
            printf("l'ecole : %s\n", ecole[i]);
            printf("nombre de l'exam : %d\n", nexam[i]);
            printf("\n--------------------------------------\n");
        }
    }
}
int main()
{
    int k;
    while (count < 30)
    {
        printf("\t\t\t *****bomjour a le bac service*****\n");
        printf("\t\t\t 1. le service pour ajoute dans la liste\n");
        printf("\t\t\t 2. le service pour recherche dans la list\n");
        printf("\t\t\t 3. le service pour supprime \n");
        printf("\t\t\t 4. le service pour affiche \n");
        printf("\n");
        printf("\t\t\tchoise le nombre de servive : ");

        scanf("%d", &k);
        switch (k)
        {
        case 1:
            ajoute();
            break;
        case 2:
            Recherche();
            break;
        case 3:
            supprime();
            break;
        case 4:
            affiche();
            break;

        default:
            printf("le choix es invalide");
            break;
        }
    }

    return 0;
}
