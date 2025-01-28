//challenge 01 /les tableux
#include <stdio.h>
#include <math.h>
int main() {
    int i;
    int arry[]={2,3,4,1,2,3,4,5,9}; 
        int size=sizeof(arry)/sizeof(arry[0]) ;
    

    for(i=0;i<size;i++) {
 
    printf("%d\n",arry[i]);
    }
    return 0;
}