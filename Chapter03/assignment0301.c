/* ���ϸ�: assignment0301.c

 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ���
	     ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.07

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(void);

int main(void)
{
	square();

	return 0;
}

void square(void)
{
	int square = 0;

	printf("�Ѻ��� ���� ? ");
	scanf("%d", &square);

	printf("���簢���� ����:%d\n", square * 5);
	printf("���簢���� �ѷ�:%d\n", square * 4);
	
	return;
}