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
<<<<<<< HEAD

    gotoxy(25, 15);
    printf("    선택한 고양이의 이름을 지어주세요:    ");
=======
	system("mode con cols=100 lines=40 ");
	gotoxy(25, 15);
	printf("    선택한 고양이의 이름을 지어주세요:    ");
>>>>>>> 98e4b11818aa979d91180c881864f37f655ea1fe


    getchar();
    scanf("%s", ID);
    system("cls");

    gotoxy(12, 4);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 8);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 12);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 16);
    printf("                   ☆★☆★ %s 주인님 환영합니다!★☆★☆                     ", ID);
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