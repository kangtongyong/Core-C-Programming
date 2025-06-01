/* 파일명: assignment0505.c

 * 내용: 온도를 입력받아 섭씨는 화씨로, 화씨는 섭씨로
	     변환하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b;
	double u = 0.0, c = 0.0, f = 0.0;

	printf("온도 ? ");
	scanf("%lf %c", &u, &a);

	// 기존 조건은 a == 'C'이나 소문자도 같이 포함하도록 조건 추가
	if (a == 'C' || a == 'c')
	{
		c = u;
		b = 'F';
		printf("%.2lf %c ==> %.2lf %c\n", c, a, c * (9.0 / 5) + 32, b);
	}
	if (a == 'F' || a == 'f')
	{
		f = u;
		b = 'C';
		printf("%.2lf %c ==> %.2lf %c\n", f, a, (f - 32) * (5.0 / 9.0), b);
	}


	return 0;
}