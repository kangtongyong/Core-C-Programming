/* ���ϸ�: assignment0310.c

 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dollar(void);

int main(void)
{
	dollar();

	return 0;
}

void dollar(void)
{
	float money = 0;
	float cash = 0;

	printf("USD? ");
	scanf("%f", &money);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &cash);

	printf("USD %.2f = KRW %.2f ", money, money * cash);

	return;
}