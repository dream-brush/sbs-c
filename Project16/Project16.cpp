// 숫자 야구 게임
// 컴퓨터가 랜덤하게 생성한 세자리 숫자를 사용자가 맞추는 게임
// 사용자가 숫자를 입력할때 마다 틀리면 컴퓨터가 힌트를 준다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> //windows 전용 헤더파일
// 순차 탐색 함수
int find_value(int arr[], size_t len_arr, int to_find)
{
	for (int i = 0; i < len_arr; i++)
	{
		if (to_find == arr[i])
			return i;
	}
	return -1;
}



/*
배열 arr에 난수를 대입하는 함수
start ~ end 까지의 난숫를 생성하여 arr에 중복되지 않게 저장

@param arr : 난수를 저장할 배열
@param len_arr : 배열의 길이(아이템들의 개수)
@param start : 난수 발생의 시작값
@param end : 난수 발생의 끝값


*/




void make_num(int arr[], size_t len_arr, int start, int end)
{
	// 57363 : 1~9

	// 0~ end-start
	int i = 0;
	while(i< len_arr)
	{
		int r = rand() % (end - start) + start; // start ~ end까지의 난수 생성
		//이 배열에 현재 만들어진 값이 있는지 중복값 검사
		if(find_value(arr, len_arr, r) <0)
			arr[i] = r;
		i++;
		
	}
	
}

// 배열 출력 함수
void print_array(int arr[], size_t len_arr)
{
	for (int i = 0; i < len_arr; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
/* 입력된 숫자가 3자리 숫자인지 검증, 입력된 정수가 중복값을 갖고 있지 않은지 검증, 입력값에 0이 들어가 있는지 검증
*/
int rem;
int validate(int num, int arr[], size_t len_arr)
{
	for (int i = len_arr -1; i >= 0; i--)
	{
		rem = num % 10;
		if (rem == 0)
			return 0; // 입력값 오류
		if (find_value(arr, len_arr, rem) >= 0)
			return 0; // 중복값으로 인한 입력값 오류
		
		arr[i] = rem;

		num /= 10;
	}
	if (num) //num이 존재한다면
		return 0;
	// num의 값이 0이 아니라면 1을 반환
	// num의 값이 0이라면 0을 반환
	// 검증 절차 통과S
	return (num) ? 0 : 1;
}

void clear_array(int arr[], size_t len_arr)
{
	for (int i = 0; i < len_arr; i++)
	{
		arr[i] = 0;
	}
}

void input_user_value(int arr[], size_t len_arr)
{
	int tmp;
	do
	{
		
		printf("숫자를 입력하세요 >>> ");
		scanf("%d", &tmp);
		if (!validate(tmp, arr, 3))
		{
			printf("잘못된 입력이 감지되었습니다. \n");
			
			clear_array(arr, 3);
			
			continue; //반복문의 시작 지점으로 처리를 이동시킴
		}

		
		break;
	} while (1);

}
/*
3스트라이크가 나오면 1을 반환하고 그렇지 않으면 0을 반환
*/

int judge(int coms[], int user[], size_t len)
{
	int s = 0;
	int b = 0;
	int index; 
	for (int i = 0; i < len; i++)
	{
		index = find_value(coms, len, user[i]);
		if (index < 0)
			continue;
		if (index == i)
			++s;
		else
			++b;
	}
	printf("%d 스트라이크, %d 볼\n", s, b);
	
	system("cls");
	_getch();
	return s == 3;
}

int main()
{
	srand(time(NULL)); //난수 발생 초기화

	int hidden[3] = { 0 }; // 컴퓨터가 정할 랜덤한 3자리 수
	int user[3] = { 0 };
	make_num(hidden, 3, 1, 10);
	print_array(hidden, 3);
	int result = 0;
	do
	{

		input_user_value(user, 3);
		print_array(user, 3);

		result = judge(hidden, user, 3);
		clear_array(user, 3);
	} while (!result);

	return 0;
}