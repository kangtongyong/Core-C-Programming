/* ���ϸ�: assignment0306.c

 * ����: ����Ʈ�� ������ ��������(m2^2)�� �Է¹޾� 
		 �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	


void meter(void);

int main(void)
{
	meter();

	return 0;
}

void meter(void)
{
	float area = 0;

	printf("����Ʈ�� ����(��������)? ");
	scanf("%f", &area);

	printf("113.00 �����̳� = %.2f ��", (area * 0.3025));

	return;
}