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
*/
void input(SCORE* score)
{
	if (!score)
	{
		printf("잘못된 호출입니다.");
		return;
	}
	//printf("SCORE 구조체의 크기 : %llubytes\n", sizeof(SCORE));

	printf("번호를 입력하세요 >>>");
	scanf("%d", &(score->num));

	char tmp;
	scanf("%c", &tmp);

	printf("이름을 입력하세요 >>>");
	fgets(score->name, MAX_NAME, stdin); //공백 포함 문자열 입력받기
	score->name[strlen(score->name) - 1] = '\0'; // 입력된 엔터키 (\n) 제거하기


	printf("국어, 영어, 수학의 점수를 차례로 입력하세요 >>>");
	scanf("%d %d %d", &(score->kor), &(score->eng), &(score->math));

	//total 구하기
	score->total = score->kor + score->eng + score->math;
	score->avg = score->total / 3.f;

	score->grade = get_grade(score->avg); // 등급 구하기

}

int main()
{
	/*char menu;
	do {
		show_menu();
		menu = select_menu();
	} while (1);*/


	SCORE sc;
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
	}

	return 0;
}