#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int rock(void);
void choice_cat(void);
void title(void);
void shop(void);
void initialize_deck(void);
void start_blackjack(void);
char ID[20];//아이디
char id(void);// 아이디 등록
void gotoxy(int x, int y);
void choice(void);