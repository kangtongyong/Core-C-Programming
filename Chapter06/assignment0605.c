/* ���ϸ�: assignment0605.c

 * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� �Լ��� Ȧ������ �˻��ϴ� �Լ��� �ۼ��Ͻÿ�
		 �� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ�
		 ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int A);
int is_odd(int B);

int main()
{
	int a = 0;
	int e = 0, f = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	for (;;)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}
		if (is_even(a))
		{
			++e;
		}
		else if (is_odd(a))
		{
			++f;
		}
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", e, f);

	return 0;
}

int is_even(int A)
{
	return (A % 2 == 0);
}

int is_odd(int B)
{
	return (B % 2 != 0);
}