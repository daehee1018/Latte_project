﻿#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <locale.h> 
#include <io.h>
#include <fcntl.h>

    int main() {
        FILE* file = fopen("score.txt", "r");
   
        if (file == NULL) {
            FILE* File = fopen("score.txt", "w");
            if (File != NULL) {
                fprintf(File, "%d", 0); 
                fclose(File);
            }
            else {
                printf("error ");
                return 1;
            }
        }
        else {
            fclose(file);
        }
	int test;



	setlocale(LC_CTYPE, ""); 
    _setmode(_fileno(stdout), _O_U16TEXT); // Call this before writing anything
    wprintf(L"\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣴⣶⣄⠀⣰⣾⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⢀⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"      ⠀ ⠀⠀⠀⣴⣶⣶⣶⣶⣶⣶⣶⠆⢀⣴⣾⣿⣿⣦⢠⣿⣿⣤⠀⣰⣶⣿⣷⡄⢀⣿⣿⠀⢀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⣸⠋⠙⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⡿⠀⣼⣿⡇⢠⣿⡿⢸⣿⣟⡋⣸⣿⠏⢸⣿⡇⢸⣿⡇⠀⢸⣿⣿⣶⣶⣶⣶⣶⡆⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⣰⠇⠀⠀⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"     ⠀⠀⠀⠀⠀⠀⠀⢸⣿⡏⠀⣸⣿⡇⠀⠘⠿⣿⣿⠟⠁⣿⣿⠛⢃⣿⣿⠀⣸⣿⠇⣿⣿⠁⢰⣶⣶⣶⣶⣶⣶⣶⣶⡆⠀⠀⠀⠀⠀⠈⠛⠿⣿⠟⠁⠀⠀⠀⢰⡏⠀⠀⠀⠀⠈⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⣼⣿⠇⠀⠛⠛⠀⠀⣴⣾⡿⠿⠿⣿⣷⡆⠀ ⢸⣿⡇⢠⣿⡟⢰⣿⡟⠀⢨⣿⡏⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⡾⠃⠀⠀⠀⠀⠀⠘⠛⠉⠛⠻⢷⣦⡀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⠁⠘⣿⣿⣶⣶⣶⣾⡿⠃⠀ ⠈⠿⣿⠿⠟⠁⣼⣿⠇⠀⣼⣿⣷⣶⣶⣶⣶⣶⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡶⠟⠉⠀⠀⠀⠀⠀⠀⣀⣤⣴⡶⢶⣦⣄⠀⠈⠛⢷⣄⠀⠀⠀⠀⠀\n");
    wprintf(L"   ⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣴⣶⣎⣉⣉⠉⠀⣤⣤⣤⣤⣤⣤⣤⣤⠀⢀⣤⣤⣤⣬⣭⢩⣭⡭⠉⠉⠁⠀⠀⠀⠀⢀⣀⣀⣀⣀⣴⠟⠁⠀⠀⠀⠀⠀⠀⠀⢠⡾⢋⣤⠶⠒⢦⡀⠙⣿⡄⠀⠀⠙⣷⡀⠀⠀⠀\n");
    wprintf(L"   ⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⠿⠿⢿⣿⣿⠿⠿⠟⠀⢀⣉⣉⣉⣉⣉⣹⣿⡟⠀⠈⠉⠉⢹⣿⡏⣸⣿⡇⠀⠀⠀⠀⣶⠟⠛⠛⠛⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⢱⣿⣿⣶⣶⣿⣿⡆⠘⣿⠀⠀⠀⠈⢿⡄⠀⠀\n");
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣾⡿⠿⣿⣷⣶⡄⠀⣸⣿⡟⠛⠛⠛⠛⠛⠃⠀⠀⠀⢀⣾⣿⢁⣿⣿⣶⠆⠀⠀⠀⢹⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢆⠘⣿⣿⣿⣿⣿⣿⠇⣰⡿⠀⠀⠀⠀⠈⢿⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣭⣭⣤⣤⣤⣤⣭⣭⡅⠀⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⣠⣾⡿⠃⢸⣿⡏⠉⠀⠀⠀ ⠀⠀⢿⣄⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠸⣆⡘⠻⠿⠿⠛⣡⣾⠟⠁⠀⠀⠀⠀⠀⠈⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢉⣿⡿⠉⢹⣿⡏⠉⠁⣶⣶⣶⣶⣶⣶⣶⣶⣶⠀⣶⣿⠿⠋⠀⠀⣾⣿⠃⠀⠀ ⠀⠀⠀⠀⠈⢿⣆⠀⠀⣠⡾⢛⡉⠉⠛⢷⣄⠀⠀⠀⠀⠀⠈⠙⠻⠶⠾⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣸⡛⢣⣤⡟⠛⣁⣀⣀⣉⣉⣉⣉⣉⡉⠉⠉⢁⣤⡁⠀⠀⣠⣤⠀⢛⣛⣀⣀⣀⣀⢀⣤⡄⠀ ⢨⡇⠀⢰⡏⣴⣧⣠⣴⣷⡌⣿⡆⠀⠀⣀⠀⠀⢀⣤⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢀⣿⡿⠛⣿⣿⣥⣿⣿⠁⠀⠻⠿⠿⠿⠿⢿⣿⣿⠀⠀⠀⣾⣿⡇⠀⢠⣿⡿⠀⢸⣿⡟⠛⠛⠋⣸⣿⡇⠀ ⢸⡇⠀⣿⠀⣿⣿⣿⣿⣿⡇⣿⡇⠀⢠⣿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢸⣿⣧⣤⣿⡟⢻⣿⡏⠀⠀⠀⢠⣤⡄⠀⢸⣿⡇⢀⣤⣾⣿⣿⣷⡄⣸⣿⡇⠀⣿⣿⠁⠀⠀⠀⣿⣿⣤⠄ ⢸⡇⠀⢻⡄⢿⣿⣿⣿⡿⣹⡿⠁⢀⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢛⣛⣛⣛⣛⣃⣾⣿⠃⠀⠀⠀⣸⣿⡇⢀⣿⣿⠁⠘⣻⣭⣤⣭⣽⣧⣿⣿⠀⢸⣿⡏⠀⠀⠀⢸⣿⡟⠛⠀ ⠀⣧⠀⠈⠻⣮⣍⣩⣥⣾⠟⠁⠘⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⢻⣿⡿⠀⣠⣤⣤⣿⣿⣤⣬⣭⣥⠀⠀⣛⣿⣿⣛⣻⣿⣟⠃⠀⣼⣿⣧⣤⣤⣤⣾⣿⠃⠀⠀ ⠀⠸⡆⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠿⠇⠀⠛⠛⠛⠛⠛⠛⠛⠛⠛⠀⠸⠿⠿⠿⠿⠿⠿⠿⠃⠀⠉⠉⠉⠉⠉⠹⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    
      
 


    _setmode(_fileno(stdout), _O_TEXT);\
        while (1) {
    printf("\n");
    printf("\n");
    printf("                        고양이 생성을 원한다면 1을 눌러주세요\n");
    printf("                    메인화면으로 이동하기를 원한다면 2을 눌러주세요\n");
        scanf("%d", &test);



        if (test == 1) {
            system("cls");
            choice_cat();
            break; // 올바른 입력을 받았으므로 루프를 종료합니다.
        }
        else if (test == 2) {
            system("cls");
            title();
            break; // 올바른 입력을 받았으므로 루프를 종료합니다.
        }
        else {
            // 잘못된 입력 처리
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            // 여기서 루프를 계속합니다.


        }

    }
    
    system("mode con cols=100 lines=32 ");
	



    return 0;

}