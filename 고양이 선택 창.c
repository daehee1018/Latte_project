#include"head.h"
#include <stdio.h>
#include <windows.h>

void cat1() {
	printf("나는야 고양이 1\n");
}
void cat2() {
	printf("나는야 고양이 2\n");
}
void cat3() {
	printf("나는야 고양이 3\n");
}




void choice_cat()
{
	int selMenu;

	printf("   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("   *********************************************************************************************+++++++++++++++++\n");
	printf("   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	printf("   *******************++++++++                  고양이를 선택하세요                 ************+++++++++++++++++\n\n");

	printf("   *********************************************************************************************+++++++++++++++++\n");
	printf("   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("   **************************************************************************+++++++++++++++++*******************\n\n\n");

	printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("                                       ┃            고양이 선택            ┃\n");
	printf("                                       ┃                                   ┃\n");
	printf("                                       ┃           1. 1번 고양이           ┃\n");
	printf("                                       ┃           2. 2번 고양이           ┃\n");
	printf("                                       ┃           3. 3번 고양이           ┃\n");
	printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
	printf("                                             ▲  고양이를 선택하세요 ▲ ");
	scanf("%d", &selMenu);

	if (selMenu == 1) { system("cls");  cat1(); }
	if (selMenu == 2) { system("cls"); cat2(); }
	if (selMenu == 3) { system("cls"); cat3(); }



}

char id()
{
	gotoxy(25, 15);
	printf("      아이디를 입력하세요:          ");


	getchar();
	scanf("%s", ID);
	system("cls");

	gotoxy(12, 4);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(12, 8);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(12, 12);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(12, 16);
	printf("                     ☆★☆★ %s님 환영합니다!★☆★☆ ", ID);
	gotoxy(12, 20);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(12, 24);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(12, 28);
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	gotoxy(25, 30);
	system("PAUSE");
	system("cls");


	return ID;

}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
