/* ���ϸ�: assignment0417.c

 * ����: 32��Ʈ ũ���� �����͸� ���� 
		 7,15,23,31��° ��Ʈ�� 1�� ���� ���ؼ� ����ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

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

	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", a, a);
	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", b, b);
	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", c, c);
	printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", d, d);

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