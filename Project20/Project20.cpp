
#include "Header20.h"



//함수의 원형 정의, 함수를 호출하는 쪽에 정보를 제공하기 위함








int main()
{
	SCORE sc;

	SCORE arr[10];

	save_text("test.txt");
	

	printf("%d\n", get_size("test.txt"));

	load_text("test.txt");

	//input_s(&sc);	//sc에 입력을 받아옴
	//print_s(&sc); //sc에 입력된 값을 출력함


	return 0;
}

