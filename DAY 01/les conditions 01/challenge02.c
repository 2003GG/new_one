// challenge 02 . les condition 1
#include <stdio.h>

int main() {
    char C;

    printf("Veuillez entrer un caractère : ");
    scanf("%c", &C);

    
    switch (C) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", C);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", C);
            break;
    }

    return 0;
}