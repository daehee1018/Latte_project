#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <locale.h>  // ������ ������ ���� ��� ����



// testing text...
// testing 2
// testing 3

int rock() {
    system("mode con cols=150 lines=55 ");
    int currentSnack = 0;
    int check_snack = 0;
    setlocale(LC_CTYPE, "");  // �������� �����Ͽ� �����ڵ� ����� Ȱ��ȭ
    // ���Ͽ��� ���� ���� �о����
    FILE* file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &currentSnack);
        fclose(file);
    }
    else {
        printf(" ���ο� ����\n");
        // ������ �� �� ���� ��� �⺻ ���� 0���� ����
    }

    // ���� �õ� ����
    srand((unsigned)time(NULL));

    printf("���������� ������ ���۵˴ϴ�.\n\n");
    printf("������ 5���� ���� ����ǰ�, �̱�� 2��, ���� 1��, ���� 0���� ����ϴ�.\n\n");
    printf("1: ����, 2: ����, 3: ��\n\n");

    for (int round = 1; round <= 5; round++) {

        int playerChoice, computerChoice;




        // �÷��̾��� ���� �ޱ�
        while (1) {

            printf("                                                    ������� ȹ���� ���� : % d��\n", currentSnack);
            printf("���� %d: ����� ������? (1: ����, 2: ����, 3: ��)\n ", round);

            if (scanf_s("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3) {
                printf("�߸��� �����Դϴ�. 1, 2, 3 �߿��� �����ϼ���.\n");
                while (getchar() != '\n'); // ���� ����
            }
            else {
                break;  // ��ȿ�� �Է��� ������ ���� ����
            }
        }



        // ��ǻ���� ���� (����)
        computerChoice = rand() % 3 + 1;

        // ���� ��� ���
        printf("\n");
        printf("���:\n");
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
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
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

        printf("\n��ǻ��:\n");
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
            printf("    _______\n");
            printf("---'   ____)____\n");
            printf("          ______)\n");
            printf("          _______)\n");
            printf("         _______)\n");
            printf("---.__________)\n");
            setTextColor(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            break;

        }

        // ���� ��� ���
        if (playerChoice == computerChoice) {
            printf("�����ϴ�! �� +1\n");
            currentSnack += 1;
            check_snack += 1;
        }


        else if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) {
            printf("����� �̰���ϴ�! �� +2\n");
            currentSnack += 2;
            check_snack += 2;
        }
        else {
            printf("��ǻ�Ͱ� �̰���ϴ�! �� +0\n");


        }
        printf("�ƹ� Ű�� ���� �������� �����մϴ�.\n");
        printf("                                                    ������� ȹ���� ���� : % d��\n", currentSnack);
        _getch();
        system("cls");

    }

        // ���ο� ������ ���Ͽ� �����ϱ�
        file = fopen("score.txt", "w");
        if (file != NULL) {
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("\n���� ����!  ���� ���� �� : %d\n", currentSnack);
            printf("�� ȹ���� �� : % d��\n", check_snack);
            printf("�������� \n");
            printf("�������� \n");
            printf("��  ��\n");
            printf("����\n");
            printf("��  ��x %d\n", check_snack);
            printf("������\n");
            printf("��  ��\n");
            printf("��������\n");
            _getch();
            system("cls");
        }
        else {
            printf("������ �� �� �����ϴ�. ������ ������ �� �����ϴ�.\n");
        }

        title();
        return 0;    }
