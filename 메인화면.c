#include "head.h"
void title() {

    system("mode con cols=150 lines=55 ");
    int start_num;
   
    printf("                                       ��������������������������������������������������������������������������\n");
    printf("                                       ��              �޴� ����            ��\n");
    printf("                                       ��                                   ��\n");
    printf("                                       ��         1. ���������� ����        ��\n");
    printf("                                       ��         2. ���� ����            ��\n");
    printf("                                       ��         3. ����                   ��\n");
    printf("                                       ��         4. �ʱ�ȭ                 ��\n");
    printf("                                       ����������������������-������������������������������-������������������\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("����������������������������������������������������������������������������������������������������-������������������������������-��������������������������������������������������������������������������������\n");
    printf("                                          ��  ���ϴ� �޴��� �����ϼ��� >  ");
    scanf_s("%d", &start_num);
    if (start_num == 1) { system("cls"); rock(); }
    else if (start_num == 2) { system("cls"); start_blackjack(); }
    else if (start_num == 3) { system("cls"); shop(); }
    else if (start_num == 4) { system("cls"), choice(); }


}