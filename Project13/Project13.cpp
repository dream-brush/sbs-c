// 포인터
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 변수
	int n; // 4바이트 메모리를 할당받고 초기화하지 않는다.
	//scanf("%d", &n);
	printf("n의 주소 : %p\n", &n);

	return 0;
}