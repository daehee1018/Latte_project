#include"head.h"
#include <stdio.h>
#include <windows.h>

void shop()
{
	int selMenu;

	printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("                                       ┃           상점 메뉴 선택          ┃\n");
	printf("                                       ┃                                   ┃\n");
	printf("                                       ┃         1. 모자 구매하기          ┃\n");
	printf("                                       ┃         2. 안경 구매하기          ┃\n");
	printf("                                       ┃     3. 메인화면으로 돌아가기      ┃\n");
	printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
	printf("                                             ▲  고양이를 선택하세요 ▲ ");
	scanf("%d", &selMenu);

	if (selMenu == 1) { system("cls"); cat1(); }
	if (selMenu == 2) { system("cls"); cat2(); }
	if (selMenu == 3) { system("cls"); cat3(); }



}


