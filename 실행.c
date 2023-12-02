#include <stdio.h>
#include <Windows.h>

void choice() {
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

        // 점수 초기화
        FILE* file = fopen("score.txt", "w");
        if (choice == 'Y' || choice == 'y') {
           currentSnack = currentSnack* 0; 
            fseek(file, 0, SEEK_SET); // 파일 포인터 위치를 파일의 시작으로 이동
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("점수가 초기화되었습니다.\n");
        }

        else {
            printf("파일을 열 수 없습니다. 초기화 실패.\n");
        }
        printf("아무 키나 눌러 메인화면으로 돌아가기\n");
        _getch();
        system("cls");  title();
    }
}
      
