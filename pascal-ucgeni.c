#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space, i, j, rows, number = 1;

    printf("Enter the number of rows:");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        for(space = 1; space <= rows - i; space++)
            printf("  ");
        for(j = 0; j <= i; j++) {
            if(j == 0 || i == 0)
                number = 1;
        else
            number = number * (i - j + 1) / j;

            printf("%4d", number);
        }
        printf("\n");
        }
    return 0;
}
