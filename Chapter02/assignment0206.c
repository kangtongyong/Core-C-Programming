/* 파일명: assignment0206.c

 * 내용:옷 사이즈를 선택하게 하고 선택된 사이즈를 출력하는 프로그램을 작성하시오.
		옷 사이즈는 S, M, L 세 가지 문자 중 하나로 입력받는다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
// S,M,L 을 제외한 나머지 입력시 어떻게 출력되어야 하는가??
#include <stdio.h> 

int main(void)
{
	char size;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &size);

	printf("%c 사이즈를 선택했습니다.", size);

	return 0;
}