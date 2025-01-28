#include <stdio.h>
int i;
char nom[5][30];
char inverse(){ 
    printf("les nomes inverse :");
    for(i=5;i>0;i--){
        
        printf("%s\n",nom[i]);
    }

}
int main() {
    for(i=0;i<5;i++){
    printf("entre le nom %d : ",i+1);
    scanf("%s",&nom[i]);
    } 
    inverse();
    return 0;
}