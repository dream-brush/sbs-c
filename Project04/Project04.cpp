#include <stdio.h>

int main()
{
	/*
	연산자(operator)

	1. 산술연산자 : +, -, *, /, %

	2. 대입연산자 : =, +=. -=, *=, /=, %=

	3. 증감연산자 : ++, --

	4. 비교연산자 : >, >=, <, <=, ==, !=

	5. 논리연산자 : &&, ||, !

	6. 상황연산자 : ? :

	7. 비트연산자 : <<, >>, &, |, ^, ~

	*/
	int n1 = 5;
	int n2 = 3;
	int n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);

	n3 = n1 - n2;
	printf("%d - %d = %d\n", n1, n2, n3);

	n3 = n1 * n2;
	printf("%d X %d = %d\n", n1, n2, n3);

	n3 = n1 / n2;
	printf("%d / %d = %d\n", n1, n2, n3);

	float n4;
	n4 = n1 / (float)n2;
	printf("%d / %d = %f\n", n1, n2, n4);


	n3 = n1 % n2;
	printf("%d %% %d = %d\n", n1, n2, n3);

	//대입연산자
	n3 = n1; //n1의 값을 n3에 대입시켜라
	n3 += n1; // n3 = n3 + n1
	printf("n1 =%d, n3 = %d\n", n1, n3);
	n3 -= n1; // n3 = n3 - n1
	n3 *= n1; // n3 = n3 * n1
	n3 /= n1; // n3 = n3 / n1
	n3 %= n1; // n3 = n3 % n1


	return 0; //즉시 함수를 종료시킨다.
}