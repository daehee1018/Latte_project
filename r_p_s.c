#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <locale.h>  // 로케일 설정을 위한 헤더 파일



// testing text...
// testing 2
// testing 3

int rock() {
    system("mode con cols=150 lines=55 ");
    int currentSnack = 0;
    int check_snack = 0;
    setlocale(LC_CTYPE, "");  // 로케일을 설정하여 유니코드 출력을 활성화
    // 파일에서 이전 점수 읽어오기
    FILE* file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &currentSnack);
        fclose(file);
    }
    else {
        printf(" 새로운 파일\n");
        // 파일을 열 수 없을 경우 기본 점수 0으로 설정
    }

    // 랜덤 시드 설정
    srand((unsigned)time(NULL));

    printf("가위바위보 게임이 시작됩니다.\n\n");
    printf("게임은 5라운드 까지 진행되고, 이기면 2점, 비기면 1점, 지면 0점을 얻습니다.\n\n");
    printf("1: 가위, 2: 바위, 3: 보\n\n");

    for (int round = 1; round <= 5; round++) {

        int playerChoice, computerChoice;




        // 플레이어의 선택 받기
        while (1) {

            printf("                                                    현재까지 획득한 간식 : % d개\n", currentSnack);
            printf("라운드 %d: 당신의 선택은? (1: 가위, 2: 바위, 3: 보)\n ", round);

            if (scanf_s("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3) {
                printf("잘못된 선택입니다. 1, 2, 3 중에서 선택하세요.\n");
                while (getchar() != '\n'); // 버퍼 비우기
            }
            else {
                break;  // 유효한 입력을 받으면 루프 종료
            }
        }



        // 컴퓨터의 선택 (랜덤)
        computerChoice = rand() % 3 + 1;

        // 게임 결과 출력
        printf("\n");
        printf("당신:\n");
        switch (playerChoice) {
        case 1:
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("   _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("       __________)\n");
            printf("      (____)\n");
            printf("---.__(___)\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;
        case 2:
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("    _______\n");
            printf("---'   ____)\n");
            printf("      (_____)       \n");
            printf("      (_____)       \n");
            printf("      (____)        \n");
            printf("---.__(___)         \n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;
        case 3:
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("    _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("          _______)\n");
            printf("         _______)\n");
            printf("---.__________)\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;

        }

        printf("\n컴퓨터:\n");
        switch (computerChoice) {

        case 1:
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("   _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("       __________)\n");
            printf("      (____)\n");
            printf("---.__(___)\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

            break;
        case 2:
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("    _______\n");
            printf("---'   ____)\n");
            printf("      (_____)       \n");
            printf("      (_____)       \n");
            printf("      (____)        \n");
            printf("---.__(___)         \n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;

        case 3:
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("    _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("          _______)\n");
            printf("         _______)\n");
            printf("---.__________)\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;

        }

        // 게임 결과 출력
        if (playerChoice == computerChoice) {
            printf(" \n");
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

            printf("비겼습니다! 츄르 +1\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

            currentSnack += 1;
            check_snack += 1;
        }


        else if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf(" \n");
            printf("승리!\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("당신이 이겼습니다! 츄르 +2\n");
            currentSnack += 2;
            check_snack += 2;
        }
        else {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf(" \n");
            printf("패배!\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("컴퓨터가 이겼습니다! 츄르 +0\n");

        }
        printf("아무 키나 눌러 다음으로 진행합니다.\n");
        printf("                                                    현재까지 획득한 간식 : % d개\n", currentSnack);
        _getch();
        system("cls");

    }

        // 새로운 점수를 파일에 저장하기
        file = fopen("score.txt", "w");
        if (file != NULL) {
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("\n게임 종료!  최종 간식 수 : %d\n", currentSnack);
            printf("총 획득한 츄르 : % d개\n", check_snack);
            printf("┏━━┓ \n");
            printf("┃━━┃ \n");
            printf("┃  ┃\n");
            printf("┃츄┃\n");
            printf("┃  ┃x %d\n", check_snack);
            printf("┃르┃\n");
            printf("┃  ┃\n");
            printf("┗━━┛\n");
            _getch();
            system("cls");
        }
        else {
            printf("파일을 열 수 없습니다. 점수를 저장할 수 없습니다.\n");
        }

        title();
        return 0;    }
