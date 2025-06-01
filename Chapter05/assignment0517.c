/* 파일명: assignment0517.c

 * 내용: 주차 시간을 분으로 입력받아 요금 계산후 출력하는 프로그램
	     최초 30 = 2000, 이후 10분마다 1000증가, 주차시간은 24시간 넘을수 없다 가정

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

again:
	printf("주차 시간(분)? ");
	scanf("%d", &a);


	if (a > 1440) // 개인 추가 조건 
	{
		printf("주차시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
		goto again; //조건문만 사용한다 가정이라 goto사용
	}

	if (a <= 30)
	{
		printf("주차 요금: %d\n", 2000);
	}

	if (a > 30 && a <= 1440)
	{
		if ((b = 2000 + (((a - 30) + 9) / 10) * 1000) > 25000)
		{
			printf("주차 요금: %d\n", 25000);
		}
		else
		{
			printf("주차 요금: %d\n", b);
		}
	}
	

	return 0;
}