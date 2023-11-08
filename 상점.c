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
    strcpy(player.name, "�÷��̾�");
    strcpy(player.hat, "       ");
    strcpy(player.glasses, "       ");

    int choice;
    int hatchoice;
    int glasseschoice;

    while (1) {
        printf("1. ���� �����ϱ�\n");
        printf("2. �Ȱ� �����ϱ�\n");
        printf("3. ������\n");
        printf("����: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char newHat[50];
            printf("�� ���� ����: \n");
            printf("1. ������ ����\n");
            printf("2. ������ ����\n");
            printf("���� (1 �Ǵ� 2): ");
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
                printf("�߸��� �����Դϴ�.\n");
            }
            scanf("%s", &newHat);
            changeHat(&player, newHat);
        }
        else if (choice == 2) {
            char newGlasses[50];
            printf("�� �Ȱ� ����: ");
            printf("1. ������ �Ȱ�\n");
            printf("2. ���� �����ϱ�\n");
            printf("���� (1 �Ǵ� 2): ");
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

                printf("���Ÿ� �����մϴ�\n");
            }
            else {
                printf("�߸��� �����Դϴ�.\n");
            }
            scanf("%s", &newGlasses);
            changeglasses(&player, newGlasses);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
        }
    }

    printf("ĳ���� �̸�: %s\n", player.name);
    printf("����: %s\n", player.hat);
    printf("�Ȱ�: %s\n", player.glasses);

    return 0;
}