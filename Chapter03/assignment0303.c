/* 파일명: assignment0303.c

 * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
		 질량은 kg 단위, 놓이를 m 단위로 입력받는다

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
	int mass = 0;
	int elevation = 0;

	printf("질량(kg)? ");
	scanf("%d", &mass);
	printf("높이(m)? ");
	scanf("%d", &elevation);

	printf("위치에너지: %3.6f J", 9.8 * mass * elevation);

	return;
}
