#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sharp = 0;

    printf("Enter the number of shades:");
    scanf("%d", &sharp);
    printf("\n");

    // dik ucgen cizimi

    for(i = 1; i <= sharp; i++){

    for(j = 1; j <= i; j++){

    printf("#");

    }

    printf("\n");

    }

    //ters dik ucgen cizimi

    for(i = 1; i <= sharp; i++){

    for(j = sharp; j >= i; j--){

    printf("#");

    }

    printf("\n");

    }



    return 0;
}
