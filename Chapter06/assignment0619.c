/* ���ϸ�: assignment0619.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� �Լ��� �ۼ��Ͻÿ�
		 0~9999������ ������ ���� 3���� ����, ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void graph(int A, int B);

int main(void)
{
	srand(time(0));

	int a = rand() % 10000;
	int b = rand() % 10000;
	int c = rand() % 10000;
	int d = 100;

	graph(a, d);
	graph(b, d);
	graph(c, d);

	return 0;
}

void graph(int A, int B)
{
	//int e = A / B;
	printf("%d:", A);

	/*for (int i = 0; i <= e; i++)
			printf("*");*/

	while (A >= B)
	{
		printf("*");
		A -= B;
	}
	printf("\n");

	return;
}