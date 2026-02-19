
#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#define MAX_NAME 20
#define FILE_NAME "score.dat"

typedef unsigned int uint;
typedef struct {
	uint num;
	char name[MAX_NAME];
	uint kor;
	uint eng;
	uint math;
	uint total;
	float avg;
	char grade;
	uint rank;
} SCORE;


// 데이터 세이브

void save(const SCORE* score);

SCORE* load();

void show_menu();
char select_menu();