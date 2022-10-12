#include <stdio.h>
#include <stdlib.h>
#include "Game.c"
#include "Exit.c"

void see(){
    int option;
    int next;
    if (ngonngu == 2){
        printf ("Welcome to Tic-tac-toe.\n");
    } else {
        printf("Chao mung den voi Tic-tac-toe.\n");
    }
    do{menu: if(ngonngu == 2){
        printf("Menu:\n");
        printf("1.Play\n");
        printf("2.History\n");
        printf("3.Settings\n");
        printf("4.Quit\n");
        printf("Please enter your choice: ");
    } else {
        printf("Menu:\n");
        printf("1.Choi\n");
        printf("2.Lich su\n");
        printf("3.Cai dat\n");
        printf("4.Thoat\n");
        printf("Hay nhap lua chon cua ban: ");
    }
    scanf ("%i",&option);
    system("cls");
    switch(option){
        case 1:
        name();
        do{
            char character[9] = {'1','2','3','4','5','6','7','8','9'};
            display(character);
            play(character,1);
            fclose(filePointer);
            do{
                if(ngonngu == 2){
                    printf("What do you want to do next?\n 1.Continue playing\n 2.Return to menu\n");
                } else {
                    printf("Ban muon lam gi tiep theo?\n 1.Choi tiep\n 2.Tro ve Menu\n");
                }
            * resultPointer = 0;
            scanf("%i",&next);
            system("cls");
            if(next == 1){
            } else if (next == 2){
                goto menu;
            } else {
                if(ngonngu == 2){
                    printf("Invalid number. Please type again.\n");
                } else {
                    printf("So khong hop le. Vui long nhap lai\n");
                }
            }
            } while (next != 1 && next != 2);
        } while (next == 1);
            break;
        case 2: 
            History();
            goto menu;
            break;
        case 3: 
            Settings();
            goto menu;
            break;
        case 4:
            getout();
        default:
        printf("Invalid number. Please type again.\n");
        break;
    }
    } while (option !=1 && option !=2 && option != 3 && option !=4);
}
