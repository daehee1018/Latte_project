#include"head.h"
#include <stdio.h>
#include <windows.h>

void name_cat() {
	system("mode con cols=100 lines=32 ");
	int test_3;
	printf("고양이의 이름을 지어주세요 ");
	scanf("%d", &test_3);
	system("cls"); title();
}