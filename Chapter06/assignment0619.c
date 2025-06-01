/* 파일명: assignment0619.c

 * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 함수를 작성하시오
		 0~9999사이의 임의의 숫자 3개를 생성, 스케일 100으로 그래프로 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void graph(int A, int B);

int main(void)
{
	srand(time(0));

	int a = rand() % 10000;
	int b = rand() % 10000;
	int c = rand() % 10000;
	int d = 100;

	graph(a, d);
	graph(b, d);
	graph(c, d);

	return 0;
}

void graph(int A, int B)
{
	//int e = A / B;
	printf("%d:", A);

	/*for (int i = 0; i <= e; i++)
			printf("*");*/

	while (A >= B)
	{
		printf("*");
		A -= B;
	}
	printf("\n");

	return;
}