
#include <stdio.h>]

void display_array()
{

}


int main()
{
	int* p;		//8바이트
	char sz[100];
	int n=5;
	printf("n의 주소 : %p\n", &n);
	int arr[100]; // 배열은 곧 주소이다.
	printf("arr의 주소 : %p\n", arr);
	printf("arr의 주소 : %p\n", &arr[0]);

	p = arr;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	
	printf("arr[5] = %d\n", p[5]);

	return 0;
}