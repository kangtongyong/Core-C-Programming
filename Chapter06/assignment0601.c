/* ���ϸ�: assignment0601.c

 * ����: ����, ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� �Լ��� �ۼ��Ͻÿ�
		 �ѷ��� ���ϴ� �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� 
		 ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.05.23

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int a, int b);

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("����? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);

	c = get_perimeter(a, b);

	printf("���簢���� �ѷ�: %d", c);

	return 0;
}

int get_perimeter(int a, int b)
{
	int c = 0;

	c = (a * 2) + (b * 2);

	return c;
}