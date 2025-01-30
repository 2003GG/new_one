#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Reservation
{
    int id;
    char nom[200];
    char prenom[200];
    int age;
    int date;
    int telephone;
    int statu;
};

struct Reservation reservations[200];
int count = 0;

void ajoute()
{
    if (count >= 200)
    {
        printf("Limite de réservation atteinte!\n");
        return;
    }

    struct Reservation new_reservation;
    int status;

    int Urid = rand() % 100 + 1;
    printf("Your Id Is: %d", Urid);
    new_reservation.id = Urid;

    printf("\nNom: ");
    scanf("%s",&new_reservation.nom);

    printf("Prénom: ");
    scanf("%s",&new_reservation.prenom);

    printf("Age: ");
    scanf("%d", &new_reservation.age);

    printf("Numéro de téléphone: ");
    scanf("%d", &new_reservation.telephone);

    printf("Date de réservation (jjmm): ");
    scanf("%d", &new_reservation.date);

    printf("\n______________\n");
    printf("Statu\n");
    printf("1. Valide\n");
    printf("2. Reporte\n");
    printf("3. Annule\n");
    printf("4. Traite\n");
    printf("Choisissez un statu: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Votre réservation est valide\n");
        new_reservation.statu = 1;
        break;
    case 2:
        printf("Votre réservation est reportée\n");
        new_reservation.statu = 2;
        break;
    case 3:
        printf("Votre réservation est annulée\n");
        new_reservation.statu = 3;
        break;
    case 4:
        printf("Votre réservation est traitée\n");
        new_reservation.statu = 4;
        break;
    default:
        printf("Statut invalide\n");
        return;
    }

    reservations[count] = new_reservation;
    count++;
    printf("Réservation ajoutée avec succès!\n");
}

void modifier()
{
    int index;
    printf("Inter the id reference of the reservation : ");
    scanf("%d", &index);
    int i = 0;

    while (i < count)
    {
        if (index == reservations[i].id)
        {
            printf("Found <3\n");
            printf("Modification de la réservation %d:\n", index);
            printf("Nouveau nom: ");
            scanf("%s", reservations[i].nom);

            printf("Nouveau prénom: ");
            scanf("%s", reservations[i].prenom);

            printf("Nouvel âge: ");
            scanf("%d", &reservations[i].age);

            printf("Nouveau numéro de téléphone: ");
            scanf("%d", &reservations[i].telephone);

            printf("Nouvelle date de réservation: ");
            scanf("%d", &reservations[i].date);
            break;
        }
        else
        {
            printf("not found\n");
            break;
        }
        i++;
    }

    printf("Réservation modifiée avec succès!\n");
}

void supprime()
{
    int index;
    printf("inter the id of the reservation: ");
    scanf("%d", &index);

    for (int i = 0; i < count; i++)
    {

        if (index == reservations[i].id)
        {
            int j = i;
            while (j < count)
            {
                reservations[j] = reservations[j + 1];
                j++;
            }
        }
    }

    count--;
    printf("Réservation supprimée avec succès!\n");
}

void afficher()
{
    for (int i = 0; i < count; i++)
    {
        printf("Id %d\n", reservations[i].id);
        printf("Réservation %d:\n", i + 1);
        printf("Nom: %s\n", reservations[i].nom);
        printf("Prénom: %s\n", reservations[i].prenom);
        printf("Âge: %d\n", reservations[i].age);
        printf("Numéro de téléphone: %d\n", reservations[i].telephone);
        printf("Date de réservation: %d\n", reservations[i].date);
        printf("Statut: %d\n", reservations[i].statu);
        printf("-----------------------------\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nBienvenue à la cabine\n");
        printf("1. Ajouter une réservation\n");
        printf("2. Modifier une réservation\n");
        printf("3. Supprimer une réservation\n");
        printf("4. Afficher toutes les réservations\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            ajoute();
            break;
        case 2:
            modifier();
            break;
        case 3:
            supprime();
            break;
        case 4:
            afficher();
            break;
        case 0:
            printf("Au revoir!\n");
            return 0;
        default:
            printf("Choix invalide!\n");
        }
    }
}