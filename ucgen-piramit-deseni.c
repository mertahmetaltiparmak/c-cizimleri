#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, number;

    //sirasiyle ucgen bir,iki diye gidiyor

    printf("Enter a number value:");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){

    for(j = 1; j <= number - i; j++){

    printf(" ");

    }

    // altaki forda (j = 1; j <= i * 2 - 1; j++) olsaydi 1 , 3 , 5 diye olurdu

    for(j = 1; j <= i; j++){

    printf("* ");

    }

    printf("\n");

    }

    return 0;
}
