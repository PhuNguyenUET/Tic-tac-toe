#include <stdio.h>
#include <stdlib.h>
#include "History.c"

int Settings () {
    int show;
    if(ngonngu == 2){
        printf ("Please enter your choice: \n 1, Select language.\n 2, Select time limit.\n");
    } else {
        printf ("Hay nhap lua chon cua ban: \n 1, Chon ngon ngu.\n 2, Chon gioi han thoi gian.\n");
    }
    scanf("%i",&show);
    system("cls");
    switch (show){
        case 1:
            language();     
        case 2:

    }
}