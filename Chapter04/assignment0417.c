/* 파일명: assignment0417.c

 * 내용: 32비트 크기의 데이터를 각각 
		 7,15,23,31번째 비트만 1인 값을 구해서 출력하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

*/

#include <stdio.h>

int assi0417(void);
int calculate1(int a);
int calculate2(int b);
int calculate3(int c);
int calculate4(int d);

int main(void)
{
	assi0417();
	return 0;
}

int assi0417(void)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int c = 1;
	unsigned int d = 1;

	a = calculate1(a);
	b = calculate2(b);
	c = calculate3(c);
	d = calculate4(d);

	printf("7번 비트만 1인 값: %08x %d\n", a, a);
	printf("15번 비트만 1인 값: %08x %d\n", b, b);
	printf("23번 비트만 1인 값: %08x %d\n", c, c);
	printf("31번 비트만 1인 값: %08x %d\n", d, d);

	return 0;
}

int calculate1(int a)
{
	unsigned int A = 1;

	A = A << 7;

	// return 1 << 7;
	return A;
}
int calculate2(int b)
{
	unsigned int B = 1;

	B = B << 15;

	// return 1 << 15;
	return B;
}
int calculate3(int c)
{
	unsigned int C = 1;

	C = C << 23;

	// return 1 << 23;
	return C;
}
int calculate4(int d)
{
	unsigned int D = 1;

	D = D << 31;

	// return 1 << 31;
	return D;
}