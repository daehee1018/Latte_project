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

	if (selMenu == 1) { system("cls"); hat_shop(); }
	if (selMenu == 2) { system("cls"); glasses_shop(); }
	if (selMenu == 3) { system("cls"); title(); }



}

void hat_shop()
{
	int selHat;
	printf("                                       ��������������������������������������������������������������������������\n");
	printf("                                       ��           ���� �����ϱ�           ��\n");
	printf("                                       ��                                   ��\n");
	printf("                                       ��       1. ������ ���� �����ϱ�     ��\n");
	printf("                                       ��         2. �հ� �����ϱ�          ��\n");
	printf("                                       ��        3. �������� ���ư���       ��\n");
	printf("                                       ����������������������-������������������������������-������������������\n");
	printf("                                            ��  ���ϴ� �׸��� �����ϼ��� �� ");
	scanf("%d", &selHat);
	if (selHat == 1) { system("cls"); magic_hat(); }
	if (selHat == 2) { system("cls"); crown(); }
	if (selHat == 3) { system("cls"); shop(); }
}

glasses_shop(){

}

magic_hat() {

}

crown() {

}