/* ���ϸ�: assignment0609.c

 * ����: r,g,b�� ���ڷ� �����ؼ� rgb���� ����� �����ϴ� �Լ��� �����Ͻÿ�
		 ������ �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(int A);

int main(void)
{
	int a, b;

	printf("RGB ����? ");
	scanf("%x", &a);

	b = a;
	a = make_rgb(a);

	printf("RGB %X�� ����: %06X", b, a);

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