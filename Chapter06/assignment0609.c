/* 파일명: assignment0609.c

 * 내용: r,g,b를 인자로 전달해서 rgb색을 만들어 리턴하는 함수를 정의하시오
		 정의한 함수를 이용해서 입력받은 색상의 보색을 구해서 출력하는 프로그램을 작성하시오

 * 작성자: 202511224 양현인

 * 날짜: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(int A);

int main(void)
{
	int a, b;

	printf("RGB 색상? ");
	scanf("%x", &a);

	b = a;
	a = make_rgb(a);

	printf("RGB %X의 보색: %06X", b, a);

	return 0;
}

int make_rgb(int A)
{
	A = A & 0x00FFFFFF;

	int a = 0, b, c, d;

	b = (A >> 16) & 0xff;
	c = (A >> 8) & 0xff;
	d = A & 0xff;

	int R, G, B;

	R = b - 0xff;
	G = 0xff - c;
	B = 0xff - d;

	a = (R << 16) | (G << 8) | B;

	return a;
}