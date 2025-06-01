#include <stdio.h>
#include <string.h>
int i;
char Movies[30][30] = {"John_Wick", "King_Kong", "Harry_Potter"};
char Anime[30][30] = {"Demon_Slayer", "Black_Clover","Monster"};
char Series[30][30] = {"Breaking_Bad", "Reacher", "black_Bird"};
char M[30];
int found = 0;
int C;
void Add()
{
    char Q[30];
    char A[30];
    char B[30];
    int R;
    printf("1.\tfor add a Movie\n");
    printf("2.\tfor add a Anime\n");
    printf("3.\tfor add a Series\n");
    printf("what do you want to add : ");
    scanf("%d", &R);
    switch (R)
    {
    case 1:
        printf("the name of the movie : ");
        scanf("%S",Q);
        for (i = 0; i < 30; i++)
        {
            if (strcmp(Q, Movies[i])==0)
            {
                printf("The movie %s is available.\n", Q[i]);
                found = 1;
                break;
            }
            if (!found)
            {
               
                strcpy(Movies[i],Q);
                  printf("Now ,The Movie %s is available.\n", Q[i]);
                break;
            }
        }

        break;

    case 2:
        printf("the name of the Anime : ");
        scanf("%s", &A);
        for (i = 0; i < 30; i++)
        {
            if (strcmp(A, Anime[i])==0)
            {
                printf("The Anime %s is available.\n", A[i]);
                found = 1;
                break;
            }
            if (!found)
            {
                
                strcpy(Anime[i],A);
                printf("Now ,The Anime %s is available.\n", A[i]);
                break;
            }
        }
        break;

    case 3:
        printf("the name of serie: ");
        scanf("%S", &B);
        for (i = 0; i < 30; i++)
        {
            if (strcmp(B, Series[i])==0)
            {
                printf("The Serie %s is available.\n", B[i]);
                found = 1;
                break;
            }
            if (!found)
            {
                
                strcpy(Series[4],B);
              
                break;
            }
        }
        break;
    }
}
void Movies_info()
{

   
    printf("1 . Movie Summary\n");
    printf("2 . Movie Characters\n");
    printf("3 . Production date\n");
    printf("what id your choise : ");
    scanf("%d", &C);
    switch (C)
    {
    case 1:
     printf("What is the name of the movie you want: ");
    scanf("%s", M);
        for (i = 0; i < 30; i++)
        {
            if (strcmp(M, Movies[i]) == 0)
            {

                printf("\n(%s) is available.\n", M[i]);
                found = 1;
                break;
            }
        }

        if (!found)
        {
         
       printf("The movie %s is not available.\n", M[i]);
       break;
        }
        
        
      
     
        if (strcmp(M, "John_Wick") == 0)
        {
            printf("Some information about %s:\n", M);
            printf("\t\tThe film blends action, revenge, and stylistic world-building, introducing audiences to the intricate, secretive world of assassins\n");

            printf("with the Continental Hotel acting as a central point of the story. John Wick became a sleeper hit, praised for its action choreography\n");
            printf("Keanu Reeves performance, and the unique atmosphere that was established, leading to the creation of sequels\n");
           break;
        }
        
        if (strcmp(M, "King_Kong") == 0)
        {
            printf("A film crew travels to the mysterious Skull Island to make a movie. There, they discover giant creatures, including a massive gorilla named King Kong. The beautiful actress Ann Darrow is captured by a native tribe and offered as a sacrifice to Kong. The gorilla initially captures Ann but later forms a bond with her.\n");
          break;
        }
        
        if (strcmp(M, "Harry_Potter") == 0)
        {
            printf("The Harry Potter series, written by J.K. Rowling, follows the life and adventures of a young wizard named Harry Potter. Harry, who is raised by his cruel aunt and uncle, discovers on his 11th birthday that he is a wizard and has been accepted into Hogwarts School of Witchcraft and Wizardry.\n");
            printf("Throughout the series, Harry learns about his true heritage, including the fact that his parents were murdered by the dark wizard Lord Voldemort when Harry was just a baby. Harry survived an attack from Voldemort, which left him with a lightning-shaped scar on his forehead.\n");

            printf("At Hogwarts, Harry befriends Ron Weasley and Hermione Granger, and together they face numerous challenges, uncover dark secrets, and battle the forces of evil. Each book focuses on a school year and the growing threat from Voldemort, who seeks to regain full power and conquer the wizarding world.\n");

            printf("As Harry grows, he learns more about his connection to Voldemort, and the final books see Harry, Ron, and Hermione on a mission to find and destroy Voldemort's Horcruxes (objects containing pieces of his soul) in order to weaken and eventually defeat him.\n");

            printf("The series culminates in the Battle of Hogwarts, where Harry confronts Voldemort one last time. With the help of his friends, allies, and the power of love, Harry is able to defeat Voldemort and bring peace to the wizarding world.\n");

            printf("The series is filled with themes of friendship, bravery, love, and the battle between good and evil, and it has become one of the most beloved and successful book franchises of all time.\n");
            break;
        }
        
      
      break;
        
    case 2:
     printf("What is the name of the movie you want: ");
    scanf("%s", M);
        for (i = 0; i < 3; i++)
        {
            if (strcmp(M, Movies[i]) == 0)
            {
                printf("(%s) is available.\n", M[i]);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("The movie %s is not available.\n", M[i]);
        }

        if (strcmp(M, "John_Wick") == 0)
        {
            printf("the charters of %s :\n", M[i]);
            printf(" 1.\tJohn Wick (Keanu Reeves)\n");
            printf(" 2.\tViggo Tarasov (Michael Nyqvist)\n");
            printf(" 3.\tIosef Tarasov (Alfie Allen)\n");
            printf(" 4.\t Winston (Ian McShane)\n");
            printf(" 5.\t Charon (Lance Reddick)\n");
            printf(" 6.\tSantino D'Antonio (Riccardo Scamarcio)\n");
            printf(" 7.\tMarcus (Willem Dafoe)\n");
            printf(" 8.\tThe Bowery King (Laurence Fishburne)\n");
            printf(" 9.\t Zero (Mark Dacascos)\n");
            printf(" 10.\tSophia (Halle Berry)\n");
            printf(" 11.\tThe Adjudicator (Asia Kate Dillon)\n");
            printf("\n");
            break;
        }
        
        if (strcmp(M, "King_Kong") == 0)
        {
            printf("the charters of %s : \n", M[i]);
            printf("   1.\tKing Kong");
            printf("   2.\tAnn Darrow\n");
            printf("   3.\tCarl Denham\n");
            printf("   4.\tJack Driscoll\n");
            printf("   5.\tCaptain Englehorn\n");
            printf("   6.\tDr. Hayes\n");
            printf("   7.\tKong's Natives (Skull Islanders)\n");
            printf("   8. The Crew of the Venture\n");
             printf("\n");
             break;
        }
        
        if (strcmp(M, "Harry_Potter") == 0)
        {
            
            printf("the charters of %s ⚯⚡︎:\n", M[i]);
            printf("   1.\tHarry Potter (Daniel Radcliffe)");
            printf("   2.\tHermione Granger (Emma Watson)\n");
            printf("   3.\t Ron Weasley (Rupert Grint)\n");
            printf("   4.\t Albus Dumbledore (Richard Harris/Michael Gambon)\n");
            printf("   5.\tLord Voldemort (Ralph Fiennes)\n");
            printf("   6.\tSeverus Snape (Alan Rickman)\n");
            printf("   7.\tDraco Malfoy (Tom Felton)\n");
            printf("   8.\tRubeus Hagrid (Robbie Coltrane)\n");
            printf("   9.\tSirius Black (Gary Oldman)\n");
             printf("\n");
             break;
        }
        break;
    }
    
}

void Anime_info(){
    int An;
    char V[30];
     printf("What is the name of the anime you want: ");
       scanf("%s",V);
    printf("1 . Anime Summary\n");
    printf("2 . Anime Characters\n");
    printf("3 . Production date\n");
    printf("what id your choise : ");
    scanf("%d", &An);
    switch (An){
        case 1:
       
           for (i = 0; i < 30; i++)
           {
               if (strcmp(V, Anime[i]) == 0)
               {
   
                   printf("\n(%s) is available.\n", V[i]);
                   found = 1;
                   break;
               }
           }
   
           if (!found)
           {
               printf("The movie %s is not available.\n", V[i]);
               break;
           }
           if(strcmp(V,"Demon_Slayer")==0){
  printf("Demon Slayer (Kimetsu no Yaiba) is a Japanese anime series based on the manga by Koyoharu Gotouge. It follows the story of Tanjiro Kamado, a kind-hearted boy who lives with his family in the mountains. One day, after returning home from a trip, he finds his family slaughtered by demons, with only his sister Nezuko surviving—though she has been turned into a demon herself.\n");
  printf("In order to avenge his family and find a cure for Nezuko, Tanjiro becomes a Demon Slayer, joining the Demon Slayer Corps, a group of warriors dedicated to eradicating demons. Along the way, he meets other Demon Slayers, including Zenitsu Agatsuma and Inosuke Hashibira, who become his friends and allies.\n");
  printf("The story focuses on Tanjiro's journey as he battles powerful demons, uncovers the truth about the origins of demons, and strives to save his sister. The series explores themes of perseverance, friendship, and sacrifice, with intense action scenes, emotional moments, and beautifully animated battles.\n");
  printf("Throughout the anime, Tanjiro faces off against various demon ranks, including the Twelve Kizuki, the strongest demons who serve under the Demon King Muzan Kibutsuji. The show is known for its stunning animation by Ufotable, particularly during fight scenes, as well as its deep character development and emotional storytelling.\n");           
  printf("The series spans several seasons, with the first season (2019) followed by the Mugen Train arc (2020) and the Entertainment District arc (2021).\n");           
     break;
}
  if(strcmp(V,"Monster")==0){
printf("Monster is a psychological thriller anime about Dr. Kenzo Tenma, a Japanese neurosurgeon in Germany who saves the life of a young boy, Johan Liebert, who later becomes a ruthless psychopath. After realizing his mistake, Tenma embarks on a dangerous journey to stop Johan, who is behind a series of gruesome murders. The series explores deep themes of morality, guilt, and the nature of evil, as Tenma confronts the dark consequences of his decision and the shadowy forces surrounding Johan's past.\n");

  break;

  } 
  if(strcmp(V,"Black_Clover")==0){
    printf("Black Clover follows Asta, a determined boy born without magic in a world where magic is everything. Despite this, Asta dreams of becoming the Wizard King, the strongest mage in the Clover Kingdom. Alongside his rival and childhood friend Yuno, who is incredibly gifted with magic, Asta embarks on a journey to prove his worth. Asta eventually obtains a mysterious grimoire with anti-magic powers, which allows him to fight powerful enemies and face various challenges. The series is filled with action, magic battles, and themes of perseverance, friendship, and overcoming obstacles.\n");
    break;
}        
   break;
   case 2:
  
           for (i = 0; i < 30; i++)
           {
               if (strcmp(V, Anime[i]) == 0)
               {
   
                   printf("\n(%s) is available.\n", V[i]);
                   found = 1;
                   break;
               }
           }
   
           if (!found)
           {
               printf("The movie %s is not available.\n", V[i]);
               break;
           }
           if(strcmp(V,"Black_Clover")==0){
            printf("Black clover characters :\n");
           
            printf("1.\tAsta\n");
printf("2.\tYuno\n");
printf("3.\tYami Sukehiro\n");
printf("4.\tNoelle Silva\n");
printf("5.\tGordon Agrippa\n");
printf("6.\tLuck Voltia\n");
printf("7.\tMagna Swing\n");
printf("8.\tZora Ideale\n");
printf("9.\tJulius Novachrono\n");
printf("10.\tLicht\n");
break;
           }
           if(strcmp(V,"Demon_Slayer")==0){
            printf("Demon Slayer characters : \n");
             
 
 
 printf("1.\tTanjiro Kamado");
 printf("2.\tNezuko Kamado");
 printf("3.\tZenitsu Agatsuma\n");
 printf("4.\tInosuke Hashibira\n");
 printf("5.\tKanao Tsuyuri\n");
 printf("6.\tUrokodaki Sakonji\n");
 printf("7.\tGiyu Tomioka\n");
 printf("8.\tShinobu Kocho\n");
 printf("9.\tMitsuri Kanroji\n");
 printf("10.\tKanao Tsuyuri\n");
 printf("11.\tMuzan Kibutsuji\n");
 break;

           }
           if(strcat(V,"Monster")==0){
            printf("1.\tDr. Kenzo Tenma\n");
            
 printf("2.\tLiebert\n");
printf("3.\tNina Fortner (Anna Liebert)");
printf("4.\tInspector Lunge\n");
printf("5.\tDetective Schuwald \n");
printf("6.\tEva Heinemann \n");
printf("7.\tRichard Brown \n");
printf("8.\tJohann's Parents (The Liebert Family)\n");
printf("9.\tWilhelm Tenma \n");
printf("10.\tWolfgang Grimmer \n");
break;
           }


         
    }
    
    
    
    
    
    
    
}

void Affichage(){
    int Z;
    printf("1. Show movies names\n");
    printf("2. show Animes names\n");
    printf("3. show series names\n");
   printf("select service number : ");
   scanf("%d",&Z);
   switch(Z){
   case 1:
    printf("\t******* Movies **********\n");
   for(i=0;i<30;i++){
        
       printf("\t\t%s\n",Movies[i]);
   }
   break;
   case 2:
   printf("\t******* Animes **********\n");
     for(i=0;i<30;i++){
           
       printf("\t\t%s\n",Anime[i]);
   }
   break;
   case 3:
    printf("\t******* Series **********\n");
     for(i=0;i<30;i++){
        
       printf("\t\t%s\n",Series[i]);
         }
    }
}




int main()
{
    while(1){
    int L, P;
    printf("\n******Welcome to your little Cinema******\n");
    printf("1. Add service\n");
    printf("2. Information service\n");
    printf("3. Affichage\n");
    
    printf("select service number : ");
    scanf("%d", &L);
    switch (L)
    {
    case 1:
        Add();
        break;
    case 2:
        printf("1.\tMovie info\n");
        printf("2.\tAnime info\n");
        printf("3.\tSerie info\n");
        printf("select service number : ");
        scanf("%d", &P);
        switch (P)
        {
        case 1:
            Movies_info();
            break;

            case 2:
            Anime_info();
            break;

            // case 3:
            // Serie_info();
       
        }
        break;  
        
        
        case 3:
       Affichage();
    }
    }

    return 0;
}