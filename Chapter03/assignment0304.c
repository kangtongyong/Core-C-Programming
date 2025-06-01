/* 파일명: assignment0304.c

 * 내용: 물체에 작요한 힘의 크기와 힘의 방향으로 이동한 거리를 
		 입력받아 한 일의 양을 구하는 프로그램을작성하시오.
		 힘의 크기는 N 단위로, 이동한 거리는 m 단위로 입력받는다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pte(void);

int main(void)
{
	pte();

	return 0;
}

void pte(void)
{
	float power = 0;
	float movement = 0;

	printf("힘(N)? ");
	scanf("%f", &power);
	printf("이동거리(m)? ");
	scanf("%f", &movement);

	printf("일의 양: %.2f J", power * movement);

	return;
}
