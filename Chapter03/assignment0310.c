/* 파일명: assignment0310.c

 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dollar(void);

int main(void)
{
	dollar();

	return 0;
}

void dollar(void)
{
	float money = 0;
	float cash = 0;

	printf("USD? ");
	scanf("%f", &money);
	printf("원/달러 환율? ");
	scanf("%f", &cash);

	printf("USD %.2f = KRW %.2f ", money, money * cash);

	return;
}