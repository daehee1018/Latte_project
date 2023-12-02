#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <locale.h> 
#include <io.h>
#include <fcntl.h>

void shop()
{
	int selMenu, currentSnack;

	setlocale(LC_CTYPE, ""); //고양이 함수 불러오기
	setmode(_fileno(stdout), _O_U16TEXT);
	FILE* filePointer = _wfopen(L"CAT.txt", L"r+, ccs=UTF-8");
	wchar_t singleLine[100];
	if (filePointer == NULL) {
		wprintf(L"파일을 열 수 없습니다.\n");
		return 1;
	}

	// 파일에서 한 줄씩 읽어오기
	while (fgetws(singleLine, sizeof(singleLine) / sizeof(wchar_t), filePointer) != NULL) {
		wprintf(L"%s", singleLine); // 유니코드 문자 출력
	}

	fclose(filePointer); // 파일 닫기
	_setmode(_fileno(stdout), _O_TEXT); // 텍스트 출력 모드로 변경

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}

	printf("\n\n");
	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
	printf("                                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("                                       ┃           상점 메뉴 선택          ┃\n");
	printf("                                       ┃                                   ┃\n");
	printf("                                       ┃         1. 모자 구매하기          ┃\n");
	printf("                                       ┃         2. 안경 구매하기          ┃\n");
	printf("                                       ┃           3. 간식 주기            ┃\n");
	printf("                                       ┃     4. 메인화면으로 돌아가기      ┃\n");
	printf("                                       ┗━━━━━━━━━━-━━━━━━━━━━━━━━━-━━━━━━━━┛\n");
	printf("                                           ▲  원하는 메뉴를 선택하세요 ▲ ");
	scanf("%d", &selMenu);

	if (selMenu == 1) { system("cls"); hat_shop(); }
	if (selMenu == 2) { system("cls"); glasses_shop(); }
	if (selMenu == 3) { system("cls"); snack(); }
	if (selMenu == 4) { system("cls"); title(); }



}

void hat_shop()
{
	int selHat;
	int	currentSnack;

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}

	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
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

	char buyGlasses;
	int	currentSnack;

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}
	
	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
	setlocale(LC_CTYPE, "");
	_setmode(_fileno(stdout), _O_U16TEXT); // Call this before writing anything
	wprintf(L"⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡏⠈⠉⠛⠿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⠋⠻⣿⣿⣶⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢀⠀⠀⢀⣴⣿⡿⠁⠀⠀⠈⠙⠟⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⢠⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⢿⣿⣦⣾⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡟⡀⣀⣀⣠⣤⣶⣶⣶⣷⢾⠾⠿⠿⠿⣿⣇⠀⠀⠀⣸⣿⠉⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⢿⠟⠟⠛⠛⠙⠉⠈⠀⠀⠀⠀⠀⢐⣿⣷⣠⣴⣶⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣺⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⡿⠛⠛⠉⣿⣿⠀⠀⠀⠀⠀⡀⡀⡀⣀⣀⣀⣾⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣿⡯⠀⠀⠀⣿⣿⣾⣾⣾⣿⣿⣿⣿⣿⢿⡿⣿⣿⠿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣯⣴⣶⣶⣶⣶⣾⣶⣶⣶⣶⣶⣷⣿⣿⡿⡗⠀⠀⠀⠛⠋⠉⠉⠈⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠿⠿⠟⠛⠙⠙⠉⠉⠉⠉⠉⠉⠉⠉⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\n");

	_setmode(_fileno(stdout), _O_TEXT);
	printf("                     범생이 안경 가격: 간식 500개\n\n");
	printf("                   안경 구매를 진행하겠습니까? (Y/N) : "); 
	scanf(" %c", &buyGlasses);

	if (buyGlasses == 'y' || buyGlasses == 'Y') {
		if (currentSnack >= 500) {
			currentSnack -= 500;
			printf("\n\n");
			printf("                   안경을 성공적으로 구매하였습니다!\n");
		}
		else {
			printf("\n\n");
			printf("                   간식이 부족하여 안경을 구매할 수 없습니다.\n\n"); 
			printf("                   아무 키나 눌러 상점 메뉴로 돌아가기\n");
			_getch();
			system("cls"); shop();
		}
	}
	else if (buyGlasses == 'n' || buyGlasses == 'N') {
		system("cls");
		shop();
	}
	else {
		printf("\n\n");
		printf("                   유효하지 않은 입력입니다.\n");
	}






}

