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

    gotoxy(25, 15);
    printf("    ������ �������� �̸��� �����ּ���:    ");

	

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
    printf("                   �١ڡ١� %s ���δ� ȯ���մϴ�!�ڡ١ڡ�                     ", ID);
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