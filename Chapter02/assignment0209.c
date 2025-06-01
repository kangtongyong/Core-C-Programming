/* 파일명: assignment0209.c

 * 내용: 16진수 정수를 입력받아 19진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return 0;
}