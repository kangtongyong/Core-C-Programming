/* ���ϸ�: assignment0701.c

 * ����: ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä��� ���α׷�.(ù ��° ���� ���� ������ �Է¹���)

 * �ۼ���: ������

 * ��¥: 2025.05.28.

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assi01(void);
void A(int aa, int bb);

int main(void)
{
	assi01();

	return 0;
}

int assi01(void)
{
	int a = 0, b = 0;

	printf("ù ��° ��? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);

	A(a, b);

	return 0;
}

void A(int aa, int bb)
{
	int a = aa;
	int i;

	printf("��������: %d ", a);

	for (i = 1; i < 10; i++)
	{
		a += bb;

		printf("%d ", a);
	}

	return;
}