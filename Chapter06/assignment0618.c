/* ���ϸ�: assignment0618.c

 * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ��� �ۼ��Ͻÿ�
		 0~999������ ������ ���� 3�� ����, �Լ��� �̿��ؼ�
		 ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int A);

int main(void)
{
	srand(time(0));

	int a = rand() % 1000;
	int b = rand() % 1000;
	int c = rand() % 1000;

	divisors(a);
	divisors(b);
	divisors(c);

	return 0;
}

void divisors(int A)
{
	int d = 0;
	int e = 0;

	printf("%d�� ���: ", A);

	for (int i = 1; i <= A; i++)
	{
		if (A % i == 0)
		{
			d = i;
			printf("%d ", d);
			e++;
		}

	}

	printf("=> �� %d��\n", e);

	return;
}