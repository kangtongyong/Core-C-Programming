/* 파일명: assignment0606.c

 * 내용: 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 함수를 작성하시오
		 잘못된 번호를 선택하면 다시 선택받고, 함수는 반드시 0~3사이의 값을 리턴해야 한다
		 함수의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);

int main(void)
{
	int b;

	while (1)
	{
		b = choose_menu();

		if (b == 0)
		{
			break;
		}

		if (b == 1)
		{
			printf("파일 열기를 수행합니다.\n");
		}

		if (b == 2)
		{
			printf("파일 저장을 수행합니다.\n");
		}

		if (b == 3)
		{
			printf("인쇄를 수행합니다.\n");
		}
	}
	return 0;
}
int choose_menu(void)
{
	int a;

	while (1)
	{
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0/종료] 선택? ");
		scanf("%d", &a);

		if (a >= 0 && a <= 3)
		{
			return a;
		}
	}
}