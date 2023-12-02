#include "head.h"
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void blackjack() {
    system("mode con cols=100 lines=40 ");
    wchar_t dealer_suit[3] = { L'\0', L'\0', L'\0' }; // 딜러 카드 무늬 초기화
    wchar_t player_suit[3] = { L'\0', L'\0', L'\0' }; // 플레이어 카드 무늬 초기화
    int currentSnack = 0;
    int bet_snack;
    int dealer[9], player[9];
    int sum_player, sum_dealer;
    int player_index, dealer_index;
    int stand_dealer = 0;
    int sel_menu, sel_game;
    int i;

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
     
    while (1)
    {
        system("cls");
        switch (1)
        {
        case 1:
            system("cls");
            printf("간식을 베팅 하세요 >    개 ");
            GotoXY(30, 0);
            printf("현재 보유 중인 간식 수 : %d", currentSnack);
            GotoXY(20, 0);
            scanf("%d", &bet_snack);
            if (bet_snack < 0 || bet_snack > currentSnack)
            {
                printf("베팅 오류\n");
                break;
            }
            system("cls");
            for (int i = 0; i < 9; i++)
            {
                dealer[i] = 0;
                player[i] = 0;
            }

            sum_player = 0;
            sum_dealer = 0;
            player_index = 2;
            dealer_index = 2;

            /*
            // 카드 뽑기
            srand((unsigned)time(NULL));
            printf("%lc,  %lc, %lc \n", player_suit[0], player_suit[1], player_suit[2]);
            printf("%lc,  %lc, %lc \n", dealer_suit[0], dealer_suit[1], dealer_suit[2]);
            wchar_t p_suits[8] = { L'\u2660', L'\u2666', L'\u2665', L'\u2663', L'\u2660', L'\u2666', L'\u2665', L'\u2663' };
            wchar_t d_suits[8] = { L'\u2660', L'\u2666', L'\u2665', L'\u2663', L'\u2660', L'\u2666', L'\u2665', L'\u2663' };
         // 카드 뽑기 로직 수정
            for (int i = 0; i < 3; i++) {  // i가 4보다 작을 때까지만 실행
                int index = rand() % 8;
                dealer_suit[i] = d_suits[index];
            }
            for (int i = 0; i < 3; i++) {  // i가 4보다 작을 때까지만 실행
                int index = rand() % 8;
                player_suit[i] = p_suits[index];
            }   
         */

            // 카드 뽑기
            srand((unsigned)time(NULL));
            wchar_t p_suits[8] = { L'\u2660',L'\u25C6', L'\u2665', L'\u2663', L'\u2660', L'\u25C6', L'\u2665', L'\u2663' };
            wchar_t d_suits[8] = { L'\u2660',L'\u25C6', L'\u2665', L'\u2663', L'\u2660', L'\u25C6', L'\u2665', L'\u2663' };
            // 카드 뽑기 로직 수정
            for (int i = 0; i < 3; i++) {
             
                int  index = rand() % 8;
               dealer_suit[i] = d_suits[index];
            }
            for (int i = 0; i < 3; i++) {
                int index;
                index = rand() % 8;
               player_suit[i] = p_suits[index];
            }

            dealer[1] = rand() % 13 + 1;
            dealer[2] = rand() % 13 + 1;
            player[1] = rand() % 13 + 1;
            player[2] = rand() % 13 + 1;

            if (dealer[1] > 10) dealer[1] = 10; // J, Q, K
            if (dealer[2] > 10) dealer[2] = 10;
            if (player[1] > 10) player[1] = 10;
            if (player[2] > 10) player[2] = 10;
         

            if (dealer[1] == 1 && dealer[2] == 1) { dealer[1] = 11; dealer[2] = 1; }  // 두장 모두 에이스
            else if (dealer[1] == 1) { dealer[1] = 11; }
            else if (dealer[2] == 1) { dealer[2] = 11; }
            else {}

            if (player[1] == 1 && player[2] == 1) { player[1] = 11; player[2] = 1; } // 두장 모두 에이스
            else if (player[1] == 1) { player[1] = 11; }
            else if (player[2] == 1) { player[2] = 11; }
            else {}

            sum_player = 0;
            sum_dealer = 0;
            sum_player = player[1] + player[2];
            sum_dealer = dealer[1] + dealer[2];

            if (sum_player == 21 && sum_dealer != 21)
            {
                printf("☆☆☆ 플레이어 블랙 잭 ☆☆☆\n");
                currentSnack = currentSnack + (bet_snack * 2);     // 베팅액 2배 +
                printf("현재 간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                printf("┏━━┓ \n");
                printf("┃━━┃ \n");
                printf("┃  ┃\n");
                printf("┃츄┃\n");
                printf("┃  ┃x %d\n", currentSnack);
                printf("┃르┃\n");
                printf("┃  ┃\n");
                printf("┗━━┛\n");
                file = fopen("score.txt", "w");
                if (file != NULL) {
                    fprintf(file, "%d", currentSnack);
                    fclose(file);
                }
                else {}
                printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                scanf("%d", &sel_menu);
                if (sel_menu == 1) {
                    blackjack();
                }
                else if (sel_menu == 2) {
                title();
            }
        }
        else if (sum_player != 21 && sum_dealer == 21)
        {
            printf("▽▽▽ 딜러 블랙 잭 ▽▽▽\n");
            currentSnack -= bet_snack;                           // 베팅액 
            printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack);
            printf("┏━━┓ \n");
            printf("┃━━┃ \n");
            printf("┃  ┃\n");
            printf("┃츄┃\n");
            printf("┃  ┃x %d\n", currentSnack);
            printf("┃르┃\n");
            printf("┃  ┃\n");
            printf("┗━━┛\n");
            file = fopen("score.txt", "w");
            if (file != NULL) {
                fprintf(file, "%d", currentSnack);
                fclose(file);
            }
            else {}
            printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
            scanf("%d", &sel_menu);
            if (sel_menu == 1) {
                blackjack();
            }
            else if (sel_menu == 2) {
                title();
            }
        }
        else if (sum_player == 21 && sum_dealer == 21)
        {
            printf("◎◎◎ 플레이어&딜러 블랙 잭 ◎◎◎\n");
            printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
            printf("┏━━┓ \n");
            printf("┃━━┃ \n");
            printf("┃  ┃\n");
            printf("┃츄┃\n");
            printf("┃  ┃x %d\n", currentSnack);
            printf("┃르┃\n");
            printf("┃  ┃\n");
            printf("┗━━┛\n");
            file = fopen("score.txt", "w");
            if (file != NULL) {
                fprintf(file, "%d", currentSnack);
                fclose(file);
            }
            else {}
            printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
            scanf("%d", &sel_menu);
            if (sel_menu == 1) {
                blackjack();
            }
            else if (sel_menu == 2) {
            title();
        }
        }
        else{}
        sum_player = 0;
        sum_dealer = 0;

        //초기 카드 출력
        if (dealer[1] > 10) dealer[1] = 10; // J, Q, K
        if (dealer[2] > 10) dealer[2] = 10;
        if (player[1] > 10) player[1] = 10;
        if (player[2] > 10) player[2] = 10;

        sum_player = player[1] + player[2];
        sum_dealer = dealer[1] + dealer[2];
        
        printf("[딜    러] 카드1:%2d  카드2: ?\n", dealer[1]);
        printf("┌─────────┐┌─────────┐\n");
        printf("│%lc       ││%lc       │\n", dealer_suit[0], dealer_suit[1]);
        printf("│         ││         │\n");
        printf("│         ││         │\n");
        printf("│         ││         │\n");
        printf("│    %2d   ││    ??   │\n", dealer[1]);
        printf("│         ││         │\n");
        printf("│         ││         │\n");
       printf("│       %lc││       %lc│\n", dealer_suit[0], dealer_suit[1]);
        printf("└─────────┘└─────────┘\n");
        printf("[플레이어] 카드1:%2d  카드2:%2d\n", player[1], player[2]);
        printf("┌─────────┐┌─────────┐\n");
        printf("│%lc       ││%lc       │\n", player_suit[0], player_suit[1]);
        printf("│         ││         │\n");
        printf("│         ││         │\n");
        printf("│         ││         │\n");
        printf("│    %2d   ││    %2d   │\n", player[1], player[2]);
        printf("│         ││         │\n");
        printf("│         ││         │\n");
        printf("│       %lc││       %lc│\n", player_suit[0], player_suit[1]);
        printf("└─────────┘└─────────┘\n");
        printf("[딜러:?? 플레이어:%2d]\n", sum_player);
      
        sel_game = 1;
        while (sel_game) {
            printf("==================================================================================================\n");
            printf("1.Hit 2.Stand\n");
            printf("선택하세요 > "); scanf("%d", &sel_game);
           
            switch (sel_game)
            {
            case 1:   // hit  
                player[++player_index] = rand() % 13 + 1;
                if (dealer[3] > 10) dealer[3] = 10;        // J, Q, K
                if (dealer[4] > 10) dealer[4] = 10;
                if (player[3] > 10) player[3] = 10;
                if (player[4] > 10) player[4] = 10;

                if (player[player_index] == 1)       // 에이스
                {
                    for (i = 1; i < player_index; i++) sum_player += player[i]; // 이전카드까지의 합
                    if (sum_player < 11) player[player_index] = 11;  // 이전카드까지의 합이 11미만
                    else    player[player_index] = 1;
                }
                sum_player = 0;
                for (i = 1; i <= player_index; i++) sum_player += player[i];  // 플레이어의 카드 합

                for (i = 1; i <= dealer_index; i++) sum_dealer += dealer[i];  // 딜러의 이전카드까지의 합
                if (sum_dealer > 21)         // 21을 초과하고 그중 에이스가 있는 경우 11을 1로 변경
                {
                    for (i = 1; i <= 8; i++)
                    {
                        if (dealer[i] == 11)
                        {
                            sum_dealer -= 10;
                            break;
                        }
                    }
                }





              
                sum_dealer = dealer[1] + dealer[2];
                if (sum_dealer < 17)  // 딜러의 이전카드까지의 합이 17미만인 경우 카드 하나 더
                {
                  
                
                    dealer[3] = rand() % 13 + 1;

                    sum_dealer = dealer[1]+dealer[2]+ dealer[3];
                    if (dealer[1] > 10) dealer[1] = 10; // J, Q, K
                    if (dealer[2] > 10) dealer[2] = 10;
                    if (dealer[3] > 10) dealer[3] = 10;
                    if (dealer[4] > 10) dealer[4] = 10;
                    
                   
                }

                else // 딜러 stand
                {
                    stand_dealer = 1;
                    sum_player = 0;
                    sum_dealer = 0;
                    for (i = 1; i <= dealer_index; i++) sum_dealer += dealer[i];
                    for (i = 1; i <= player_index; i++) sum_player += player[i];
                    system("cls");
                    printf("[딜    러] 카드1:%2d  카드2: %d \n", dealer[1], dealer[2]);
                    printf("┌─────────┐┌─────────┐\n");
                    printf("│%lc       ││%lc       │\n", dealer_suit[0], dealer_suit[1]);
                    printf("│         ││         │\n");
                    printf("│         ││         │\n");
                    printf("│         ││         │\n");
                    printf("│    %2d   ││    %2d   │\n", dealer[1], dealer[2]);
                    printf("│         ││         │\n");
                    printf("│         ││         │\n");
                    printf("│       %lc││       %lc│\n", dealer_suit[0], dealer_suit[1]);
                    printf("└─────────┘└─────────┘\n");
                    printf("[플레이어] 카드1:%2d  카드2:%2d  카드 3:%2d\n", player[1], player[2], player[3]);
                    printf("┌─────────┐┌─────────┐┌─────────┐\n");
                    printf("│%lc       ││%lc       ││%lc       │\n", player_suit[0], player_suit[1], player_suit[2]);
                    printf("│         ││         ││         │\n");
                    printf("│         ││         ││         │\n");
                    printf("│         ││         ││         │\n");
                    printf("│    %2d   ││    %2d   ││    %2d   │\n", player[1], player[2], player[3]);
                    printf("│         ││         ││         │\n");
                    printf("│         ││         ││         │\n");
                    printf("│       %lc││       %lc││       %lc│\n", player_suit[0], player_suit[1], player_suit[2]);
                    printf("└─────────┘└─────────┘└─────────┘\n");
                    printf("[딜러:%2d  플레이어:%2d]\n", sum_dealer, sum_player);
                    printf("딜러 stand\n");
                    if (sum_player > 21 && sum_dealer > 21)
                    {
                        printf("◎ 비겼습니다 ◎ (All bust)\n");
                        printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                    else if (sum_player > 21 && sum_dealer <= 21)
                    {
                        printf("▽ 졌습니다 ▽ (Player bust)\n");
                        currentSnack -= bet_snack;
                        printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                    else if (sum_player <= 21 && sum_dealer > 21)
                    {
                        printf("☆ 이겼습니다 ☆ (Dealer bust)\n");
                        currentSnack = currentSnack + (bet_snack * 2);
                        printf("현재 간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                    else if (sum_dealer > sum_player)
                    {
                        printf("▽ 졌습니다 ▽\n");
                        currentSnack -= bet_snack;
                        printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                    else if (sum_dealer < sum_player)
                    {
                        printf("☆ 이겼습니다 ☆\n");
                        currentSnack = currentSnack + (bet_snack * 2);
                        printf("현재  간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                    else
                    {
                        printf("◎ 비겼습니다 ◎\n");
                        printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                        printf("┏━━┓ \n");
                        printf("┃━━┃ \n");
                        printf("┃  ┃\n");
                        printf("┃츄┃\n");
                        printf("┃  ┃x %d\n", currentSnack);
                        printf("┃르┃\n");
                        printf("┃  ┃\n");
                        printf("┗━━┛\n");
                        file = fopen("score.txt", "w");
                        if (file != NULL) {
                            fprintf(file, "%d", currentSnack);
                            fclose(file);
                        }
                        else {}
                        printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                        scanf("%d", &sel_menu);
                        if (sel_menu == 1) {
                            blackjack();
                        }
                        else if (sel_menu == 2) {
                            title();
                        }
                    }
                }
                sum_dealer = dealer[1] + dealer[2] + dealer[3];
                system("cls");
                printf("[딜    러] 카드1:%2d  카드2: %2d  카드3 : %2d\n", dealer[1], dealer[2],dealer[3]);
                printf("┌─────────┐┌─────────┐┌─────────┐\n");
                printf("│%lc       ││%lc       ││%lc       │\n", dealer_suit[0], dealer_suit[1], dealer_suit[2]);
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│    %2d   ││    %2d   ││    %2d   │\n", dealer[1], dealer[2], dealer[3]);
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│       %lc││       %lc││       %lc│\n", dealer_suit[0], dealer_suit[1], dealer_suit[2]);
                printf("└─────────┘└─────────┘└─────────┘\n");
                printf("[플레이어] 카드1:%2d  카드2:%2d  카드 3:%2d\n", player[1], player[2], player[3]);
                printf("┌─────────┐┌─────────┐┌─────────┐\n");
                printf("│%lc       ││%lc       ││%lc       │\n", player_suit[0], player_suit[1], player_suit[2]);
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│    %2d   ││    %2d   ││    %2d   │\n", player[1], player[2], player[3]);
                printf("│         ││         ││         │\n");
                printf("│         ││         ││         │\n");
                printf("│       %lc││       %lc││       %lc│\n", player_suit[0], player_suit[1], player_suit[2]);
                printf("└─────────┘└─────────┘└─────────┘\n");
                printf("[딜러:%2d  플레이어:%2d]\n",sum_dealer, sum_player);
                
            
                if (sum_player > 21 && sum_dealer > 21)
                {
                    printf("◎ 비겼습니다 ◎ (All bust)\n");
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_player > 21 && sum_dealer <= 21)
                {
                    printf("▽ 졌습니다 ▽ (Player bust)\n");
                    currentSnack -= bet_snack;
                    printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_player <= 21 && sum_dealer > 21)
                {
                    printf("☆ 이겼습니다 ☆ (Dealer bust)\n");
                    currentSnack = currentSnack + (bet_snack * 2);
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_dealer > sum_player)
                {
                    printf("▽ 졌습니다 ▽\n");
                    currentSnack -= bet_snack;
                    printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_dealer < sum_player)
                {
                    printf("☆ 이겼습니다 ☆\n");
                    currentSnack = currentSnack + (bet_snack * 2);
                    printf("현재  간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else
                {
                    printf("◎ 비겼습니다 ◎\n");
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
          

            case 2:   // stand  
                sum_player = 0;
                sum_dealer = 0;
                for (i = 1; i <= dealer_index; i++) sum_dealer += dealer[i];
                for (i = 1; i <= player_index; i++) sum_player += player[i];

                if (sum_dealer > 21)                             // 21을 초과하고 그중 에이스가 있는 경우 11을 1로 변경
                {
                    for (i = 1; i <= 8; i++)
                    {
                        if (dealer[i] == 11)
                        {
                            sum_dealer -= 10;
                            break;
                        }
                    }
                }
                if (sum_player > 21)                            // 21을 초과하고 그중 에이스가 있는 경우 11을 1로 변경
                {
                    for (i = 1; i <= 8; i++)
                    {
                        if (player[i] == 11)
                        {
                            sum_player -= 10;
                            break;
                        }
                    }
                }
                system("cls");
                printf("[딜    러] 카드1:%2d  카드2: %2d\n", dealer[1], dealer[2]);
                printf("┌─────────┐┌─────────┐\n");
                printf("│%lc       ││%lc       │\n", dealer_suit[0], dealer_suit[1]);
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│    %2d   ││    %2d   │\n", dealer[1], dealer[2]);
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│       %lc││       %lc│\n", dealer_suit[0], dealer_suit[1]);
                printf("└─────────┘└─────────┘\n");
                printf("[플레이어] 카드1:%2d  카드2:%2d\n", player[1], player[2]);
                printf("┌─────────┐┌─────────┐\n");
                printf("│%lc       ││%lc       │\n", player_suit[0], player_suit[1]);
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│    %2d   ││    %2d   │\n", player[1], player[2]);
                printf("│         ││         │\n");
                printf("│         ││         │\n");
                printf("│       %lc││       %lc│\n", player_suit[0], player_suit[1]);
                printf("└─────────┘└─────────┘\n");
                printf("[딜러:%2d  플레이어:%2d]\n", sum_dealer, sum_player);

                if (sum_dealer > 21 && sum_player > 21)
                {
                    printf("◎ 비겼습니다 ◎ (All bust)\n");
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                    title();
                }
                }
                else if (sum_player > 21 && sum_dealer <= 21)
                {
                    printf("▽ 졌습니다 ▽ (Player bust)\n");
                    currentSnack -= bet_snack;

                    printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack );
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_player <= 21 && sum_dealer > 21)
                {
                    printf("☆ 이겼습니다 ☆ (Dealer bust)\n");
                    currentSnack = currentSnack+ (bet_snack * 2);
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else if (sum_dealer > sum_player)
                {
                    printf("▽ 졌습니다 ▽\n"); 
                    currentSnack -= bet_snack;
                    printf("현재 간식 수 : %d(-%d)\n", currentSnack, bet_snack );
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                     printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
            scanf("%d", &sel_menu);
            if (sel_menu == 1) {
                blackjack();
            }
            else if (sel_menu == 2) {
                title();
            }
                }
                else if (sum_dealer < sum_player)
                {
                    printf("☆ 이겼습니다 ☆\n");
                    currentSnack = currentSnack + (bet_snack * 2);         // 베팅액 만큼 추가
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, bet_snack * 2);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    file = fopen("score.txt", "w");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                else
                {
                    printf("◎ 비겼습니다 ◎\n");
                    printf("현재 간식 수 : %d(+%d)\n", currentSnack, 0);
                    printf("┏━━┓ \n");
                    printf("┃━━┃ \n");
                    printf("┃  ┃\n");
                    printf("┃츄┃\n");
                    printf("┃  ┃x %d\n", currentSnack);
                    printf("┃르┃\n");
                    printf("┃  ┃\n");
                    printf("┗━━┛\n");
                    if (file != NULL) {
                        fprintf(file, "%d", currentSnack);
                        fclose(file);
                    }
                    else {}
                    printf("계속 진행 [1], 메인화면으로 돌아가기[2]  >");
                    scanf("%d", &sel_menu);
                    if (sel_menu == 1) {
                        blackjack();
                    }
                    else if (sel_menu == 2) {
                        title();
                    }
                }
                
         
            default:
                break;
            }
            // stand일 경우 loop break
                if (stand_dealer == 1) // dealer stand일 경우 loop break;
                {
                    stand_dealer = 0;
                    break;
                }
            }
            break;
        case 2:
            printf("현재 간식 수 : %d\n", currentSnack);
            printf("┏━━┓ \n");
            printf("┃━━┃ \n");
            printf("┃  ┃\n");
            printf("┃츄┃\n");
            printf("┃  ┃x %d\n", currentSnack);
            printf("┃르┃\n");
            printf("┃  ┃\n");
            printf("┗━━┛\n");
            title();
        case 0:
            printf("다음 기회에…!!\n");
            title();
        default:
            break;
        }
        if (currentSnack == 0)
        {
            printf("보유 금액이 0 입니다. 다음 기회에…!!\n");
            system("pause"); title();
            break;
        }
        system("pause");
    }
}
void explain_blackjack() {
    printf("\t-플레이어는 카드를 받기 전에 베팅을 합니다\n.");
    printf("\t-최종 카드 합 비교시 21에 가까운 사람이 승리합니다.\n");
    printf("\t-에이스는 1점 또는 11점으로 계산할 수 있고, J, Q, K는 각각 10점입니다..\n");
    printf("\t-처음 2장의 카드 합이 21점이면 '블랙잭'으로,블랙잭 또는 승리 시 베팅액의 2배를 받습니다..\n");
    printf("\t-딜러가 '블랙잭'또는 패배 시, 플레이어는 베팅액을 잃습니다.\n");
    printf("\t-딜러와 플레이어가 모두 '블랙잭'이거나  무승부시 베팅액은 돌려받습니다.\n.");
    printf("\t-플레이어는 21점에 가까워지기 위해 카드를 추가로 받거나(최대 1번 ) 현재 카드로 멈출 수 있습니다.\n");
    printf("\t-딜러는 플레이어 이후에 카드를 추가할지 여부를 결정합니다.\n");
    printf("\t-딜러의 점수가 17 미만이면 1장의 카드를 더 뽑고(최대 1번), 17 이상이면 추가로 카드를 뽑지 않습니다.\n");
    printf("\t-21점을 초과하면 점수가 0점으로 처리됩니다.\n");

    printf("블랙잭으로 돌아가려면 아무 키나 입력해주세요");
    _getch();
    system("cls"); start_blackjack();
}
        
 
void start_blackjack() {
    int menu;
    printf("_____________________________________________________________\n");
    printf("|                    블랙잭 게임                            |\n");
    printf("|1. 게임 시작                                               |\n");
    printf("|2. 게임 설명                                               |\n");
    printf("|___________________________________________________________|\n");
    printf("번호 입력: ");
    scanf("%d", &menu);
    if (menu == 1) {
        system("cls");  blackjack();
    }
    else if (menu == 2) {
        system("cls"); explain_blackjack();
    }
}
/* printf("┏━━┓ \n");
    printf("┃━━┃ \n");
    printf("┃  ┃\n");
    printf("┃츄┃\n");
    printf("┃  ┃x %d\n", currentSnack);
    printf("┃르┃\n");
    printf("┃  ┃\n");
    printf("┗━━┛\n");
    // 새로운 점수를 파일에 저장하기
    file = fopen("score.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", currentSnack);
        fclose(file);
        printf("게임이 종료되었습니다. 최종 점수: %d\n", currentSnack);
    }
    else {
        printf("파일을 열 수 없습니다. 점수를 저장할 수 없습니다.\n");
    }*/