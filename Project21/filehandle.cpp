#include "project21.h"

long get_file_size(const char* filename)
{
	if (!filename)
	{
		printf("파일명은 주어져야 합니다");
		return -1;
	}
	FILE* fp = NULL;
	fp = fopen(filename, "rb");
	if (!fp)
	{
		printf("파일을 열수 없습니다");
		return -1;
	}
	//커서를 파일의 끝으로 이동시킨다.
	fseek(fp, 0, SEEK_END);
	long size = ftell(fp); // 현재 커서의 위치를 알려줌 ===> 파일의 끝에서 커서의 위치는 파일의 크기와 같다
	if (fp)
	{
		fclose(fp);
		fp = NULL;
	}

	return size;
}


void save(const SCORE* score)
{
	if (!score) // score == NULL
	{
		printf("score가 NULL입니다. \n"); //debug 용도
		return;
	}
	// 파일 핸들 변수를 초기화한다.
	FILE* fp = NULL;
	fp = fopen("score.dat", "wb"); //wb  :  binary 파일 write(저장)

	if (!fp)
	{
		printf("score.dat 파일을 열 수 없습니다.\n");
		return;
	}
	fwrite(score, sizeof(SCORE), 1, fp);


	if (fp)
	{
		fclose(fp);
		fp = NULL;
	}
}



SCORE* load()
{
	long size = get_file_size(FILE_NAME);
	if (size <= 0)
	{
		printf("저장된 데이터가 없습니다.\n");
		return NULL;
	}
	FILE* fp = NULL;
	fp = fopen(FILE_NAME, "rb"); //rb  :  binary 파일 read(읽기)

	if (!fp)
	{
		printf("score.dat 파일을 열 수 없습니다.\n");
		return NULL; //파일을 열 수 없다면 바로 종료
	}
	
	// 동적 메모리 할당
	SCORE* score = (SCORE*)malloc(size);
	if (!score)
	{
		printf("메모리 할당 실패 \n");
		if (fp)
		{
			fclose(fp);
			fp = NULL;
		}

		return NULL;
	}

	fread(score, size, 1, fp);


	if (fp)
	{
		fclose(fp);
		fp = NULL;
	}

	return score;



}