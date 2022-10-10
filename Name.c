#include <stdio.h>
#include <stdlib.h>

char player1[100];
char player2[100];

char name () {
    printf("Player 1 please enter your name:\n");
    scanf("%s",player1);
    system("cls");
    printf("Hello %s\n",player1);
    printf("Player 2 please enter your name:\n");
    scanf("%s",player2);
    system("cls");
    printf("Hello %s\n", player2);
}