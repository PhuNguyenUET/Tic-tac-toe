#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Data.c"
#include "Settings.c"
#include "Name.c"

void display(char sym[9]);
void check(char ch, char sym[9], char playerwin[100], char playerlose[100]);
int result;
int* resultPointer = &result;

void play (char sym[9], int count) {
    char choice[1];
    char c;
    int value;
    int test = 0;
    struct Data info;
    temporaryPointer = fopen("Temporary.txt","w");
    filePointer = fopen("History.txt","a");
    while(count < 10) {
        if (count%2 == 0) {
            if(ngonngu == 1){
                printf ("Moi %s nhap lua chon: ", player2);
            } else {
                printf ("%s please enter your choice: ", player2);
            }
        } else {
            if (ngonngu == 1) {
                printf ("Moi %s nhap lua chon: ", player1);
            } else {
                printf ("%s please enter your choice: ",player1);
            }
        }
        scanf ("%i", &value);
        getchar();
        system("cls");
        itoa(value, choice, 10);
        if (value <= 9 && value > 0) {
            for(int i = 0; i < 9;i ++) {
                char* pointer = &sym[i];
                if(count%2 == 0) {
                    info.ch = 'O';
                } else {
                    info.ch = 'X';
                }
                if (sym[i] == choice[0]) {
                    *pointer = info.ch;
                    test = 1;
                    break;
                } else {
                    test = 0;
                }
            }
            system("cls");
            if (test == 0){
                if(ngonngu == 2){
                    printf("This square has already been taken.\n");
                } else {
                    printf("O nay da duoc chon roi.\n");
                }
                count--;
            }
        } else {
            if (ngonngu == 2){
                printf ("Invalid number\n");
            } else {
                printf ("So khong hop le\n");
            }
            count --;
        }
        count ++;
        display(sym);
        check('X', sym, player1, player2);
        check('O', sym, player2, player1);
        if(result == 1){
            count = 10;
            goto result;
        }
    }
    if(ngonngu == 2){
        printf("It's a draw!\n");
        fprintf(filePointer,"It's a draw!\n");
    } else {
        printf("Ket qua cua van dau nay la hoa!\n");
        fprintf(filePointer, "Ket qua cua van dau nay la hoa giua %s va %s!\n",player1, player2);
    }
    result: if (ngonngu == 2){
        printf("Congratulations.\n");
    } else {
        printf("Xin chuc mung.\n");
    }
    if (ngonngu == 2) {
        printf("Press Enter to continue.");
        getchar();
        system("cls");
    } else {
        printf("Bam Enter de thoat.");
        getchar();
        system("cls");
    }
}

void check(char ch, char sym[9], char playerwin[100], char playerlose[100]){
    int i;
    for(i=0; i<9; i+=3){
        if(sym[i] == ch && sym[i+1] == ch && sym[i+2] == ch){
            if (ngonngu == 2){
                printf("The winner is %s\n", playerwin);
                fprintf(filePointer, "%s wins against %s\n", playerwin, playerlose);
            } else {
                printf("Nguoi thang cuoc la %s\n", playerwin);
                fprintf(filePointer,"%s thang %s\n", playerwin, playerlose);
            }
            *resultPointer=1;
            break;
        }
    }
    for(i=0; i<3; i++){
        if(sym[i] == ch && sym[i+3] == ch && sym[i+6] == ch){
            if (ngonngu == 2){
                printf("The winner is %s\n", playerwin);
                fprintf(filePointer, "%s wins against %s\n", playerwin, playerlose);
            } else {
                printf("Nguoi thang cuoc la %s\n", playerwin);
                fprintf(filePointer,"%s thang %s\n", playerwin, playerlose);
            }
            *resultPointer=1;
            break;
        }
    }
    if(sym[0] == ch && sym[4] == ch && sym[8] == ch){
            if (ngonngu == 2){
                printf("The winner is %s\n", playerwin);
                fprintf(filePointer, "%s wins against %s\n", playerwin, playerlose);
            } else {
                printf("Nguoi thang cuoc la %s\n", playerwin);
                fprintf(filePointer,"%s thang %s\n", playerwin, playerlose);
            }
        *resultPointer=1;
    }
    if(sym[2] == ch && sym[4] == ch && sym[6] == ch){
            if (ngonngu == 2){
                printf("The winner is %s\n", playerwin);
                fprintf(filePointer, "%s wins against %s\n", playerwin, playerlose);
            } else {
                printf("Nguoi thang cuoc la n%s\n", playerwin);
                fprintf(filePointer,"%s thang %s\n", playerwin, playerlose);
            }
        *resultPointer=1;
    }
}

void display (char sym[9]) {
    printf ("    Tic Tac Toe    \n");
    if (ngonngu == 2){
        printf ("%s's symbol is X\n",player1);
    } else {
        printf ("Ky hieu cua %s la X\n", player1);
    }
    if (ngonngu == 2){
        printf ("%s's symbol is O\n",player2);
    } else {
        printf ("Ky hieu cua %s la O\n",player2);
    }
    printf ("  %c  |  %c  |  %c  \n", sym[0],sym[1],sym[2]);
    printf ("-----|-----|-----\n");
    printf ("  %c  |  %c  |  %c  \n", sym[3],sym[4],sym[5]);
    printf ("-----|-----|-----\n");    
    printf ("  %c  |  %c  |  %c  \n", sym[6],sym[7],sym[8]);
    printf ("-----|-----|-----\n");
}
