/* ���ϸ�: assignment0302.c

 * ����:������ ���̿� ������ ���̸� �Է¹޾� 
		���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
	int square1 = 0;
	int square2 = 0;

	printf("������ ����? ");
	scanf("%d", &square1);
	printf("������ ����? ");
	scanf("%d", &square2);

	/*
	���� �ڵ� 4�� �̶�
	==
	printf("������ ����?\n");
	printf("������ ����? ");
	scanf("%d %d", &square1, &square2);

	*/

	printf("���簢���� ����: %d\n", square1 * square2);
	printf("���簢���� �ѷ�: %d\n", (square1 + square2) * 2);

	return;
}