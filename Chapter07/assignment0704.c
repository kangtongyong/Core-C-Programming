/* ���ϸ�: assignment0704.c

 * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���ؼ� �迭�� ���� �� �ִ񰪰� �ּҰ��� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷�.

 * �ۼ���: ������

 * ��¥: 2025.05.28.

 */

#include <stdio.h>

int assi04(void);
void Max(int arr[], int size);
void Least(int arr[], int size);

int main(void)
{
	assi04();

	return 0;
}

int assi04(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("�迭: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	Max(arr, size);
	Least(arr, size);

	return 0;
}


void Max(int arr[], int size)
{
	int i;
	int a = arr[0];
	int b = 0;

	for (i = 1; i < size; i++)
	{
		if ((arr[i]) > a)
		{
			a = arr[i];
			b = i;
		}
	}

	printf("�ִ�: �ε���=%d, ��=%d\n", b, a);

	return;
}

void Least(int arr[], int size)
{
	int i;
	int a = arr[0];
	int b = 0;

	for (i = 1; i < size; i++)
	{
		if ((arr[i]) < a)
		{
			a = arr[i];
			b = i;
		}
	}

	printf("�ּڰ�: �ε���=%d, ��=%d\n", b, a);

	return;
}