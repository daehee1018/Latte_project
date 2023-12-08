#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <locale.h> 
#include <io.h>
#include <fcntl.h>




void setTextColor1(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

    int main() {
 
        
        system("mode con cols=150 lines=55 ");
        FILE* file = fopen("score.txt", "r");
   
        if (file == NULL) {
            FILE* file = fopen("score.txt", "w");
            if (file != NULL) {
                fprintf(file, "%d", 0); 
                fclose(file);
            }
            else {
                printf("error ");
                return 1;
            }
        }
        else {
            fclose(file);
        }
      
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
        FILE* filePointer = _wfopen(L"CAT.txt", L"r");
       
        if (filePointer == NULL) {
            FILE* filePointer = fopen("CAT.txt", "w");
            if (filePointer != NULL) {
                fprintf(filePointer, "%d", 0);
                fclose(filePointer);
            }
            else {
                printf(" error ");
             
            }
        }
        else {
            fclose(filePointer);
        }

        
    


	int test;



	setlocale(LC_CTYPE, ""); 
    _setmode(_fileno(stdout), _O_U16TEXT); // Call this before writing anything

    setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    wprintf(L"\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣴⣶⣄⠀⣰⣾⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠀⠀⢀⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    
    setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    wprintf(L"      ⠀ ⠀⠀⠀⣴⣶⣶⣶⣶⣶⣶⣶⠆⢀⣴⣾⣿⣿⣦⢠⣿⣿⣤⠀⣰⣶⣿⣷⡄⢀⣿⣿⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⢀⣿⣿⠀⠀⠀⠀");setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);wprintf(L"⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⣸⠋⠙⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    wprintf(L"    ⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⡿⠀⣼⣿⡇⢠⣿⡿⢸⣿⣟⡋⣸⣿⠏⢸⣿⡇⢸⣿⡇⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⢸⣿⣿⣶⣶⣶⣶⣶⡆");setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);wprintf(L"⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⣰⠇⠀⠀⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    wprintf(L"     ⠀⠀⠀⠀⠀⠀⠀⢸⣿⡏⠀⣸⣿⡇⠀⠘⠿⣿⣿⠟⠁⣿⣿⠛⢃⣿⣿⠀⣸⣿⠇⣿⣿⠁");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⢰⣶⣶⣶⣶⣶⣶⣶⣶⡆");setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);wprintf(L"⠀⠀⠀⠀⠀⠈⠛⠿⣿⠟⠁⠀⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠀⢰⡏⠀⠀⠀⠀⠈⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⣼⣿⠇⠀⠛⠛⠀⠀⣴⣾⡿⠿⠿⣿⣷⡆⠀ ⢸⣿⡇⢠⣿⡟⢰⣿⡟⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⢨⣿⡏⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⡾⠃⠀⠀⠀⠀⠀⠘⠛⠉⠛⠻⢷⣦⡀⠀⠀⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    wprintf(L"    ⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⠁⠘⣿⣿⣶⣶⣶⣾⡿⠃⠀ ⠈⠿⣿⠿⠟⠁⣼⣿⠇");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠀⣼⣿⣷⣶⣶⣶⣶⣶⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡶⠟⠉⠀⠀⠀⠀⠀⠀⣀⣤⣴⡶⢶⣦⣄⠀⠈⠛⢷⣄⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN  );
    wprintf(L"   ⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣴⣶⣎⣉⣉⠉⠀⣤⣤⣤⣤⣤⣤⣤⣤⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⢀⣤⣤⣤⣬⣭⢩⣭⡭⠉⠉⠁⠀⠀⠀⠀⢀⣀⣀⣀⣀⣴⠟⠁⠀⠀⠀⠀⠀⠀⠀⢠⡾⢋⣤⠶⠒⢦⡀⠙⣿⡄⠀⠀⠙⣷⡀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN  );
    wprintf(L"   ⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⠿⠿⢿⣿⣿⠿⠿⠟⠀⢀⣉⣉⣉⣉⣉⣹⣿⡟⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠈⠉⠉⢹⣿⡏⣸⣿⡇⠀⠀⠀⠀⣶⠟⠛⠛⠛⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⢱⣿⣿⣶⣶⣿⣿⡆⠘⣿⠀⠀⠀⠈⢿⡄⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN );
    wprintf(L"    ⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣾⡿⠿⣿⣷⣶⡄⠀⣸⣿⡟⠛⠛⠛⠛⠛⠃⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠀⠀⢀⣾⣿⢁⣿⣿⣶⠆⠀⠀⠀⢹⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢆⠘⣿⣿⣿⣿⣿⣿⠇⣰⡿⠀⠀⠀⠀⠈⢿⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN );
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣭⣭⣤⣤⣤⣤⣭⣭⡅⠀⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⠀⣠⣾⡿⠃⢸⣿⡏⠉⠀⠀⠀ ⠀⠀⢿⣄⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠸⣆⡘⠻⠿⠿⠛⣡⣾⠟⠁⠀⠀⠀⠀⠀⠈⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN );
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢉⣿⡿⠉⢹⣿⡏⠉⠁⣶⣶⣶⣶⣶⣶⣶⣶⣶⠀");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⣶⣿⠿⠋⠀⠀⣾⣿⠃⠀⠀ ⠀⠀⠀⠀⠈⢿⣆⠀⠀⣠⡾⢛⡉⠉⠛⢷⣄⠀⠀⠀⠀⠀⠈⠙⠻⠶⠾⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN );
    wprintf(L"    ⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣸⡛⢣⣤⡟⠛⣁⣀⣀⣉⣉⣉⣉⣉⡉⠉⠉⢁");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"⣤⡁⠀⠀⣠⣤⠀⢛⣛⣀⣀⣀⣀⢀⣤⡄⠀ ⢨⡇⠀⢰⡏⣴⣧⣠⣴⣷⡌⣿⡆⠀⠀⣀⠀⠀⢀⣤⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢀⣿⡿⠛⣿⣿⣥⣿⣿⠁⠀⠻⠿⠿⠿⠿⢿⣿⣿⠀⠀⠀⣾⣿⡇⠀⢠⣿⡿⠀⢸⣿⡟⠛⠛⠋⣸⣿⡇⠀ ⢸⡇⠀⣿⠀⣿⣿⣿⣿⣿⡇⣿⡇⠀⢠⣿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢸⣿⣧⣤⣿⡟⢻⣿⡏⠀⠀⠀⢠⣤⡄⠀⢸⣿⡇⢀⣤⣾⣿⣿⣷⡄⣸⣿⡇⠀⣿⣿⠁⠀⠀⠀⣿⣿⣤⠄ ⢸⡇⠀⢻⡄⢿⣿⣿⣿⡿⣹⡿⠁⢀⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⢛⣛⣛⣛⣛⣃⣾⣿⠃⠀⠀⠀⣸⣿⡇⢀⣿⣿⠁⠘⣻⣭⣤⣭⣽⣧⣿⣿⠀⢸⣿⡏⠀⠀⠀⢸⣿⡟⠛⠀ ⠀⣧⠀⠈⠻⣮⣍⣩⣥⣾⠟⠁⠘⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"    ⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⢻⣿⡿⠀⣠⣤⣤⣿⣿⣤⣬⣭⣥⠀⠀⣛⣿⣿⣛⣻⣿⣟⠃⠀⣼⣿⣧⣤⣤⣤⣾⣿⠃⠀⠀ ⠀⠸⡆⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    wprintf(L"     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠿⠇⠀⠛⠛⠛⠛⠛⠛⠛⠛⠛⠀⠸⠿⠿⠿⠿⠿⠿⠿⠃⠀⠉⠉⠉⠉⠉⠹⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

      
 


    _setmode(_fileno(stdout), _O_TEXT);
        while (1) {
    printf("\n");
    printf("\n");
    printf("                        고양이 생성을 원한다면");setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);wprintf(L" 1");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"을 눌러주세요\n");
    printf("                    메인화면으로 이동하기를 원한다면");setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);wprintf(L" 2");setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);wprintf(L"를 눌러주세요\n");
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
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
    
	



    return 0;

}