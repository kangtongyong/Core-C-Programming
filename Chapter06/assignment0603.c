/* ���ϸ�: assignment0603.c

 * ����: �� �� ������ ���� �Ÿ��� ���ϴ� �Լ��� �ۼ��Ͻÿ�
		 �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double a, double b, double c, double d);

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	double h = 0;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &a, &b);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &c, &d);

	h = distance(a, b, c, d);

	printf("(%d, %d)~(%d, %d) ������ ����: %lf", a, b, c, d, h);

	return 0;
}

double distance(double a, double b, double c, double d)
{
	double e = 0.0;
	double f = 0.0, g = 0.0;

	f = a - c;
	g = b - d;
	e = sqrt(f * f + g * g);

	//e = sqrt((a - c) * (a - c) + (b - d) * (b - d));

	return e;
}