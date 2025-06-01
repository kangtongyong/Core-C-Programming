/* 파일명: assignment0208.c

 * 내용: 실수 2개를 입력받아서 합과 차를 구해서 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* 
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	*/
	float num1;
	float num2;
	// float num3;



	printf("실수 2개? ");
	scanf("%f %f", &num1, &num2);

	// num3 = num1 + num2;

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f", num1, num2, num1 - num2);

	// printf("%f + %f = %f\n", num1, num2, num3);
	/*
	메모리에 있는거를 cpu로 옮겨와야한다
	num3 = num3 + 111
	*/

	return 0;
}