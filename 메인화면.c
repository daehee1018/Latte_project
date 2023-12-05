#include "head.h"
void title() {

    system("mode con cols=150 lines=55 ");
    int start_num;
   
    printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                                       ┃              메뉴 선택            ┃\n");
    printf("                                       ┃                                   ┃\n");
    printf("                                       ┃         1. 가위바위보 게임        ┃\n");
    printf("                                       ┃         2. 블랙잭 게임            ┃\n");
    printf("                                       ┃         3. 상점                   ┃\n");
    printf("                                       ┃         4. 초기화                 ┃\n");
    printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("                                          ▲  원하는 메뉴를 선택하세요 >  ");
    scanf_s("%d", &start_num);
    if (start_num == 1) { system("cls"); rock(); }
    else if (start_num == 2) { system("cls"); start_blackjack(); }
    else if (start_num == 3) { system("cls"); shop(); }
    else if (start_num == 4) { system("cls"), choice(); }


}