#include <stdio.h>
#include <string.h>
  int i;
char Movies[30][30] = {"John_Wick", "King_Kong", "Harry_Potter"};
char Anime[30][30] = {"Demon_Slayer","Black_Clover","Naruto","Monster"};
char Series[30][30] = {"Breaking_Bad","Reacher","black_Bird"};
char M[30];
int found = 0;
    int C;
 
 void Add(){
     char Q[20];
     char A[30];
     char B[30];
     int R;
     printf("1.\tfor add a Movie\n");
     printf("2.\tfor add a Anime\n");
     printf("3.\tfor add a Series\n");
     printf("what do you want to add : ");
     scanf("%d",&R);
     switch(R){
         case 1:
         printf("the name of the move : ");
         scanf("%S",&Q);
         for(i=0;i<30;i++){
             if(strcmp(Q,Movies[i])){
                    printf("The movie %s is available.\n",Q);
                 found=1;
                 break;
             }
                 if (!found)
            {
                printf("The movie %s is not available.\n",Q);
               strcpy(Q,Movies[i]);
               printf("Now ,The movie %s is available.\n",Q); 
               break;
              }
                }
                  
                  break;
                  
                  case 2:
                   printf("the name of the Anime : ");
         scanf("%s",&A);
         for(i=0;i<30;i++){
             if(strcmp(A,Anime[i])){
                    printf("The Anime %s is available.\n",A);
                 found=1;
                 break;
             }
                 if (!found)
            {
                printf("The Anime %s is not available.\n",A);
               strcpy(A,Anime[i]);
               printf("Now ,The Anime %s is available.\n",A); 
               break;
              }
                }
                  break;
                  
                  
                 case 3:
                   printf("the name of serie: ");
         scanf("%S",&B);
         for(i=0;i<30;i++){
             if(strcmp(B,Series[i])){
                    printf("The Serie %s is available.\n",Q);
                 found=1;
                 break;
             }
                 if (!found)
            {
                printf("The Serie %s is not available.\n",Q);
               strcpy(B,Series[i]);
               printf("Now ,The Serie %s is available.\n",Q); 
               break;
              }
                }
                  break;
     }
         
         
         
         
                                                                   }

int main()
{
    int L;
    printf("******Welcome to your little Cinema******\n");
    printf("1.\tMovies\n");
    printf("2.\tAnime\n");
    printf("3.\tSeries\n");
    printf("what is your choise : ");
    scanf("%d",&L);
    switch(L){
        case 1:
       Add();
         break;
    }

    return 0;
}