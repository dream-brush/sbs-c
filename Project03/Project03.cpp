#define _CRT_SECURE_NO_WARNINGS
//위의 내용을 정의하면 _s 시리즈 함수를 사용해도 에러가 발생하지 않음.


#include <stdio.h>

int main()
{
	// 기본 입력문
	short n;
	scanf("%hd\n", &n);


	//error의 종류 : 컴파일에러(문법 에러), 런타임 에러, 논리적인 에러(노답임)

	/*
	git: 코드(문서), 버전관리 툴(소프트웨어)
	 repasitory
     local repasitory
	 remote repasitory

	github

	git config --global user.name ""
	git config --global user.email ""
	git add . --> on stage
	git commit -m "" --> milestone 
	git log --> milestone record
	git remote add origin "https://github.com/dream-brush/sbs-c.git" --> origin이라는 이름의 remote repository 제작
	https://github.com/dream-brush/sbs-c.git
	git remote --> 연결된 원격 레포지토리 확인
	git push -u origin main --> 업로드
	git clone --> 만약 .git파일이 없을때 사용, 받아오기
	git pull --> .git이 있을때 사용, 받아오기
	git push --> remote 되어 있을때 업로드
	*/
	return 0;
}