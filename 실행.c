#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <stdio.h>
#include <wchar.h>
#include <io.h>
#include <conio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <Windows.h>
#include <locale.h>

    void choice_newcat() {
        setlocale(LC_CTYPE, ""); // ����� �Լ� �ҷ�����
        setmode(_fileno(stdout), _O_U16TEXT);
        FILE* filePointer = _wfopen(L"CAT.txt", L"r+, ccs=UTF-8");
        wchar_t singleLine[100];
        char choice;

        if (filePointer == NULL) {
            wprintf(L"������ �� �� �����ϴ�.\n");
            system("cls");
            title();
            return;
        }

        // ���Ͽ��� �� �پ� �о����
        while (fgetws(singleLine, sizeof(singleLine) / sizeof(wchar_t), filePointer) != NULL) {
            wprintf(L"%s", singleLine); // �����ڵ� ���� ���
        }

        fclose(filePointer); // ���� �ݱ�
        _setmode(_fileno(stdout), _O_TEXT); // �ؽ�Ʈ ��� ���� ����

        printf("���� �����\n");
        printf("����̸� �ʱ�ȭ �Ͻðڽ��ϱ�? (Y/N):  ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            FILE* newFilePointer = _wfopen(L"CAT.txt", L"w, ccs=UTF-8");
            if (newFilePointer == NULL) {
                printf("������ �� �� �����ϴ�. �ʱ�ȭ ����.\n");
            }
            else {
                printf("����̰� �ʱ�ȭ�Ǿ����ϴ�.\n");
                fclose(newFilePointer);
            }
        }
        else {
            printf("����� �ʱ�ȭ�� ����߽��ϴ�.\n");
        }

        printf("�ƹ� Ű�� ���� ����ȭ������ ���ư���\n");
        _getch();
        system("cls");
        title();
    }



void choice_snack(){
 char choice;
    int currentSnack = 0;
    // ���Ͽ��� ���� ���� �о����
    FILE* file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &currentSnack);
        fclose(file);

        // ����ڿ��� ���� �ʱ�ȭ ���� ����
        printf("\t\t\t\t\t\t���� ���� �� : %d��\n", currentSnack);
        printf("������ �ʱ�ȭ �Ͻðڽ��ϱ�? (Y/N):  ");
        scanf("  %c", &choice);

        // ���� �ʱ�ȭ
        FILE* file = fopen("score.txt", "w");
        if (choice == 'Y' || choice == 'y') {
            currentSnack = currentSnack * 0;
            fseek(file, 0, SEEK_SET); // ���� ������ ��ġ�� ������ �������� �̵�
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("������ �ʱ�ȭ�Ǿ����ϴ�.\n");
        }

        else {
            printf("������ �� �� �����ϴ�. �ʱ�ȭ ����.\n");
        }
        printf("�ƹ� Ű�� ���� ����ȭ������ ���ư���\n");
        _getch();
        system("cls");  title();
    }
}
void choice(){
int start_num;
    system("mode con cols=100 lines=40 ");
    printf("---------------------------------------------\n");
    printf("|1. ����� �ʱ�ȭ                              |\n");
    printf("|2. ���� �ʱ�ȭ                                 |\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------------------------------------------\n");
    printf("\t �̵��� ȭ���� ���ڸ� �Է��ϼ���!\n");
    scanf_s("%d", &start_num);
    if (start_num == 1) { system("cls"); choice_newcat(); }
    else if (start_num == 2) { system("cls"); choice_snack(); }
    }

      
       