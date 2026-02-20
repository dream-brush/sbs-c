
#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <conio.h>

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

void save(const SCORE* scores, size_t count);

size_t load(SCORE** ppScores);

void show_menu();
char select_menu();
char get_grade(float avg);
void wait();

int find_sc(SCORE* pScores, size_t count, uint num);

void print(const SCORE* pScores, size_t count);


size_t input(SCORE** ppScores, size_t count);
void select_update(SCORE* pScores, size_t count);
