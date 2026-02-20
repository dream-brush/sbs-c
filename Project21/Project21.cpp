#define _CRT_SECURE_NO_WARNINGS


#include "project21.h"

char get_grade(float avg)
{
	int tmp = (int)avg / 10;
	switch (tmp)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;

	}
}

/*
한명의 성적데이터를 입력받아서 반환하는 함수

ppScores에는 main함수의 동적 메모리 배열의 주소가 저장된다.
*/


int main()
{
	SCORE* scores = NULL;

	size_t count = 0;

	count = load(&scores);

	char menu;
	do {
		show_menu();
		menu = select_menu();
		switch (menu)
		{
		case '1':
			count = input(&scores, count);
			save(scores, count);
			print(scores, count);
			break;
		case '2':
			print(scores, count);
			break;

		case '3': //점수 수정
			select_update(scores, count);
			save(scores, count);
			print(scores, count);
			break;


		case 'x':
			if (scores)
			{
				free(scores);
				scores = NULL;
			}
		}
		//잠깐 멈추기
		if (menu != 'x')wait();
	} while (menu != 'x'
		);


	/*SCORE sc;
	input(&sc);
	save(&sc);

	SCORE* score = load();
	if (!score)
	{
		printf("데이터 읽기에 실패하였습니다.");
		return 0;
	}

	printf("번호 : %u\n", score->num);
	printf("이름 : %s\n", score->name);
	printf("국어 : %u\n", score->kor);
	printf("영어 : %u\n", score->eng);
	printf("수학 : %u\n", score->math);
	printf("총점 : %u\n", score->total);
	printf("평균 : %.2f\n", score->avg);
	printf("등급 : %c\n", score->grade);

	if (score)
	{
		free(score);
		score = NULL;
	}*/

	return 0;
}