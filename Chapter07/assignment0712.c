/* ���ϸ�: assignment0712.c

 * ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10��, ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��ϰ�
         ������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �����Ѵ�. �� �̻� ������ �� ������ ���α׷� ����.

 * �ۼ���: ������

 * ��¥: 2025.05.28.

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assi12(void);
void Set(char A[], int A_size);

int main(void)
{
	assi12();

	return 0;
}

int assi12(void)
{
	char a[10] = { 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o' };
	int a_size = sizeof(a) / sizeof(a[0]);

	Set(a, a_size);

	return 0;
}

void Set(char A[], int A_size)
{
	int t = 0;

	while (1)
	{
		int i, j;

		printf("���� �¼�: [ ");
		for (i = 0; i < A_size; i++)
			printf("%c ", A[i]);
		printf("]\n");

		int a;
		printf("������ �˼���? ");
		scanf("%d", &a);

		/*if (1 == (a != ('o' || 'x')))
			printf("�ùٸ� ���ڸ� �Է����ּ���.\n");
		continue;*/
		// ���� �̿��� ���𰡸� �Է¹����� ���Է��϶�� �ڵ� = ���� ����

		for (j = 0; j < a; j++)
		{
			if (A[t] == 'o')
				A[t] = 'X';
			t++;
			printf("%d ", t);
		}
		printf("�¼��� �����߽��ϴ�.\n");


		if (A[A_size - 1] == 'X')
			break;
	}

	return;
}