/* 파일명: assignment0307.c

 * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 
		 프로그램을 작성하시오.
		 입력은 소수, 지수 표기 방법 둘 다 사용,
		 출력은 지수 표기 방법으로 출력.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void number(void);

int main(void)
{
	number();

	return 0;
}

void number(void)
{
	float sum = 0;

	printf("실수? ");
	scanf("%e", &sum);

	printf("제곱: %e\n", sum * sum);
	printf("세제곱: %e\n", sum * sum * sum);

	return;
}