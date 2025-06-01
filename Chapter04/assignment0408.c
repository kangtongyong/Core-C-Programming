/* 파일명: assignment0408.c

 * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0408(void);
double Volume(double r);

int main(void)
{
	ass0408();

	return 0;
}

int ass0408(void)
{
	double radius = 0.0, volume = 0.0;

	printf("반지름의 길이? ");
	scanf("%lf", &radius);

	volume = Volume(radius);

	printf("구의 부피: %f", volume);

	return 0;
}

double Volume(double r)
{
	double sum = 0.0;

	sum = (4.0 / 3.0) * 3.141592 * (r * r * r);

	return sum;
}