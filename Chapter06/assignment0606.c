/* ���ϸ�: assignment0606.c

 * ����: �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ��� �ۼ��Ͻÿ�
		 �߸��� ��ȣ�� �����ϸ� �ٽ� ���ùް�, �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�
		 �Լ��� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);

int main(void)
{
	int b;

	while (1)
	{
		b = choose_menu();

		if (b == 0)
		{
			break;
		}

		if (b == 1)
		{
			printf("���� ���⸦ �����մϴ�.\n");
		}

		if (b == 2)
		{
			printf("���� ������ �����մϴ�.\n");
		}

		if (b == 3)
		{
			printf("�μ⸦ �����մϴ�.\n");
		}
	}
	return 0;
}
int choose_menu(void)
{
	int a;

	while (1)
	{
		printf("[1.���� ���� 2.���� ���� 3.�μ� 0/����] ����? ");
		scanf("%d", &a);

		if (a >= 0 && a <= 3)
		{
			return a;
		}
	}
}