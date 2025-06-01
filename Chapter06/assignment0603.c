/* 파일명: assignment0603.c

 * 내용: 두 점 사이의 직선 거리를 구하는 함수를 작성하시오
		 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double a, double b, double c, double d);

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	double h = 0;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &a, &b);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &c, &d);

	h = distance(a, b, c, d);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf", a, b, c, d, h);

	return 0;
}

double distance(double a, double b, double c, double d)
{
	double e = 0.0;
	double f = 0.0, g = 0.0;

	f = a - c;
	g = b - d;
	e = sqrt(f * f + g * g);

	//e = sqrt((a - c) * (a - c) + (b - d) * (b - d));

	return e;
}