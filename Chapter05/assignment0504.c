/* ���ϸ�: assignment0504.c

 * ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("����? ");
	scanf("%d", &a);


	if (a % 4 == 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
			{
				printf("%d���� �����Դϴ�\n", a);
			}
			else
			{
				printf("%d���� ������ �ƴմϴ�\n", a);
			}
		}
		else
		{
			printf("%d���� �����Դϴ�\n", a);
		}
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�\n", a);
	}

	return 0;
}