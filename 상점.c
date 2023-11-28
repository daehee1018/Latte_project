#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <locale.h> 
#include <io.h>
#include <fcntl.h>

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
	printf("                                           ▲  원하는 메뉴를 선택하세요 ▲ ");
	scanf("%d", &selMenu);

	if (selMenu == 1) { system("cls"); hat_shop(); }
	if (selMenu == 2) { system("cls"); glasses_shop(); }
	if (selMenu == 3) { system("cls"); title(); }



}

void hat_shop()
{
	int selHat;
	printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("                                       ┃           모자 구매하기           ┃\n");
	printf("                                       ┃                                   ┃\n");
	printf("                                       ┃       1. 마법사 모자 구매하기     ┃\n");
	printf("                                       ┃         2. 왕관 구매하기          ┃\n");
	printf("                                       ┃        3. 상점으로 돌아가기       ┃\n");
	printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
	printf("                                           ▲  원하는 메뉴를 선택하세요 ▲ ");
	scanf("%d", &selHat);
	if (selHat == 1) { system("cls"); magic_hat(); }
	if (selHat == 2) { system("cls"); crown(); }
	if (selHat == 3) { system("cls"); shop(); }
}

void glasses_shop(){

}

void magic_hat()
{
	int buyHat;

	setlocale(LC_CTYPE, "");
	_setmode(_fileno(stdout), _O_U16TEXT); // Call this before writing anything
	wprintf(L"⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⡞⠛⠙⡉⠛⢛⠳⠷⠶⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡟⢑⠀⡁⠡⢀⠡⠐⢀⠂⠄⠄⡈⠙⠛⠷⢶⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡿⠃⡈⠄⠂⡁⠌⡀⠅⡀⢂⠐⡈⠠⢈⠠⠐⢈⣠⣥⣦⢶⠾⠞⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡟⠐⡀⠂⠄⢂⠐⡀⢂⠠⠀⠅⠐⡀⠅⠨⠐⢐⠀⢂⠡⠈⠄⠂⡈⢉⠛⠻⢶⣦⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠏⠐⢈⠐⡀⠂⠄⢂⠐⠠⠀⠄⡐⢀⠂⠡⠈⠄⢐⠠⠐⠈⢺⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠋⠄⢐⠠⠐⠠⢈⠐⡀⢂⠐⡀⠌⡀⠅⡈⠄⠂⡈⢐⠠⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠏⠠⠁⠄⢂⠨⠀⢂⢐⢠⣐⣠⣐⣠⣔⣤⣴⣴⣵⣴⣶⣲⣶⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠇⣠⣬⡦⡾⢶⠷⣻⢻⡛⡏⡏⡏⡏⡏⡝⡍⡇⡇⡇⡇⡎⡎⡎⡞⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡟⡭⡣⡣⣪⢪⢣⢝⢔⢕⣕⣕⣝⣼⣼⣼⣮⣾⣼⣮⣾⣼⣾⣾⣺⣾⣾⣿⣆⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾⣿⠟⢉⠋⡉⢐⠠⠐⢀⠂⢂⠨⠀⢂⠨⠐⠀⠄⡐⢀⠂⠡⠈⠄⢐⠠⠐⠐⡀⠅⠂⡐⢈⠠⠠⠈⢛⠻⣿⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠶⣿⣿⣍⣔⣈⣄⣂⣐⣀⣅⣀⣂⣄⣂⣄⣂⣨⣀⣂⣐⣈⡠⣁⢌⣠⣁⣢⣔⣤⡦⠷⠾⠞⠞⠛⠛⠋⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠈⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠋⠉⠉⠉⠁⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

	_setmode(_fileno(stdout), _O_TEXT);
	
	printf("                마법사 모자 구매를 진행하겠습니까? (Y/N) : ");
	scanf(" %c", &buyHat);
	

}
		

void crown(){ }