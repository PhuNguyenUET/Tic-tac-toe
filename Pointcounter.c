#include <stdio.h>
#include <stdlib.h>

int player1Point = 0, player2Point = 0;
int *player1PointCounter = &player1Point;
int *player2PointCounter = &player2Point;
int pointcounter (char player1[100],char player2[100]) {
    printf("%s %i vs %i %s\n", player1, player1Point, player2Point, player2);
}