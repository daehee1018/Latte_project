#include "head.h"
#include <locale.h>  // 로케일 설정을 위한 헤더 파일


int rock() {

    int playerScore = 0, computerScore = 0;

    // 랜덤 시드 설정
    srand(time(NULL));

    printf("가위바위보 게임이 시작됩니다.\n\n");
    printf("게임은 5라운드 까지 진행되고, 이기면 2점, 비기면 1점, 지면 0점을 얻습니다.\n\n");
    printf("1: 가위, 2: 바위, 3: 보\n\n");

    for (int round = 1; round <= 5; round++) {
        int playerChoice, computerChoice;



        // 플레이어의 선택 받기
        while (1) {
            printf("라운드 %d: 당신의 선택은? ", round);
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
            printf("   _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("       __________)\n");
            printf("      (____)\n");
            printf("---.__(___)\n");
            break;
        case 2:
            printf("    _______\n");
            printf("---'   ____)\n");
            printf("      (_____)       \n");
            printf("      (_____)       \n");
            printf("      (____)        \n");
            printf("---.__(___)         \n");
            break;
        case 3:
            printf("    _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("          _______)\n");
            printf("         _______)\n");
            printf("---.__________)\n");
            break;

        }

        printf("\n컴퓨터:\n");
        switch (computerChoice) {
        case 1:
            printf("   _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("       __________)\n");
            printf("      (____)\n");
            printf("---.__(___)\n");
            break;
        case 2:
            printf("    _______\n");
            printf("---'   ____)\n");
            printf("      (_____)       \n");
            printf("      (_____)       \n");
            printf("      (____)        \n");
            printf("---.__(___)         \n");
            break;
        case 3:
            printf("    _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("          _______)\n");
            printf("         _______)\n");
            printf("---.__________)\n");
            break;

        }

        // 게임 결과 출력
        if (playerChoice == computerChoice) {
            printf("비겼습니다!\n");
            playerScore += 1;
            computerScore += 1;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) {
            printf("당신이 이겼습니다!\n");
            playerScore += 2;
        }
        else {
            printf("컴퓨터가 이겼습니다!\n");
        }
    }



    setlocale(LC_CTYPE, "");  // 로케일을 설정하여 유니코드 출력을 활성화

    printf("\n게임 종료\n");
    printf("획득한 간식 : % d개\n", playerScore);
    printf("┏━━┓ \n");
    printf("┃━━┃ \n");
    printf("┃  ┃\n");
    printf("┃츄┃\n");
    printf("┃  ┃x %d\n", playerScore);
    printf("┃르┃\n");
    printf("┃  ┃\n");
    printf("┗━━┛\n");
    return 0;
}
