#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//조건식???
	//비교연산자 또는 논리연산자
	// 0 거짓, 1 참

	/*
	if (1) {
		printf("입력한 식이 정상적으로 실행되었습니다.");
	}


	if () {

	}else if (){

	}else {
		위 모든 조건식들이 거짓일때 실행될 명령문(들)
	}

	*/
	/*
	int num;
	printf("정수를 입력하세요 >>>");
	scanf("%d", &num);

	if (num%2) {
		printf("홀수\n");
	}
	else {
		printf("짝수\n");
	}

	//두개를 입력받아서 더 큰수를 출력하세요
	int n1;
	int n2;
	printf("첫번째 수를 입력하세요 >>>");
	scanf("%d", &n1);
	printf("두번째 수를 입력하세요 >>>");
	scanf("%d", &n2);
	if (n1 > n2) {
		printf("%d이(가) 더 큰 수 입니다.\n",n1);
	}
	else if(n1 == n2) {
		printf("두 수의 값은 같습니다.\n");
	}
	else {
		printf("%d이(가) 더 큰수입니다.\n", n2);
	}
	
	//상수와 변수의 값이 같은지 비교할때는 상수를 앞에 배치하여
	//논리적 에러를 발생시킬 수 있는 근거를 제거한다

	int x, y;
	// x, y좌표를 입력하여 해당 점이 몇사분면에 있는지
	//판단할 수 있는 코드를 작성하세요
	printf("x 좌표를 입력하세요 >>>");
	scanf("%d", &x);

	printf("y 좌표를 입력하세요 >>>");
	scanf("%d", &y);

	if (x == 0 && y == 0) {
		printf("이 점은 원점이다.");
	}
	else if (x == 0) {
		printf("점은 y축상에 존재한다.");
	}
	else if (y == 0) {
		printf("점은 x축상에 존재한다.");
	}
	else if (x > 0, y>0) {
		printf("점은 1사분면에 속한다");
	}
	else if (x>0 && y<0) {
		printf("점은 4사분면에 속한다.");
	}
	else if(x<0 && y>0){
		printf("점은 2사분면에 속한다.");
	}
	
	else {
		printf("점은 3사분면에 속한다.");
	}


	int res;
	if (x > 0 && y > 0) res = 1;
	else if (x < 0 && y > 0) res = 2;
	else if (x < 0 && y < 0) res = 3;
	else res = 4;
	printf("이 점은 %d사분면에 속한다.\n", res);
	*/
	//초(second)를 입력받습니다
	//입력받은 초를 계산하여 다음과 같이 출력하시오.
	//초(second)를 입력하세요. >>> 365
	//3650초는 hh시간, mm분, ss초입니다.
	int s, h, m, ss;

	

	printf("초(second)를 입력하세요. >>>");
	scanf("%d", &s);
	h = s / 3600;
	m = (s - 3600 * h) / 60;
	ss = (s - 3600 * h - 60 * m);
	printf("%d초는 %d시간, %d분, %d초입니다.\n", s, h, m, ss);
		

	return 0;
}