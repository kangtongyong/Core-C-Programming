/* 파일명: assignment0207.c

 * 내용:커피사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
		커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
// S,T,G 을 제외한 나머지 입력시 어떻게 출력되어야 하는가??       
// 질문(파일명 1번 5번 바꾸는법)
#include <stdio.h>

int main(void)
{
	char size;
	int num;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &num);

	printf("%c 사이즈 %d잔을 주문합니다.", size, num);

	return 0;
}