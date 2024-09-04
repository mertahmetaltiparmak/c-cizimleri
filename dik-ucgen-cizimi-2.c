#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, sharp = 0;

    printf("Enter a number:");
    scanf("%d", &sharp);
    printf("\n");

    for(i = 1; i <= sharp; i++){

    for(j = 1; j <= i; j++){

    printf("%d", j);

    }

    printf("\n");

    }

    for(i = 1; i <= sharp; i++){

    for(j = 1; j <= sharp - i; j++){

    printf("%d", j);

    }

    printf("\n");

    }
    
    return 0;
    
}

