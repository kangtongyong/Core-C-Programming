/* ���ϸ�: assignment0209.c

 * ����: 16���� ������ �Է¹޾� 19������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�.", num, num);

	return 0;
}