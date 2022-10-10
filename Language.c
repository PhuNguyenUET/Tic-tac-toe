#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int ngonngu = 2;

void language () {
    do{
        if (ngonngu == 2){    
            printf ("Please pick your language: \n Tieng Viet: 1 \n English: 2\n");
        } else {
            printf("Hay nhap lua chon cua ban:\n Tieng Viet: 1 \n English: 2\n");
        }
        scanf ("%i",&ngonngu);
        system("cls");
        if (ngonngu == 1){
            printf("Ngon ngu ban chon la Tieng Viet.\n");
        } else if (ngonngu == 2) {
            printf ("Your language is set to English.\n");
        } else {
            printf ("Invalid number, please try again.\n So khong hop le, vui long thu lai.\n");
        }
    } while (ngonngu != 1 && ngonngu != 2);
}