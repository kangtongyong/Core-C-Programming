/* 파일명: assignment0605.c

 * 내용: 인자로 전달받은 정수가 짝수인지 검사하는 함수와 홀수인지 검사하는 함수를 작성하시오
		 두 함수를 이용해서 0이 입력될 떄까지 입력된 정수들에 대해서
		 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int A);
int is_odd(int B);

int main()
{
	int a = 0;
	int e = 0, f = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	for (;;)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}
		if (is_even(a))
		{
			++e;
		}
		else if (is_odd(a))
		{
			++f;
		}
	}
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", e, f);

	return 0;
}

int is_even(int A)
{
	return (A % 2 == 0);
}

int is_odd(int B)
{
	return (B % 2 != 0);
}