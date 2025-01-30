#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    char P[10][10];
    char D[10][10];
    
    printf("how many character : ");
    scanf("%d",&n);
    printf("premier chaine\n");
    for (i=0 ; i < n ; i++){
       
        printf("character number %d : ",i+1);
        scanf("%s",&P[i]);
 
    }
    printf("deuxieme chaine\n");
    for(i=0;i<n;i++){
        
        printf("character number %d : ",i+1);
        scanf("%s",&D[i]);
    }
   for (i = 0; i < n; i++) {
        if (strcmp(P[i], D[i]) == 0) {
            printf("le premier chaine (%s) et le deuxieme chaine (%s) sont égales\n",P[i],D[i]);
        } else {
           printf("le premier chaine (%s) et le deuxieme chaine (%s) sont différentes\n",P[i],D[i]);
        }
    }
    return 0;
}