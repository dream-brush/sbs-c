#pragma once


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>
#define MAX_NAME 20
typedef unsigned int UINT;
typedef unsigned short JUMSU;
typedef unsigned long long TIME;




#define MAX_NAME 20
typedef unsigned int UINT;
typedef unsigned short JUMSU;
typedef unsigned long long TIME;
typedef struct
{
	char name[20];
	short kor;
	short eng;
	short math;
	short total;
	float avg;
	char grade;
}SCORE;

char get_grade(float);

void input_s(SCORE*);

void print_s(SCORE*);

void save_text(const char*);

void load_text(const char*);

long get_size(const char*);