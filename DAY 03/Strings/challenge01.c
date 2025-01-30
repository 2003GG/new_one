#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    char N[5][10];
    
    for (i=0 ; i < 5 ; i++){
        printf("words number %d : ",i+1);
        scanf("%s",&N[i]);
 
        
    }
    for(i=0;i<5;i++){
       printf("%s\n",N[i]);
    }

    return 0;
}