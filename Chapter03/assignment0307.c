/* ���ϸ�: assignment0307.c

 * ����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� 
		 ���α׷��� �ۼ��Ͻÿ�.
		 �Է��� �Ҽ�, ���� ǥ�� ��� �� �� ���,
		 ����� ���� ǥ�� ������� ���.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void number(void);

int main(void)
{
	number();

	return 0;
}

void number(void)
{
	float sum = 0;

	printf("�Ǽ�? ");
	scanf("%e", &sum);

	printf("����: %e\n", sum * sum);
	printf("������: %e\n", sum * sum * sum);

	return;
}