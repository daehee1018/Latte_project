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
            FILE* filePointer = _wfopen(L"CAT.txt", L"w, ccs=UTF-8");
            if (filePointer == NULL) {
                printf("������ �� �� �����ϴ�. �ʱ�ȭ ����.\n");
            }
            else {
                printf("����̰� �ʱ�ȭ�Ǿ����ϴ�.\n");
                fclose(filePointer);
            }
        }
        else {
            printf("����� �ʱ�ȭ�� ����߽��ϴ�.\n");
            system("cls");
            title();
        }

        printf("�ƹ� Ű�� ���� ����� �������� ���ư���\n");
        _getch();
        system("cls");
        choice_cat();
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
        printf("���� ���� �� : %d��\n", currentSnack);
        printf("������ �ʱ�ȭ �Ͻðڽ��ϱ�? (Y/N):  ");
        scanf("  %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            FILE* file = fopen("score.txt", "w");
            currentSnack = currentSnack * 0;
            fseek(file, 0, SEEK_SET); // ���� ������ ��ġ�� ������ �������� �̵�
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("������ �ʱ�ȭ�Ǿ����ϴ�.\n");
        }

        else {
           }
        printf("�ƹ� Ű�� ���� ����ȭ������ ���ư���\n");
        _getch();
        system("cls");  title();
    }
}
void choice(){
int start_num;
    system("mode con cols=150 lines=55 ");
    printf("                                       ��������������������������������������������������������������������������\n");
    printf("                                       ��              �ʱ�ȭ               ��\n");
    printf("                                       ��                                   ��\n");
    printf("                                       ��         1. ����� �ʱ�ȭ          ��\n");
    printf("                                       ��         2. ���� �ʱ�ȭ            ��\n");
    printf("                                       ����������������������-������������������������������-������������������\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������-������������������������������-��������������������\n");
    printf("                                           ��  ���ϴ� �޴��� �����ϼ���  ��    ");
    scanf("%d", &start_num);
    if (start_num == 1) { system("cls"); choice_newcat(); }
    else if (start_num == 2) { system("cls"); choice_snack(); }
    }

      
