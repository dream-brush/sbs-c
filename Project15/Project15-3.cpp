/* 배열 포인터
배열을 가리키는 포인터 변수

int (*arr)[3];

포인터 배열
포인터 변수를 요소로 가지는 배열

int * arr[3];



*/

/*
#include <stdio.h>

int main()
{
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	// 배열 포인터
	int(*arrptr)[3] = arr;

	//배열의 모든 요소 출력
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3;  j++) {
			printf("%d\t", arrptr[i][j]);
		}
		printf("\n");
	}


	return 0;
}*/