#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// money가 매개변수로 주어지면 잔수를 반환하는 함수를 구현하세요
//americano 한잔은 1500원이다.
int cost;
int what;
int d1, d2;
int res;
int real_age;
char waste;
char alphabet;
int americano(int money)
{
	return money / 1500;
}
int totalof(int until)
{
	int total = 0;
	for (int i = 1; i <= until; i++)
	{
		total += i;
	}
	return total;
}

//사칙연산 계산기 구현하기 : +, -, *, /, %
//그 외는 "지원하지 않는 연산자입니다."를 출력하는 함수를 구현하시오
// 함수의 이름은 calculator, 매개변수 1,2는 정수/ 매개변수 3은 char형의 연산자

int calculator(int n1, char op, int n2)
{
	switch (op)
	{
	case '+' :
		res = n1 + n2;
		break;
	case '-':
		res = n1 - n2;
		break;
	case '*':
		res = n1 * n2;
		break;
	case '/':
		if (!n2)
		{
			printf("0으로 나누는 것은 금지되어있습니다\n");
			return 0;
		}
		res = n1 / n2;
		break;
	case '%':
		if (!n2)
		{
			printf("0으로 나누는 것은 금지되어있습니다\n");
			return 0;
		}
		res = n1 % n2;
		break;
	default :
		printf("지원하지 않는 연산자입니다.");
		return 0;

	}
	return res;
}


// 나이를 매개변수로 주면 출생연도를 반환하는 함수를 구현하세요
int born(int age)
{
	const int cur_year = 2026;
	return cur_year - age +1;
}
// 상품금액을 일벽하면 vat를 가산하여 최종 결제 금액을 구하는 함수를 구현하세요
// vat는 상품금액의 10%입니다.
int rprice(int price)
{
	return price += price / 10;
}


// odd_or_even 
// 매개변수 d1, d2(int)
// 반환값  : 없음
void odd_or_even(int d1, int d2)
{
	int sum = d1 + d2;
	if (sum % 2 == 0)
	{
		printf("두 수의 합은 짝수입니다.\n");
	}
	else
	{
		printf("두 수의 합은 홀수입니다.\n");
	}

}
// 알파벳 문자 한개를 매개변수로 받아서 대문자이면 소문자로, 소문자면 대문자로 변환하여 반환하는 함수를 구현하시오.,
int change_case(char alpha)
{
	if (alpha <= 90)
	{
		return alpha + 32;
	}
	else
	{
		return alpha - 32;
	}
}
int main()
{
	int result;

	
	printf("가지고 계신 돈은 얼마입니까? ");
	scanf("%d", &cost);
	scanf("%c", &waste);
	result = americano(cost);
	printf("\n아메리카노 %d잔 구매가 가능합니다.\n", result);

	printf("몇 까지의 합을 구하시겠습니까? ");
	scanf("%d", &what);
	scanf("%c", &waste);
	int sum = totalof(what);
	printf("1부터 %d까지의 합 : %d\n",what, sum);

	sum = calculator(5, '/', 2);
	printf("계산의 결과  : %d\n", sum);

	printf("당신의 나이는 몇살이십니까? ");
	scanf("%d", &real_age);
	scanf("%c", &waste);
	result = born(real_age);
	printf("당신의 출생년도는 %d년입니다.\n", result);
	

	printf("상품의 가격은 얼마입니까? ");
	scanf("%d", &what);
	scanf("%c", &waste);
	result = rprice(what);
	printf("상품의 최종 가격은 %d원 입니다.\n", result);

	odd_or_even(5, 3);

	printf("변환하고자 하는 알파벳을 입력하세요 : ");
	scanf("%c", &alphabet);
	scanf("%c", &waste);
	result = change_case(alphabet);
	printf("변환된 알파벳은 %c입니다.\n", result);

	return 0;
}