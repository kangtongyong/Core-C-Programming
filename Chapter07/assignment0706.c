/* ���ϸ�: assignment0706.c

 * ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷�

 * �ۼ���: ������

 * ��¥: 2025.05.28

 */

#include <stdio.h>

int assi06(void);
void A(double arr[], int size);

int main(void)
{
	assi06();
	return 0;
}

int assi06(void)
{
	double arr[10] = { 1.3, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("�迭: ");

	for (i = 0; i < size; i++)
	{
		printf("%.1f ", arr[i]);
	}

	printf("\n");
	A(arr, size);

	return 0;
}


void A(double arr[], int size)
{
	int i;

	printf("����: ");

	for (i = size - 1; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}

	return;
}