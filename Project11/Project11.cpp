#include <stdio.h>
int main()
{
	// for 반복문
	/*
	for( 초기식; 조건식; 증감식)
	{
		//반복실행할 명령문
	}
	
	
	*/
	/*int i = 0;
	while (i < 10)
	{
		printf("i = %d\n", i);
		i++;
	}*/
	/*for (int i = 0; i < 10; i++)
	{
		printf("i = %d\n", i);
	}*/

	//for (반복 진입하면서 처음에 무조건 한번만 실행할 명령문(들);처음부터 매 반복시 실행될 명령문(들), 이 결과가 0이면 반복종료; 1회 반복이후부터 매 반복시 실행될 명령문); // 무한 반복 for문

	for (int i = 0; i < 5; printf("%d\n", i++))
	{

	}
	printf("\n");
	for (int i = 2; i <= 10; i += 2)
	{
		printf("%d\t", i);
	}
	printf("\n");

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}

	printf("\n");

	for (char ch = 'z'; ch >= 'a'; ch--)
	{
		printf("%c", ch-32);
	}


	printf("\n");

	for (int i = 0; ; i++)
	{
		if (i >= 10)
			break;
		printf("%d\n", i);
	}

	return 0;

}