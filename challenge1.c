
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x ;
    printf("taper la valeur de x : ");
    scanf("%d",&x);
    if (x % 2 == 1){
        printf(" la valeur est un nombre impair");
    }
    else{
        printf(" la valeur est un nombre pair");
    }
    return 0;


}
