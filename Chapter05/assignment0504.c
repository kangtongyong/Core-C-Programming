/* 파일명: assignment0504.c

 * 내용: 연도를 입력받아 윤년인지 검사하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("연도? ");
	scanf("%d", &a);


	if (a % 4 == 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
			{
				printf("%d년은 윤년입니다\n", a);
			}
			else
			{
				printf("%d년은 윤년이 아닙니다\n", a);
			}
		}
		else
		{
			printf("%d년은 윤년입니다\n", a);
		}
	}
	else
	{
		printf("%d년은 윤년이 아닙니다\n", a);
	}

	return 0;
}