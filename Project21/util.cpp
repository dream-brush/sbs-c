#include "project21.h"

void show_menu()
{
	system("cls"); // 콘솔화면 클리어
	printf("1. 점수 입력\n");
	printf("2. 점수 출력\n");

	printf("3. 점수 수정\n");

	printf("4. 점수 삭제\n");
	printf("============\n");
	printf("x. 종료\n");
	printf("============\n");


}

char select_menu()
{
	int menu;
	do
	{
		printf("메뉴를 선택하세요 >>>");
		menu = _getch();
		
		
	

		if (menu >= '1' && menu <= '4')
			return (char)menu;


		if (menu == 'x' || menu == 'X')
			return 'x'; // x가 입력되면 프로그램 종료

		printf("잘못 입력했습니다, 다시입력해주세요.\n");

	} while (1);

	return 0;


}

size_t input(SCORE** ppScores, size_t count)
{
	if (!ppScores)
	{
		printf("잘못된 호출입니다.");
		return count;
	}
	//printf("SCORE 구조체의 크기 : %llubytes\n", sizeof(SCORE));
	system("cls");
 

	SCORE sc; //입력을 처리할 임시변수

	printf("번호를 입력하세요 >>>");
	scanf("%d", &(sc.num));

	char tmp;
	scanf("%c", &tmp);

	printf("이름을 입력하세요 >>>");
	fgets(sc.name, MAX_NAME, stdin); //공백 포함 문자열 입력받기
	sc.name[strlen(sc.name) - 1] = '\0'; // 입력된 엔터키 (\n) 제거하기


	printf("국어, 영어, 수학의 점수를 차례로 입력하세요 >>>");
	scanf("%d %d %d", &(sc.kor), &(sc.eng), &(sc.math));

	//total 구하기
	sc.total = sc.kor + sc.eng + sc.math;
	sc.avg = sc.total / 3.f;

	sc.grade = get_grade(sc.avg); // 등급 구하기

	//배열 생성하기
	size_t new_count = count + 1; //1개 입력처리를 해야 하므로 기존 개수보다 1개 더 많아야함
	size_t new_size = sizeof(SCORE) * new_count; //새로운 배열의 크기(바이트 단위)를 구함
	size_t old_size = sizeof(SCORE) * count;
	//Heap 영역에 배열을 새롭게 생성한다.
	SCORE* pnew = (SCORE*)malloc(new_size);
	if (!pnew)
	{
		return count;
	}

	//기존 배열을 새 배열에 모두 복사
	SCORE* pOldscore = *ppScores;
	if (pOldscore)
	{
		memcpy(pnew, pOldscore, old_size);
		free(pOldscore); //기존 배열 삭제하기.

	}
	//입력받은 데이터를 새로운 배열에 복사하기
	memcpy(pnew + count, &sc, sizeof(SCORE));

	//배열 주소 업데이트
	*ppScores = pnew;

	return new_count;
}

void print(const SCORE* pScores, size_t count)
{
	if (!pScores)
	{
		printf("점수 데이터 출력 실패");
		return;
	}
	system("cls");
	printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d\t", pScores[i].num);
		printf("%s\t", pScores[i].name);
		printf("%d\t", pScores[i].kor);
		printf("%d\t", pScores[i].eng);
		printf("%d\t", pScores[i].math);
		printf("%d\t", pScores[i].total);
		printf("%.2f\t", pScores[i].avg);
		printf("%c\n", pScores[i].grade);
	}
}

void wait()
{
	printf("\n\n계속하려면 아무키나 입력하세요...\n");
	_getch();
}

int find_sc(SCORE* pScores, size_t count, uint num)
{
	for (int i = 0; i < count; i++)
	{
		if (pScores[i].num == num)
			return i;
	}
	return -1;
}

void select_update(SCORE* pScores, size_t count)
{
	print(pScores, count);

	printf("=========================\n");
	int idx = -1;
	do
	{
		uint num;
		printf("수정하고자 하는 번호를 입력하세요 >>>");
		scanf("%d", &num);
		idx = find_sc(pScores, count, num);

	} while (idx == -1);
	char tmp;
	scanf("%c", &tmp);
	printf("번호 : %d\t", pScores[idx].num);
	printf("이름 : %s\t", pScores[idx].name);
	printf("점수(국,영,수) : %3d %3d %3d\n", pScores[idx].kor, pScores[idx].eng, pScores[idx].math);
	
	printf("총점 : %3d\t", pScores[idx].total);
	printf("평균 : %.2f\t", pScores[idx].avg);
	printf("등급 : %c\n", pScores[idx].grade);

	printf("=========================\n");


	
	printf("이름을 입력하세요 >>>");
	fgets(pScores[idx].name, MAX_NAME, stdin); //공백 포함 문자열 입력받기
	pScores[idx].name[strlen(pScores[idx].name) - 1] = '\0'; // 입력된 엔터키 (\n) 제거하기


	printf("국어, 영어, 수학의 점수를 차례로 입력하세요 >>>");
	scanf("%d %d %d", &(pScores[idx].kor), &(pScores[idx].eng), &(pScores[idx].math));

	//total 구하기
	pScores[idx].total = pScores[idx].kor + pScores[idx].eng + pScores[idx].math;
	pScores[idx].avg = pScores[idx].total / 3.f;

	pScores[idx].grade = get_grade(pScores[idx].avg); // 등급 구하기



}