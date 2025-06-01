/* 파일명: assignment0204.c

 * 내용: 시간을 시, 분, 초로 입력받아서 출력하는 프로그램을 작성하시오. 
         예를 들어 1시 1분 1초는 "01:01:01"로 출력한다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	int a;
	int b;
	int	c;

	printf("시? ");
	scanf("%d", &a);
	printf("분? ");
	scanf("%d", &b);
	printf("초? ");
	scanf("%d", &c);

	//%02d 에서 0은 빈자리를 0으로 출력, 2는 전체 문자폭을 2자리로 출력
	printf("입력한 시간은  %02d:%02d:%02d입니다.", a, b, c);

	return 0;
}