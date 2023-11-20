#include"head.h"
#include <stdio.h>
#include <windows.h>

void choice_cat() {
	system("mode con cols=100 lines=32 ");
	int test_2;
	printf("고양이 이름 짓기\n");
	scanf("%d", &test_2);
	system("cls"); name_cat();
}
