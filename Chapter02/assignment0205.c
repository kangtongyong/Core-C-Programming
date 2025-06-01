/* 파일명: assignment0205.c

 * 내용:몸무게를 입력받아서 출력하는 프로그램을 작성하시오.
		몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Weight;

	printf("몸무게? ");
	scanf("%f", &Weight);


	/* %.2f 에서 .2는 소수점 2자리 출력하라는 뜻,
	   %8.4f 에서 8은 문자폭을 8로 출력, 4는 소수점자리를 4자리 출력*/
	printf("입력한 몸무게는 %.2f입니다.", Weight);
	return 0;
}