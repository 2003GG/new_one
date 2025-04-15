#include <stdio.h>
#include <string.h>

void Movies()
{
    int i;
char Movies[3][30] = {"John_Wick", "King_Kong", "Harry_Potter"};
char M[30];
int found = 0;
    int C;
    printf("What is the name of the movie you want: ");
    scanf("%s", M);
    printf("1 . Movie Summary\n");
    printf("2 . Movie Characters\n");
    printf("3 . Production date\n");
    printf("what id your choise : ");
    scanf("%d", &C);
    switch (C)
    {
        case 1:
            for (i = 0; i < 3; i++) {
        if (strcmp(M, Movies[i]) == 0) {
        
            printf("\n(%s) is available.\n", M);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("The movie %s is not available.\n", M);
    }

 
    if (strcmp(M, "John_Wick") == 0) {
        printf("Some information about %s:\n", M);
        printf("\t\tThe film blends action, revenge, and stylistic world-building, introducing audiences to the intricate, secretive world of assassins\n");
        
               printf("with the Continental Hotel acting as a central point of the story. John Wick became a sleeper hit, praised for its action choreography\n");
               printf("Keanu Reeves performance, and the unique atmosphere that was established, leading to the creation of sequels\n");
    }
    break;
    if(strcmp(M ,"King_Kong")==0){
        printf("A film crew travels to the mysterious Skull Island to make a movie. There, they discover giant creatures, including a massive gorilla named King Kong. The beautiful actress Ann Darrow is captured by a native tribe and offered as a sacrifice to Kong. The gorilla initially captures Ann but later forms a bond with her.\n");
        
    }
    break;
    if(strcmp(M,"Haryy_Potter")){
        printf("The Harry Potter series, written by J.K. Rowling, follows the life and adventures of a young wizard named Harry Potter. Harry, who is raised by his cruel aunt and uncle, discovers on his 11th birthday that he is a wizard and has been accepted into Hogwarts School of Witchcraft and Wizardry.\n");
        printf("Throughout the series, Harry learns about his true heritage, including the fact that his parents were murdered by the dark wizard Lord Voldemort when Harry was just a baby. Harry survived an attack from Voldemort, which left him with a lightning-shaped scar on his forehead.\n");
        
printf("At Hogwarts, Harry befriends Ron Weasley and Hermione Granger, and together they face numerous challenges, uncover dark secrets, and battle the forces of evil. Each book focuses on a school year and the growing threat from Voldemort, who seeks to regain full power and conquer the wizarding world.\n");


        printf("As Harry grows, he learns more about his connection to Voldemort, and the final books see Harry, Ron, and Hermione on a mission to find and destroy Voldemort's Horcruxes (objects containing pieces of his soul) in order to weaken and eventually defeat him.\n");
        
printf("The series culminates in the Battle of Hogwarts, where Harry confronts Voldemort one last time. With the help of his friends, allies, and the power of love, Harry is able to defeat Voldemort and bring peace to the wizarding world.\n");
        
    printf("The series is filled with themes of friendship, bravery, love, and the battle between good and evil, and it has become one of the most beloved and successful book franchises of all time.\n");    
        
        
        
    }
      break;
           case 2:
            for (i = 0; i < 3; i++)
            {
                if (strcmp(M, Movies[i]) == 0)
                {
                    printf("(%s) is available.\n", M);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("The movie %s is not available.\n", M);
            }

            if (strcmp(M, "John_Wick") == 0)
            {
                printf("the charters of %s : ", M);
                printf(" 1.\tJohn Wick (Keanu Reeves)\n");
                printf("2.\tViggo Tarasov (Michael Nyqvist)\n");
                printf("3.\tIosef Tarasov (Alfie Allen)\n");
                printf("4.\t Winston (Ian McShane)\n");
                printf("5.\t Charon (Lance Reddick)\n");
                printf(" 6.\tSantino D'Antonio (Riccardo Scamarcio)\n");
                printf(" 7.\tMarcus (Willem Dafoe)\n");
                printf("8.\tThe Bowery King (Laurence Fishburne)\n");
                printf("9.\t Zero (Mark Dacascos)\n");
                printf("10.\tSophia (Halle Berry)\n");
                printf("11.\tThe Adjudicator (Asia Kate Dillon)\n");
            }
            break;
            if (strcmp(M, "King_Kong") == 0)
            {
                printf("the charters of %s : ", M);
                printf("1.\tKing Kong");
                printf("2.\tAnn Darrow\n");
                printf("3.\tCarl Denham\n");
                printf("4.\tJack Driscoll\n");
                printf("5.\tCaptain Englehorn\n");
                printf("6.\tDr. Hayes\n");
                printf("7.\tKong's Natives (Skull Islanders)\n");
                printf("8. The Crew of the Venture\n");
            }
            break;
            if (strcmp(M, "Haryy_Potter"))
            {
                printf("the charters of %s : ", M);
                printf("the charters of %s : ", M);
                printf("1.\tHarry Potter (Daniel Radcliffe)");
                printf("2.\tHermione Granger (Emma Watson)\n");
                printf("3.\t Ron Weasley (Rupert Grint)\n");
                printf("4.\t Albus Dumbledore (Richard Harris/Michael Gambon)\n");
                printf("5.\tLord Voldemort (Ralph Fiennes)\n");
                printf("6.\tSeverus Snape (Alan Rickman)\n");
                printf("7.\tDraco Malfoy (Tom Felton)\n");
                printf("8.\tRubeus Hagrid (Robbie Coltrane)\n");
                printf("9.\tSirius Black (Gary Oldman)\n");
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
        Movies();
    }

    return 0;
}