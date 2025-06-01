// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int number,guess,count=0;
    
    srand(0);
    guess = rand()%100+1;
    
    
    do{
       printf("please guess number:");
       scanf("%d",&number);
       count++;
      if(number== guess)
         printf("congratulations!!!\n");
       else if(number< guess)
         printf("this number low \n");
      else
        printf("this number high\n");
         
        
    }while(number != guess);
   
    printf("you try a %d",count);
    

    return 0;
}
