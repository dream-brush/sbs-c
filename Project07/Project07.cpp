#include <stdio.h>

#include <conio.h> //콘솔 입출력 함수가 정의된 헤더파일

int main() {

	//while 반복문 : 조건식의 결과가 참인동안 반복실행
	// 조건식의 결과에 따라 한번 반복실행되지 않을 수 있다.
	// 반복 조건을 먼저 판단하고 반복에 들어간다.
	// 반복해야할 횟수가 명확하지 않을때 사용
	/*
	while (조건식)
	{
		반복 실행한 명령문(들)
	}
	*/
	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i + 1);
		i++;
	}
	
	i = 0; //i를 다시 0으로 초기화
	while (i++< 15)
	{
		printf("=");
	}

	i = 1;
	int total = 0; // total이라는 변수를 선언하고 0으로 초기화함.
	while (i <= 10)
	{
		total += i; // total = total + i;
		i++;
	}
	printf("\ntotal : %d\n", total);

	//0부터 10까지 짝수들의 합을 구하시오
	i = 0;
	total = 0;
	while (i <= 10)
	{
		total += i;
		i += 2;
	}
	printf("짝수의 총합 : %d\n", total);

	i = 0; //i를 다시 0으로 초기화
	while (i++ < 15)
	{
		printf("=");
	}
	printf("\n");

	// 구구단 출력하기
	i = 1;
	while (i < 10)
	{
		printf("2 X %d = %d\n", i, i * 2);
		i++;
	}
	//
	int ch = 0;
	while (ch != 'x')
	{
		printf("\n종료하려면 'x'를 입력하세요 :");
		//_getch();

		ch = _getch(); // conio.h이 포함되어 있어야 한다
		printf("%c", ch);
	}

	//1부터 100까지의 합을 구하시오
	i = 1;
	total = 0;
	while (1) // 무한 반복
	{
		total += i;
		i++;

		// 반복문 안에서 탈출조건을 체크하여 탈출시킴
		if (i > 100) //i가 10보다 크다면...
			break; //현재 반복문을 즉시 탈출시킴
	}
	printf("\ntotal = %d\n", total);
	
	//중첩 반복문
	int dan = 2;
	/*
	int dan = 2;
	
	while (dan <= 9)
	{
		// printf("--- %d단 ---\n", dan);
		i = 1;
		while (i < 10)
		{
			printf("%d X %d = %d", dan, i, i * dan);
			i++;
		}
		dan++;
	}
	*/
	
	i = 1;

	while (i <= 9)
	{
		// printf("--- %d단 ---\n", dan);
		
		dan = 2;
		while (dan < 10)
		{
			printf("%d X %d = %d\t", dan, i, i * dan);
			dan++;
		}
		printf("\n");
		i++;
	}

	// 1 ~ 99까지 테이블 모양으로 출력하기
	i = 1;
	while (i < 100)
	{
		printf("%d\t", i);
		if (i % 10 == 0)
			printf("\n");
		i++;
	
	}




	return 0;
}