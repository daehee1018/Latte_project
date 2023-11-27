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
                printf("score.txt error ");
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
    
      
 


    _setmode(_fileno(stdout), _O_TEXT);
    printf("\n");
    printf("\n");
    printf("                        고양이를 생성을 원한다면 1을 눌러주세요\n");
    printf("                    메인화면으로 이동하기를 원한다면 2을 눌러주세요\n");
    


	scanf("%d", &test);

    if (test == 1)
    {
        system("cls"); choice_cat();
    }
    else if (test == 2)
    {
        system("cls"); title();
    }
	
    
    system("mode con cols=100 lines=32 ");
	



    return 0;

}