/* ���ϸ�: assignment0303.c

 * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ������ kg ����, ���̸� m ������ �Է¹޴´�

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
	int mass = 0;
	int elevation = 0;

	printf("����(kg)? ");
	scanf("%d", &mass);
	printf("����(m)? ");
	scanf("%d", &elevation);

	printf("��ġ������: %3.6f J", 9.8 * mass * elevation);

	return;
}
