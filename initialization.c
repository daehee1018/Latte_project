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
        setlocale(LC_CTYPE, ""); // 고양이 함수 불러오기
        setmode(_fileno(stdout), _O_U16TEXT);
        FILE* filePointer = _wfopen(L"CAT.txt", L"r+, ccs=UTF-8");
        wchar_t singleLine[100];
        char choice;

        if (filePointer == NULL) {
            wprintf(L"파일을 열 수 없습니다.\n");
            system("cls");
            title();
            return;
        }

        // 파일에서 한 줄씩 읽어오기
        while (fgetws(singleLine, sizeof(singleLine) / sizeof(wchar_t), filePointer) != NULL) {
            wprintf(L"%s", singleLine); // 유니코드 문자 출력
        }

        fclose(filePointer); // 파일 닫기
        _setmode(_fileno(stdout), _O_TEXT); // 텍스트 출력 모드로 변경

        printf("현재 고양이\n");
        printf("고양이를 초기화 하시겠습니까? (Y/N):  ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            FILE* filePointer = _wfopen(L"CAT.txt", L"w, ccs=UTF-8");
            if (filePointer == NULL) {
                printf("파일을 열 수 없습니다. 초기화 실패.\n");
            }
            else {
                printf("고양이가 초기화되었습니다.\n");
                fclose(filePointer);
            }
        }
        else {
            printf("고양이 초기화를 취소했습니다.\n");
            system("cls");
            title();
        }

        printf("아무 키나 눌러 고양이 선택으로 돌아가기\n");
        _getch();
        system("cls");
        choice_cat();
    }



void choice_snack(){
 char choice;
    int currentSnack = 0;
    // 파일에서 이전 점수 읽어오기
    FILE* file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &currentSnack);
        fclose(file);

        // 사용자에게 점수 초기화 여부 묻기
        printf("현재 간식 수 : %d개\n", currentSnack);
        printf("점수를 초기화 하시겠습니까? (Y/N):  ");
        scanf("  %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            FILE* file = fopen("score.txt", "w");
            currentSnack = currentSnack * 0;
            fseek(file, 0, SEEK_SET); // 파일 포인터 위치를 파일의 시작으로 이동
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("점수가 초기화되었습니다.\n");
        }

        else {
           }
        printf("아무 키나 눌러 메인화면으로 돌아가기\n");
        _getch();
        system("cls");  title();
    }
}
void choice(){
int start_num;
    system("mode con cols=150 lines=55 ");
    printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                                       ┃              초기화               ┃\n");
    printf("                                       ┃                                   ┃\n");
    printf("                                       ┃         1. 고양이 초기화          ┃\n");
    printf("                                       ┃         2. 점수 초기화            ┃\n");
    printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━━━\n");
    printf("                                           ▲  원하는 메뉴를 선택하세요  ▲    ");
    scanf("%d", &start_num);
    if (start_num == 1) { system("cls"); choice_newcat(); }
    else if (start_num == 2) { system("cls"); choice_snack(); }
    }

      
