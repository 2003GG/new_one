
#include <stdio.h>

int main() {
int i,pos,size;
int num[20];
printf("enter the size : ");
scanf("%d",&size);
for (i=0;i<size;i++){
    printf("entre le nombre de position %d: ",i);
    scanf("%d",&num[i]);
}
printf("entre le posein de nombre  : ");
scanf("%d",&pos);
for(i=pos;i<size;i++){
    num[pos]=num[pos+1];
    
}
size--;
for(i=0;i<size;i++){
    printf("%d\n",num[i]);
}
    

    return 0;
}