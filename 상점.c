#include <stdio.h>
#include "head.h"


typedef struct {
    char name[50];
    char hat[50];
    char glasses[50];
} Character;

void changeHat(Character* character, const char* newHat) {
    strcpy(character->hat, newHat);
}

void changeglasses(Character* character, const char* newGlasses) {
    strcpy(character->glasses, newGlasses);
}

void shop() {
    Character player;
    strcpy(player.name, "플레이어");
    strcpy(player.hat, "       ");
    strcpy(player.glasses, "       ");

    int choice;
    int hatchoice;
    int glasseschoice;

    while (1) {
        printf("1. 모자 구매하기\n");
        printf("2. 안경 구매하기\n");
        printf("3. 나가기\n");
        printf("선택: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char newHat[50];
            printf("새 모자 선택: \n");
            printf("1. 멋쟁이 모자\n");
            printf("2. 마법사 모자\n");
            printf("선택 (1 또는 2): ");
            scanf("%d", &hatchoice);

            if (hatchoice == 1) {
                char* asciiArt1 =
                    "                _\n"
                    "              /   \\,\n"
                    "            /       \\,\n"
                    "          /    ./ \\  \\,\n"
                    "        ./   ./     \\  \\,\n"
                    "___    _/  ./         \\  \\.\n"
                    "~-_~\\ /  ./             \\  \\,\n"
                    "   Y,`\\,/                `Y `Y\n"
                    "     \\  \\              _-~`   `\\\n"
                    "      ~-_~\\        _-``    ___,;\n"
                    "        -- Y    _-`   _-~~~\n"
                    "          ~~Y,/`    /~\n"
                    "           ~~ \\,  /`\n"
                    "             \\  \\`\n"
                    "               -_`Y\n"
                    "                 \\,|";

                printf("%s", asciiArt1);
            }
            else if (hatchoice == 2) {
                char* asciiArt2 =
                    "          .\n"
                    "         /:\\\n"
                    "        /;:.\\\n"
                    "       //;:. \\\n"
                    "      ///;:.. \\\n"
                    "  __--\"////;:... \"--__\n"
                    "--__   \"--_____--\"   __--\n"
                    "    \"\"\"--_______--\"\"\"\n";

                printf("%s", asciiArt2);
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
            scanf("%s", &newHat);
            changeHat(&player, newHat);
        }
        else if (choice == 2) {
            char newGlasses[50];
            printf("새 안경 선택: ");
            printf("1. 범생이 안경\n");
            printf("2. 구매 종료하기\n");
            printf("선택 (1 또는 2): ");
            scanf("%d", &glasseschoice);

            if (glasseschoice == 1) {
                char* asciiArt1 =
                    printf("        ________     ________\n");
                printf("   . - ~|        |-^-|        |~ - .\n");
                printf("{       |        |   |        |      }\n");
                printf("          `.____.'     `.____.'\n");


                printf("%s", asciiArt1);
            }
            else if (glasseschoice == 2) {

                printf("구매를 종료합니다\n");
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
            scanf("%s", &newGlasses);
            changeglasses(&player, newGlasses);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
        }
    }

    printf("캐릭터 이름: %s\n", player.name);
    printf("모자: %s\n", player.hat);
    printf("안경: %s\n", player.glasses);

    return 0;
}