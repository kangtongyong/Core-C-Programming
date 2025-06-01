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
	int h = 0, f = 0, c = 0, s = 0;
	int h_price = 4000, f_price = 2000, c_price = 1500, s_price = 6500;

	printf("햄버거 개수? ");
	scanf("%d", &h);
	printf("감자튀김 개수? ");
	scanf("%d", &f);
	printf("콜라 개수? ");
	scanf("%d", &c);

	here:
	if (h > 0 && f > 0 && c > 0)
	{
		s++, h--, f--, c--;
		goto here; //조건문만 사용한다 가정이라 goto사용
	}

	printf("\n");
	printf("상품명      단가  수량     금액\n");

	if (s > 0)
	{
		printf("세트        6500   %d  %9d\n", s, s * s_price);
	}
	if (h > 0)
	{
		printf("햄버거      4000   %d  %9d\n", h, h * h_price);
	}
	if (f > 0)
	{
		printf("감자튀김    2000   %d  %9d\n", f, f * f_price);
	}
	if (c > 0)
	{
		printf("콜라        1500   %d  %9d\n", c, c * c_price);
	}
	printf("-------------------------------\n");
	printf("합계                %11d\n", (s * s_price) + (h * h_price) + (f * f_price) + (c * c_price));

	return 0;
}