#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "language.c"

FILE* filePointer;
FILE* temporaryPointer;
int History () {
    char str1[100],str2[100],str3[100],str4[100],str5[100];
    filePointer = fopen("History.txt","r");
    if(ngonngu == 2){
        printf("         History        \n");
        printf("This is the result of your 5 recent match.\n");
    } else {
        printf("          Lich su        \n");
        printf("Day la ket qua 5 tran gan nhat cua ban. \n");
    }
    fgets(str1,100,filePointer);
    fgets(str2,100,filePointer);
    fgets(str3,100,filePointer);
    fgets(str4,100,filePointer);
    fgets(str5,100,filePointer);
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
    printf("%s\n",str4);
    printf("%s\n",str5);
    fflush(stdin);
    if (ngonngu == 2) {
        printf("Press enter to return to Menu.\n");
        getchar();
    } else {
        printf("Nhan Enter de tro ve Menu.\n");
        getchar();
    }
    system("cls");
}