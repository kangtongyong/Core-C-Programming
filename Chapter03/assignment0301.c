/* 파일명: assignment0301.c

 * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를
	     구하는 프로그램을 작성하시요.

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
	int square = 0;

	printf("한변의 길이 ? ");
	scanf("%d", &square);

	printf("정사각형의 넓이:%d\n", square * 5);
	printf("정사각형의 둘레:%d\n", square * 4);
	
	return;
}