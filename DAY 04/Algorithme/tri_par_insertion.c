// Tri par insertion //DAY 04
#include <stdio.h>

int T[40];
int D, tmp, i, j;

       //croissant//
void tri_Insertion() {  
    for (i = 1; i < D; i++) {
        tmp = T[i]; 
        j = i - 1;
        
        
        while (j >= 0 && T[j] > tmp) {
            T[j + 1] = T[j];
            j--;
        }
        
        
        T[j + 1] = tmp;
    }
    
  
    for (i = 0; i < D; i++) {
        printf("%d\n", T[i]);
    }
}

int main() {
    printf("Combien des nombres : ");
    scanf("%d", &D);
    
    for (i = 0; i < D; i++) {
        printf("Entre le nombre : ");
        scanf("%d", &T[i]);
    }
    
    tri_Insertion();
    
    return 0;
}
