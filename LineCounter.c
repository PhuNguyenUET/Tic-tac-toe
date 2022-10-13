#include <stdio.h>
#include <stdlib.h>

int a = 0;
int Lines(){
    char c;
    FILE *filePointer;
    filePointer = fopen ("History.txt","r");
    for (c = getc(filePointer); c != EOF; c = getc(filePointer)) {
    if(c == '\n') {
        a++;
    }
    }
    return a;
}