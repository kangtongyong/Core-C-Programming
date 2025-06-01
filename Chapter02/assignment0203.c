/* 파일명: assignment0203.c

 * 내용: 날짜를 연, 월, 일로 입력받아서 출력하는 프로그램을 작성하시오.
		 연, 월, 일은 정수로 입력받는다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
/* scanf 사용시 반드시 #include <stdio.h> 위에
   #define _CRT_SECURE_NO_WARNINGS 사용해야함 */
#include <stdio.h>

int main(void)

{
	int a;
	int b;
	int c;

	printf("연? ");
	scanf("%d", &a);
	printf("월? ");
	scanf("%d", &b);
	printf("일? ");
	scanf("%d", &c);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", a, b, c);

	return 0;
}