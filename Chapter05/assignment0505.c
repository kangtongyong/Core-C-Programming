/* ���ϸ�: assignment0505.c

 * ����: �µ��� �Է¹޾� ������ ȭ����, ȭ���� ������
	     ��ȯ�ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b;
	double u = 0.0, c = 0.0, f = 0.0;

	printf("�µ� ? ");
	scanf("%lf %c", &u, &a);

	// ���� ������ a == 'C'�̳� �ҹ��ڵ� ���� �����ϵ��� ���� �߰�
	if (a == 'C' || a == 'c')
	{
		c = u;
		b = 'F';
		printf("%.2lf %c ==> %.2lf %c\n", c, a, c * (9.0 / 5) + 32, b);
	}
	if (a == 'F' || a == 'f')
	{
		f = u;
		b = 'C';
		printf("%.2lf %c ==> %.2lf %c\n", f, a, (f - 32) * (5.0 / 9.0), b);
	}


	return 0;
}