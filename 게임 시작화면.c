﻿#include"head.h"
#include <stdio.h>
#include <windows.h>
#include <locale.h>  // 로케일 설정을 위한 헤더 파일

void main() {
	int test;
	SetConsoleOutputCP(65001);

	system("chcp 65001"); // UTF-8 코드 페이지로 변경

	wprintf(L"\xe2\x9d\xa4\xef\xb8\x8f\n");
	wprintf(L"\xe2\x9c\x80");


	setlocale(LC_CTYPE, "");  // 로케일을 설정하여 유니코드 출력을 활성화
	

	scanf("%d", &test);
	system("mode con cols=100 lines=32 ");
	choice_cat();







}