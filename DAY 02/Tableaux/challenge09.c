// challenge09 / day 02 /les tableux /
#include <stdio.h>

int main() {
   int i,j,T[5];
    
    for(i=0;i<5;i++){
        
        printf ("entre l'element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    for(j=4;j>=0;j--){
        printf("les elements inverse : %d\n",T[j]);
    }

    return 0;
}