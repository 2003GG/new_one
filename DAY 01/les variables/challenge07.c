#include <stdio.h>

int main() {
    float nombre1, nombre2, nombre3;
    float moyenne_ponderee;

    // Demander à l'utilisateur d'entrer les trois nombres
    printf("Entrez le 1er nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le 2ème nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le 3ème nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne pondérée
    moyenne_ponderee = (2 * nombre1 + 3 * nombre2 + 5 * nombre3) / (2 + 3 + 5);

    // Affichage du résultat
    printf("La moyenne pondérée est : %.2f\n", moyenne_ponderee);

    return 0;
}
