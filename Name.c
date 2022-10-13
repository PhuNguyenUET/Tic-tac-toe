#include <stdio.h>
#include <stdlib.h>

char player1[100];
char player2[100];

char name () {
    if(ngonngu == 2){
        printf("Player 1 please enter your name:\n");
    } else {
        printf("Moi nguoi choi 1 nhap ten: ");
    }
    scanf("%s",player1);
    system("cls");
    if(ngonngu == 2){
        printf("Hello %s\n",player1);
    } else {
        printf("Xin chao %s\n", player1);
    }
    if(ngonngu == 2){
        printf("Player 2 please enter your name:\n");
    } else {
        printf("Moi nguoi choi 2 nhap ten: ");
    }
    scanf("%s",player2);
    system("cls");
    if(ngonngu == 2){
        printf("Hello %s\n",player2);
    } else {
        printf("Xin chao %s\n", player2);
}
}