#include"head.h"
#include <stdio.h>
#include <windows.h>

void choice_cat() {
	system("mode con cols=100 lines=32 ");
	int test_2;
	printf("고양이 선택 창\n");
	scanf("%d", &test_2);
	system("cls"); name_cat();
}
