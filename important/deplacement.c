// changement ou deplacemen
#include <stdio.h>

int main() {
int i,pos,size,k;
int num[20];

printf("enter the size : ");
scanf("%d",&size);

for (i=0;i<size;i++){
    printf("entre le nombre de position %d: ",i);
    scanf("%d",&num[i]);
}

printf("entre le posein de nombre  : ");
scanf("%d",&pos);
printf("le novelle nombre : ");
scanf("%d",&k);

for(i=size;i>pos;i--){
    num[pos]=k;
    
    
}
size++;

for(i=0;i<size-1;i++){
    printf("%d\n",num[i]);
}
    

    return 0;
}