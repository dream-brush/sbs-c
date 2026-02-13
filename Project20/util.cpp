
#include "Header20.h"




char get_grade(float avg)
{
	int tmp = (int)avg / 10;
	switch (tmp)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;

	}
}

void input_s(SCORE* psc)
{
	if (psc == NULL)
		return;

	// 문자열 입력을 쉽게 받기 위하여 모든 자리를 0으로 채워둔다.
	memset(psc, 0, sizeof(SCORE));
	printf("이름을 입력하세요 >>> ");
	//공백 입력 가능한 입력함수는?
	fgets(psc->name, MAX_NAME, stdin);
	int len = strlen(psc->name);
	psc->name[len - 1] = '\0'; //enter key code가 입력된 자리에 null terminated 문자를 넣어서 마감해준다.

	printf("국어 점수를 입력하세요 >>>");
	scanf("%d", &(psc->kor));

	printf("영어 점수를 입력하세요 >>>");
	scanf("%d", &(psc->eng));

	printf("수학 점수를 입력하세요 >>>");
	scanf("%d", &(psc->math));

	psc->total = psc->kor + psc->eng + psc->math;

	psc->avg = psc->total / 3.f;

	psc->grade = get_grade(psc->avg);
}

void print_s(SCORE* psc)
{
	if (psc == NULL)
		return;
	printf("이름 : %s\n", psc->name);
	printf("점수 : 국어(%d), 영어(%d), 수학(%d),\n", psc->kor, psc->eng, psc->math);
	printf("총점 : %d\n", psc->total);
	printf("평균 : %.2f\n", psc->avg);
	printf("등급 : %c\n", psc->grade);

}



void save_text(const char* filename)
{
	if (!filename)
		return;
	FILE* fp = NULL; //파일 핸들

	//fopen mode
	// "r" : read mode, 파일을 읽기위해 오픈한다. 파일이 없으면 에러
	// "w" : write mode, 파일을 저장하기 위해 오픈한다. 파일을 항상 새파일로 만든다.
	// "a" : append mode, 파일을 저장하기 위해 오픈한다. 기존 데이터에 추가로 저장하기 위해 오픈한다. 파일이 없으면 새 파일을 만듬

	//"b" : binary file을 읽고 쓰기 위함
	//"t" : text file을 읽고 쓰기 위함

	//:"r+" : 읽고쓰기 모드, rw


	fp = fopen(filename, "wt");

	const char* sz1 = "Hello, World\n";
	const char* sz2 = "Welcome to my house\n";
	const char* sz3 = "Good Bye, See you\n";

	// element_size : 저장할 데이터의 단위 크기
	// element_count : 저장할 데이터의 개수

	fwrite(sz1, sizeof(char), strlen(sz1), fp);
	fwrite(sz2, sizeof(char), strlen(sz2) , fp);
	fwrite(sz3, sizeof(char), strlen(sz3) , fp);

	fclose(fp);
}

long get_size(const char* filename)
{
	if (!filename)
		return 0;
	FILE* fp = NULL; //파일 핸들


	fp = fopen(filename, "r");

	if (!fp)
	{
		printf("파일을 찾을 수 없습니다.\n");
		return 0;
	}



	//offset: 이동시킬거리
	//origin : 기준점, 여기서부터 offset 만큼 이동함
	//SEEK_SET : BOF, BEGIN OF FILE, 파일의 시작점
	//SEEK_CUR : 현재 커서의 위치
	//SEEK_END : EOF, End Of File, 파일의 끝점

	fseek(fp, 0, SEEK_END); //파일의 마지막 지점부터 0만큼 이동 ==> 커서를 EOF지점으로 이동시킴
	// 내 커서의 위치 알려줘
	long loc = ftell(fp);

	fclose(fp);

	return loc;
}



void load_text(const char* filename)
{
	if (!filename)
		return;
	long SIZE = get_size(filename);
	if (!SIZE)
		return;


	FILE* fp = NULL; //파일 핸들


	fp = fopen(filename, "rt");


	if (!fp)
	{
		printf("파일을 찾을 수 없습니다.\n");
		return;
	}
	// 파일의 크기를 구할 수 있는방법
	// 그 만큼의 메모리를 확보할 방법



	char* buf = (char*)malloc(SIZE);
	if (!buf)
	{
		fclose(fp);
		return;
	}

	memset(buf, 0, SIZE);
	// element_size : 저장할 데이터의 단위 크기
	// element_count : 저장할 데이터의 개수

	fread(buf, sizeof(char), SIZE, fp);
	
	printf("%s\n", buf);

	fclose(fp);



	if (buf)
	{
		free(buf);
		fp = NULL;
	}

}