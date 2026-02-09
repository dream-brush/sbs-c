#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // Standard Input Output header 파일
/* 다차원 배열
2차원 이상의 배열을 의미하며 1차원 배열의 형태가 선형적이라고 할때 2차원 배열은 평면, 3차원 배열은 직육면체 구조라고 할 수 있음.
문법적으로는 4, 5차원, 그 이상의 배열도 지원 가능.

#배열 선언
자료형 배열명[길이];
자료형 배열명[세로][가로];
자료형 배열명[높이][세로][가로];

인덱스는 기본적으로 0부터 카운트한다. 

*/
/*
int main()
{
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	// 배열 요소 출력
	for (int i = 0; i < 2; i++) //세로
	{
		for (int j = 0; j < 3; j++) { //가로
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	// 배열 요소 변경
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 10;
		}
		
	}
	for (int i = 0; i < 2; i++) //세로
	{
		for (int j = 0; j < 3; j++) { //가로
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

