#include "head.h"
#include <locale.h>  // ������ ������ ���� ��� ����


int rock() {

    int playerScore = 0, computerScore = 0;

    // ���� �õ� ����
    srand(time(NULL));

    printf("���������� ������ ���۵˴ϴ�.\n\n");
    printf("������ 5���� ���� ����ǰ�, �̱�� 2��, ���� 1��, ���� 0���� ����ϴ�.\n\n");
    printf("1: ����, 2: ����, 3: ��\n\n");

    for (int round = 1; round <= 5; round++) {
        int playerChoice, computerChoice;



        // �÷��̾��� ���� �ޱ�
        while (1) {
            printf("���� %d: ����� ������? ", round);
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

        // ���� ��� ���
        if (playerChoice == computerChoice) {
            printf("�����ϴ�!\n");
            playerScore += 1;
            computerScore += 1;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) {
            printf("����� �̰���ϴ�!\n");
            playerScore += 2;
        }
        else {
            printf("��ǻ�Ͱ� �̰���ϴ�!\n");
        }
    }



    setlocale(LC_CTYPE, "");  // �������� �����Ͽ� �����ڵ� ����� Ȱ��ȭ

    printf("\n���� ����\n");
    printf("ȹ���� ���� : % d��\n", playerScore);
    printf("�������� \n");
    printf("�������� \n");
    printf("��  ��\n");
    printf("����\n");
    printf("��  ��x %d\n", playerScore);
    printf("������\n");
    printf("��  ��\n");
    printf("��������\n");
    return 0;
}
