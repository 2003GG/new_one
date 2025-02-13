// Tri Par selection

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
        int min =i;
        
       for(j=i+1;j<D;j++){
           
           if(T[j] < T[min])
           bubble_sort(&T[j],&T[min]);
           
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
       croissant();
      
      
  
  
    return 0;
}