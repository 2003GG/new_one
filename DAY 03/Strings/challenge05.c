#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    char C[10][10];
    
    printf("how many character : ");
    scanf("%d",&n);
    for (i=0 ; i < n ; i++){
        printf("character number %d : ",i+1);
        scanf("%s",&C[i]);
 
        
    }
    for(i=n;i>=0;i--){
       printf("%s",C[i]);
    }

    return 0;
}