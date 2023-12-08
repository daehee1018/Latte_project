#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <wchar.h>
#include <io.h>
#include <conio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <locale.h> 

void id()
{

    FILE* file2 = fopen("Catname.txt", "r");
    if (file2 == NULL) {
        FILE* file2 = fopen("Catname.txt", "w");
        if (file2 != NULL) {
            fprintf(file2, " %s", " ");
            fclose(file2);
        }
        else {
            printf("error");
        }
    }
    gotoxy(25, 15);
    printf("    선택한 고양이의 이름을 지어주세요:    ");
    char text[100]; // 최대 99글자까지 입력 받을 수 있는 문자열 배열
    scanf("%s", &text);
     file2 = fopen("Catname.txt", "w"); // 파일 열기 (쓰기 모드)
    if (file2 != NULL) {
        fprintf(file2, "%s", text); // 입력받은 텍스트 파일에 쓰기
        fclose(file2); // 파일 닫기
    }
    else {
        printf("파일을 열 수 없습니다.\n");
    }
    system("cls");


    gotoxy(12, 4);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 8);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 12);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 16);
    printf("                      ☆★☆★ %s 주인님 환영합니다!★☆★☆                     ", text);
    gotoxy(12, 20);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 24);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 28);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(25, 30);
    system("PAUSE");
    system("cls");

    system("cls"); title();

    return ID;

}