// 포인터
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pfunc(int* p)
{
	printf("p가 가리키는 곳의 값 출력하기 : %d\n", *p);
	*p += 100;
}

void exchange(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	
	// 변수
	int n; //os가 4바이트 메모리를 할당받고 초기화하지 않는다.
	//int m[10]; //40바이트 메모리를 할당받음
	//scanf("%d", &n);
	// 변수앞에 단독으로 &있을때는 주소연산자로 사용된다.

	//%p는 주소를 맵핑할 수 있는 형식 문자
	n = 5;
	printf("n의 주소 : %p\n", &n);

	int k = 10;

	// * : 아스테리크/ 애스터리스크
	// *이 붙은 변수를 포인터라고 한다
	// 포인터는 무조건 주소만 저장할 수 있다.
	int* p;
	p = &n;  //포인터 변수 p에 n의 주소를 대입
	printf("p의 값 : %p\n", p);		//p에는 주소가 들어가있음

	p = &k;
	printf("p의 값 : %p\n", p);

	//
	printf("p가 가리키는 곳의 값: %d\n", *p);

	p = &n;

	printf("p가 가리키는 곳의 값: %d\n", *p);

	// *p == n

	*p = 20;	// n의 값 : 20
	
	printf("n의 값 : %d\n", n);

	//p를 이용하여 k의 값을 100으로 변경하세요
	
	p = &k;
	*p = 100;

	printf("k의 값 : %d\n", k); //k의 값 : 100

	//pfunc를 이용하여 n의 값을 출력하세요
	pfunc(&n);

	//pfunc를 이용하여 k의 값을 출력하세요

	pfunc(&k);

	//
	printf("k의 값 : %d\n", k);

	

	//
	printf("n=%d, k=%d\n", n, k);  //n과 k의 값 출력

	exchange(&n, &k);

	printf("n=%d, k=%d\n", n, k);

	return 0;
}