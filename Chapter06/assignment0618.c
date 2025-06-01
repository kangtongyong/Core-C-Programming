/* 파일명: assignment0618.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 함수를 작성하시오
		 0~999사이의 임의의 정수 3개 생성, 함수를 이용해서
		 각각의 약수를 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int A);

int main(void)
{
	srand(time(0));

	int a = rand() % 1000;
	int b = rand() % 1000;
	int c = rand() % 1000;

	divisors(a);
	divisors(b);
	divisors(c);

	return 0;
}

void divisors(int A)
{
	int d = 0;
	int e = 0;

	printf("%d의 약수: ", A);

	for (int i = 1; i <= A; i++)
	{
		if (A % i == 0)
		{
			d = i;
			printf("%d ", d);
			e++;
		}

	}

	printf("=> 총 %d개\n", e);

	return;
}