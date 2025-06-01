/* 파일명: assignment0601.c

 * 내용: 가로, 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 함수를 작성하시오
		 둘레를 구하는 함수를 이용해서 입력받은 가로, 세로의 길이로 
		 직사각형의 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int a, int b);

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("가로? ");
	scanf("%d", &a);
	printf("세로? ");
	scanf("%d", &b);

	c = get_perimeter(a, b);

	printf("직사각형의 둘레: %d", c);

	return 0;
}

int get_perimeter(int a, int b)
{
	int c = 0;

	c = (a * 2) + (b * 2);

	return c;
}