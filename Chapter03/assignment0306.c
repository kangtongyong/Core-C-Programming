/* 파일명: assignment0306.c

 * 내용: 아파트의 면적을 제곱미터(m2^2)로 입력받아 
		 몇 평인지 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	


void meter(void);

int main(void)
{
	meter();

	return 0;
}

void meter(void)
{
	float area = 0;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &area);

	printf("113.00 제곱미너 = %.2f 평", (area * 0.3025));

	return;
}