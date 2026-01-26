#include <stdio.h>
#define COUNT 10			//매크로 상수
const int STAR = 50; //상수 선언

int main()
{
	int i = 0;
	
	while (i < STAR)
	{
		int row = 0;

		while (row < STAR)
		{
			printf("*");
			row++;
		}
		printf("\n");
		i++;
	}





	return 0;
}