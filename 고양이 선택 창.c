#include"head.h"
#include <stdio.h>
#include <windows.h>

void choice_cat() {
	int test_2;
	printf("����̸� �����ϼ��� ! \n");
	scanf("%d", &test_2);
	system("mode con cols=100 lines=32"); 
	system("cls"); name_cat();
}