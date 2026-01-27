#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 사칙 연산을 수행하는 게산기 프로그램을 작성하세요
	// 두개의 정수와 연산자를 입력받아서 해당 연산자에 대한 연산을 수행하고
	// 결과를 출력하는 프로그램을 작성하세요
	// X를 누르면 프로그램을 종료하도록

	// 출력형식)
	/*
	첫번째 정수를 입력하세요 : 5
	다음 연산자를 입력하세요(+,-,*,/): *
	두번째 정수를 입력하세요 : 3

	5 * 3 = 15

	*/

	int a, b;
	char ch;
	char waste;
	do
	{
		printf("\n첫번째 정수를 입력하세요 : ");
		scanf("%d", &a);
		scanf("%c", &waste);

		printf("\n다음 연산자 중 하나를 입력하세요, x입력시 종료 (+, -, *, /, x) : ");
		scanf("%c", &ch);		
		scanf("%c", &waste);

		printf("\n두번째 정수를 입력하세요 : ");
		scanf("%d", &b);

		switch (ch)
		{
		case '+' :
			printf("\n%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("\nd - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("\n%d * %d = %d\n", a, b, a * b);
			break;
		case '/':
			printf("\n%d / %d = %d\n", a, b, a / b);
			break;
		case 'x':
			break;
		default:
			printf("\n연산자를 잘못 입력했습니다. 다시 입력해주세요.\n");
			break;



		}
		
		printf("\n\n");


	} while (ch != 'x');




	return 0;
}