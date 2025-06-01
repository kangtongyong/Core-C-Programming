/* 파일명: assignment0202.c

 * 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오.
		 학생의 번호는 정수로, 학점은 실수로 입력받는다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.03.31

 */

#define _CRT_SECURE_NO_WARNINGS
/* scanf 사용시 반드시 #include <stdio.h> 위에 
   #define _CRT_SECURE_NO_WARNINGS 사용해야함 */
#include <stdio.h>

int main(void)
{
	int num;
	float x;

	printf("번호? ");
	scanf("%d", &num);
	printf("학점? ");
	scanf("%f", &x);


	printf("%d번 학생의 학점은 %f입니다. ", num, x);

	return 0;
}