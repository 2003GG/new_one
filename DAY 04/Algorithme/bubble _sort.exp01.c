#include <stdio.h>
   int T[40];
   int D,tmp,i,j;
   
   void bubble_sort(int *a , int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp ;
   }
    void croissant(){
    
    for(i=0;i<D-1;i++){
       for(j=0;j<D-i-1;j++){
           
           if(T[j] > T[j+1])
           bubble_sort(&T[j],&T[j+1]);
           
       }
   }
   for(i=0;i<D;i++){
       printf("%d\n",T[i]);
   }
}   
    void decroissant(){
    
    for(i=0;i<D-1;i++){
       for(j=0;j<D-i-1;j++){
           
           if(T[j] < T[j+1])
           bubble_sort(&T[j],&T[j+1]);
           
       }
   }
   for(i=0;i<D;i++){
       printf("%d\n",T[i]);
   }
}    

int main() {
    int Y;
   printf("commbien des nombres : ");
   scanf("%d",&D);
   for(i=0;i<D;i++){
       printf("entre les nombre : ");
       scanf("%d",&T[i]);
   }
   printf("1--croissatn\n");
   printf("2--decroissant\n");
   printf("choisie un choix : ");
   scanf("%d",&Y);
   switch(Y){
       case 1:
       croissant();
       break;
       case 2:
       decroissant();
       break;
   }
  
    return 0;
}