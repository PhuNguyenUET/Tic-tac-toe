#include <stdio.h>
#include <stdlib.h>
#include "LineCounter.c"

int showhistory () {
    FILE *filePointer;
    FILE *eternityPointer;
    eternityPointer = fopen ("Eternity.txt", "w");
    fclose(eternityPointer);
    filePointer = fopen("History.txt","r");
    eternityPointer = fopen ("Eternity.txt", "a");
    char c;
    char eternal[100]="This is testing.\n";
    a = 0;
    int lines = Lines();
        for (int i = 0; i < lines - 4; i++){
            fgets(eternal,100,filePointer);
        }
        fputs(eternal,eternityPointer);
        for (int i = 0; i < 4; i ++){
            fgets(eternal,100,filePointer);
            fputs(eternal,eternityPointer);
        }
    fclose(filePointer);
    fclose(eternityPointer);
}

