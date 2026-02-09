/* 5행 5열 크기의 이차원 배열에 1부터 25까지의 정수를 차례로 넣고 출력하시오.
* 
* 1 2 3 4 5
* 6 7 8 9 10

	
출력 2
다음과 같이 거꾸로 출력하시오.
25 24 23 22 21
20 19 18 17 ..

*/
#include <stdio.h>

int main() {
	int arr[5][5];
	int cnt = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = cnt++;
		}
	}
	/* // 출력 1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-4d\t", arr[i][j]);
		}
		printf("\n");
	}*/

	/* //출력2
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 4; j >= 0; j--)
		{
			printf("%-4d\t", arr[i][j]);
		}
		printf("\n");
	}*/

}