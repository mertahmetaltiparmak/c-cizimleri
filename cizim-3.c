#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sharp, option;

    printf("1 - artirma\n");
    printf("2 - azaltma\n");
    printf("\n");

    printf("yapmak istediginiz islemi secin:");
    scanf("%d", &option);
    printf("\n");

    printf("bir sayi girin:");
    scanf("%d", &sharp);
    printf("\n");

    if(option == 1){

    for(i = 1; i <= sharp; i++){

    for(j = 1; j <= i; j++){

    printf("#");

    }

    printf("\n");

    }

    }

    else if(option == 2){

    for(i = 1; i <= sharp; i++){

    for(j = sharp; j >= i; j--){

    printf("#");

    }

    printf("\n");

    }

    }

    else{

    printf("Gecersiz deger.\n");

    }

    return 0;
    
}
