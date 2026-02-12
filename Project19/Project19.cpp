#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//typedef : 형(Data type) 재정의
typedef unsigned int UINT;
typedef unsigned short JUMSU;
typedef unsigned long long TIME;

// 구조체(Structure)
typedef struct
{
	char name[20];
	int age;
	float height;
} PERSON;

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

void print_person(PERSON* p)
{
	printf("이름 : %s\n", p->name);
	printf("나이 : %d\n", p->age);
	printf("키 : %.2f\n", p->height);

}


void print_score(SCORE* s)
{
	printf("이름 : %s\n", s->name);
	printf("국어 점수 : %d\n", s->kor);
	printf("영어 점수 : %d\n", s->eng);
	printf("수학 점수 : %d\n", s->math);
	printf("총 점수 : %d\n", s->total);
	printf("평균 점수 : %.2f\n", s->avg);


}


int main()
{
	PERSON hong;
	hong.age = 30;
	hong.height = 180.5F;
	strcpy(hong.name, "홍길동");
	print_person(&hong);
	SCORE s;
	strcpy(s.name, "홍길동");
	s.kor = 97;
	s.eng = 100;
	s.math = 92;
	s.total = s.kor + s.eng + s.math;
	s.avg = s.total / 3.F;
	print_score(&s);

	printf("hong의 크기 : %llu 바이트\n", sizeof(hong));
	printf("score의 크기 : %llu 바이트\n", sizeof(SCORE));


	
	return 0;
}