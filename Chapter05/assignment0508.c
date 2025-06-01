/* 파일명: assignment0508.c

 * 내용: 비트 연산을 수행하는 계산기를 프로그래밍 하시오
		 (&, |, ^) 입력 10, 8, 16진수를 결과출력 16진수

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a;
	long b = 0, c = 0;

	printf("비트 연산식? ");
	scanf("%i %c %i", &b, &a, &c);


	switch (a)
	{
	case '&':
		printf("%X %c %X = %X", b, a, c, b & c);
		break;
	case '|':
		printf("%X %c %X = %X", b, a, c, b | c);
		break;
	case '^':
		printf("%X %c %X = %X", b, a, c, b ^ c);
		break;
	default:
		printf("비트 연산자를 사용해 주세요.\n");
		break;
	}


	return 0;
}