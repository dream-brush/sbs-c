#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 전역변수 (Glboal Variable)
int g_num = 0;

char* hello()
{
	//static
	static char sz[] = "Hello World";

	static int i = 0;
	i++;

	return sz;
}

int calc(int n1, int n2)
{
	int n3 = n1 + n2;
	return n3;
}

void dummy()
{
	char arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = 'A';
}

// void : 없다
// void* : 있지만 타입을 모른다 / 주소이므로 8바이트 / 와일드카드




char* to_upper_case(const char* str)
{
	int bytes = strlen(str) + 1;
	// malloc( 할당받을 메모리의 크기를 바이트 단위로 지정)
	// 메모리 할당 실패시 NULL을 반환한다.
	char* new_sz = (char*)malloc(bytes); // heap 공간에 bytes만큼 할당요청 ( 실패 가능성도 존재)
	if (!new_sz)
		//메모리 할당 실패
		return NULL;

	for (int i = 0; i < bytes; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			new_sz[i] = str[i] - 32;
		else
			new_sz[i] = str[i];
	}
	return new_sz;
}

// 함수의 이름은 copy_array
// int형 배열
// 배열의 길이
// 반환값 : 힙에 할당받은 int형 복사된 배열의 주소
int* copy_array(int arr[], size_t len_arr)
{
	size_t bytes = sizeof(int) * len_arr;
	int* new_arr = (int*)malloc(bytes);
	if (!new_arr)
		return NULL;
	
	for (int i = 0; i < len_arr; i++)
	{
		new_arr[i] = arr[i];
	}


	return new_arr;

	
}

void print_array(int arr[], size_t len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{

	char src[] = "hello world"; 

	// src 문자열을 전달하여, src의 내용을 모두 대문자로 변환하고
	// 변환된 문자열을 반환하는 함수를 정의 하세요.
	// 이때 src 문자열은 원본을 그대로 유지해야하고
	// 반환된 문자열만 대문자로 반환되어야합니다.



	char* str = to_upper_case(src);
	dummy();

	printf("%s\n", str);

	if (str)
	{
		free(str);
		str = NULL;
	}

	int arr[] = { 10, 20, 30, 40, 50 };
	int* parr = copy_array(arr, 5);

	if (parr)
	{
		print_array(parr, 5);
		free(parr);
		parr = NULL;
	}
	return 0;
}
