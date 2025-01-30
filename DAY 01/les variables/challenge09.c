
#include <stdio.h>
#include <math.h>
int main() {
    float X1,X2,Y2,Y1,Z1,Z2,D;
     printf("x1 = ");
     scanf("%f",&X1);
     printf("x2 = ");
     scanf("%f",&X2);
     printf("y1 =  ");
     scanf("%f",&Y1);
     printf("y2 = ");
     scanf("%f",&Y2);
     printf("z1 = ");
     scanf("%f",&Z1);
     printf("z2 = ");
     scanf("%f",&Z2);
     
     D = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2)+pow((Z2-Z1),2));
     
     printf("%2.f= √((%2.f-%2.f)² + (%2.f-%2.f)² + (%2.f-%2.f)²)",D,X2,X1,Y2,Y1,Z2,Z1);
     
     
      
     
      
      
   

    return 0;
}