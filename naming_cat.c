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
    printf("    ������ ������� �̸��� �����ּ���:    ");
    char text[100]; // �ִ� 99���ڱ��� �Է� ���� �� �ִ� ���ڿ� �迭
    scanf("%s", &text);
     file2 = fopen("Catname.txt", "w"); // ���� ���� (���� ���)
    if (file2 != NULL) {
        fprintf(file2, "%s", text); // �Է¹��� �ؽ�Ʈ ���Ͽ� ����
        fclose(file2); // ���� �ݱ�
    }
    else {
        printf("������ �� �� �����ϴ�.\n");
    }
    system("cls");


    gotoxy(12, 4);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 8);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 12);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(12, 16);
    printf("                      �١ڡ١� %s ���δ� ȯ���մϴ�!�ڡ١ڡ�                     ", text);
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