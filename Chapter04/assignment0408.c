/* ���ϸ�: assignment0408.c

 * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0408(void);
double Volume(double r);

int main(void)
{
	ass0408();

	return 0;
}

int ass0408(void)
{
	double radius = 0.0, volume = 0.0;

	printf("�������� ����? ");
	scanf("%lf", &radius);

	volume = Volume(radius);

	printf("���� ����: %f", volume);

	return 0;
}

double Volume(double r)
{
	double sum = 0.0;

	sum = (4.0 / 3.0) * 3.141592 * (r * r * r);

	return sum;
}