void magic_hat()
{
	char buyHat;
	int	currentSnack;

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}

	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
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
	wprintf(L"⠀⠀⠀⠀⠀⠈⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠋⠉⠉⠉⠁⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\n");

	_setmode(_fileno(stdout), _O_TEXT);
	
	printf("                       마법사 모자 가격: 간식 700개\n\n");
	printf("                마법사 모자 구매를 진행하겠습니까? (Y/N) : ");
	scanf(" %c", &buyHat);
	
	if (buyHat == 'y' || buyHat == 'Y') {
		if (currentSnack >= 700) {
			currentSnack -= 700;
			printf("\n\n");
			printf("                   마법사 모자를 성공적으로 구매하였습니다!\n");
		}
		else {
			printf("\n\n");
			printf("                   간식이 부족하여 마법사 모자을 구매할 수 없습니다.\n\n");
			printf("                   아무 키나 눌러 상점 메뉴로 돌아가기\n");
			_getch();
			system("cls"); shop();
		}
	}
	else if (buyHat == 'n' || buyHat == 'N') {
		system("cls");
		shop();
	}
	else {
		printf("\n\n");
		printf("                   유효하지 않은 입력입니다.\n");
	}


}
		

void crown()
{ 
	char buyCrown;
	int	currentSnack;

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}

	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
	setlocale(LC_CTYPE, "");
	_setmode(_fileno(stdout), _O_U16TEXT); // Call this before writing anything
	wprintf(L"⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⡟⡈⠻⣿⣿⣷⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⡿⠐⡀⢂⠨⠹⢿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣶⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⠃⢂⠐⡀⠂⠄⢑⢻⣿⣿⣧⣄⠀⠀⠀⠀⣠⣾⣿⢟⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⡏⠌⡀⠂⠄⠡⠈⠄⡀⠻⢿⣿⣿⣷⡀⣠⣾⣿⢟⠡⢀⣿⣿⣿⣿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣦⣀⡀⡀⠀⠀⠀⠀⣾⣿⣿⡟⢐⢀⣢⣡⣮⣦⣁⠂⡐⢈⠈⠻⣿⣿⣿⣿⠟⡑⢀⠂⠄⢿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⢿⣿⣿⣷⣷⣶⣤⣤⣿⣿⠟⠐⢰⣿⣿⠟⠙⠿⣿⣷⣦⠂⡈⠄⡈⠍⠩⠐⡀⢂⠐⠠⠈⢺⣿⣿⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⡥⠠⠀⠅⡉⠛⠻⠿⡿⠣⠁⠌⡈⣾⡗⠀⠀⠀⠙⣿⣿⡂⡐⢀⠂⠨⢀⠡⠐⡀⠌⠠⠁⢜⣿⣿⣗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⣿⣿⣿⠠⠁⠂⠄⠡⠈⠄⢂⠨⢀⠡⠨⣿⡆⠀⠀⠀⠀⢺⣿⡃⠄⢂⢈⠐⡀⢂⠡⠐⡈⠄⠡⢘⣿⣿⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡅⠨⠀⠅⠨⢀⠡⠀⡂⠄⢂⠈⣿⣇⠀⠀⠀⠀⣺⣿⠅⢂⠐⡀⢂⠐⡀⢂⠡⠐⡈⢐⠨⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢺⣿⣿⣇⠌⠠⠁⠌⡀⢂⠡⠀⠌⠠⠈⣻⣿⣆⡀⣀⣶⣿⠣⠈⠄⢂⠐⡀⢂⠐⡀⢂⢁⢐⣠⣼⣿⣿⡛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣷⡈⠄⢁⠂⡐⢀⠂⠡⠈⠄⠡⢈⢐⣀⣂⣔⣄⣦⣵⣶⣿⣿⣿⣿⢿⠿⠻⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⢿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡿⠿⠻⠛⠝⠉⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀                      ⠀⠀⠀⠀⠀\n\n");

	_setmode(_fileno(stdout), _O_TEXT);
	printf("                       왕관 가격: 간식 999개\n\n");
	printf("                왕관 구매를 진행하겠습니까? (Y/N) : ");
	scanf(" %c", &buyCrown);

	if (buyCrown == 'y' || buyCrown == 'Y') {
		if (currentSnack >= 999) {
			currentSnack -= 999;
			printf("\n\n");
			printf("                   왕관을 성공적으로 구매하였습니다!\n");
		}
		else {
			printf("\n\n");
			printf("                   간식이 부족하여 왕관을 구매할 수 없습니다.\n\n");
			printf("                   아무 키나 눌러 상점 메뉴로 돌아가기\n");
			_getch();
			system("cls"); shop();
		}
	}
	else if (buyCrown == 'n' || buyCrown == 'N') {
		system("cls");
		shop();
	}
	else {
		printf("\n\n");
		printf("                   유효하지 않은 입력입니다.\n");
	}



}

void snack() {
	int	currentSnack;

	// 파일에서 이전 점수 읽어오기
	FILE* file = fopen("score.txt", "r");
	if (file != NULL) {
		fscanf(file, "%d", &currentSnack);
		fclose(file);
	}
	else {
		printf(" 새로운 파일\n");
		// 파일을 열 수 없을 경우 기본 점수 0으로 설정
	}

	printf("                                          현재 보유하고 있는 간식 수: %d개\n", currentSnack);
	printf("고양이에게 간식 주기\n");
}