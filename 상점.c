#include"head.h"
#include <stdio.h>
#include <windows.h>

void shop()
{
	int selMenu;

	printf("                                       ��������������������������������������������������������������������������\n");
	printf("                                       ��           ���� �޴� ����          ��\n");
	printf("                                       ��                                   ��\n");
	printf("                                       ��         1. ���� �����ϱ�          ��\n");
	printf("                                       ��         2. �Ȱ� �����ϱ�          ��\n");
	printf("                                       ��     3. ����ȭ������ ���ư���      ��\n");
	printf("                                       ����������������������-������������������������������-������������������\n");
	printf("                                             ��  ����̸� �����ϼ��� �� ");
	scanf("%d", &selMenu);

	if (selMenu == 1) { system("cls"); cat1(); }
	if (selMenu == 2) { system("cls"); cat2(); }
	if (selMenu == 3) { system("cls"); cat3(); }



}


