#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, row, a = 0;
    char letter;

    printf("Please enter a letter:");
    scanf("%c", &letter);
    printf("\n");

    printf("Please enter the  number of row (odd number):");
    scanf("%d", &row);
    printf("\n");

    for(i = 0; i < row; i++){
        if(i <= row / 2)
            a++;
        else
            a--;
        for(j = 1; j < a; j++)
            printf(" ");

        printf("%c\n", letter);
    }
    return 0;
}
