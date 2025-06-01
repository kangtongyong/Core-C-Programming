/* 파일명: assignment0302.c

 * 내용:가로의 길이와 세로의 길이를 입력받아 
		직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(void);

int main(void)
{
	square();

	return 0;
}


void square(void)
{
	int square1 = 0;
	int square2 = 0;

	printf("가로의 길이? ");
	scanf("%d", &square1);
	printf("세로의 길이? ");
	scanf("%d", &square2);

	/*
	위의 코드 4줄 이랑
	==
	printf("가로의 길이?\n");
	printf("세로의 길이? ");
	scanf("%d %d", &square1, &square2);

	*/

	printf("직사각형의 넓이: %d\n", square1 * square2);
	printf("직사각형의 둘레: %d\n", (square1 + square2) * 2);

	return;
}