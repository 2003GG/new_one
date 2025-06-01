// PROBLEM
#include <stdio.h>

int main() {
int i,left,right,size;
int num[20];
int M,middle;
printf("enter the size : ");
scanf("%d",&size);
for (i=0;i<size;i++){
    printf("entre le nombre de pos %d: ",i);
    scanf("%d",&num[i]);
    
}
printf("le numbre que recherche : ");
    scanf("%d",&M);
    left = 0;
    right = size-1;
for(i=0;i<size;i++){
    
    
    middle = ((left+right)/2);
    if(num[middle]== M){
        printf("%d",middle);
        break;
    } 
    if(num[middle] > M ){
        left = middle+1;
        printf("the number in the left\n");
        
    }
    if(num[middle] < M){
        right= middle-1;
        printf("the number in the right \n");
        
    }
    
}
    return 0;
}