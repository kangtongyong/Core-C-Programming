/* ���ϸ�: assignment0503.c

 * ����: �Ž������� �Է¹޾� �ݾ׿� �°� ���� �� �� �ʿ����� ���Ͽ� ���. 10�� �̸� ���� ����.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.29

*/

#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money;

	printf("�Ž�����? ");
	scanf("%d", &money);

	printf("�Ž����� (10���̸� ����): %d\n", (money / 10) * 10);

	if (0 != (money / 50000)) // money >=�� �ѹ��� �ذ�
	{
		printf("   50000�� %d��\n", money / 50000);
		money %= 50000;
	}
	if (0 != (money / 10000))
	{
		printf("   10000�� %d��\n", money / 10000);
		money %= 10000;
	}
	if (0 != (money / 5000))
	{
		printf("    5000�� %d��\n", money / 5000);
		money %= 5000;
	}
	if (0 != (money / 1000))
	{
		printf("    1000�� %d��\n", money / 1000);
		money %= 1000;
	}
	if (0 != (money / 100))
	{
		printf("     100�� %d��\n", money / 100);
		money %= 100;
	}
	if (0 != (money / 10))
	{
		printf("      10�� %d��\n", money / 10);
		money %= 10;
	}

	return 0;
}