/* ���ϸ�: assignment0304.c

 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� 
		 �Է¹޾� �� ���� ���� ���ϴ� ���α׷����ۼ��Ͻÿ�.
		 ���� ũ��� N ������, �̵��� �Ÿ��� m ������ �Է¹޴´�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pte(void);

int main(void)
{
	pte();

	return 0;
}

void pte(void)
{
	float power = 0;
	float movement = 0;

	printf("��(N)? ");
	scanf("%f", &power);
	printf("�̵��Ÿ�(m)? ");
	scanf("%f", &movement);

	printf("���� ��: %.2f J", power * movement);

	return;
}
