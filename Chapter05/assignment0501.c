/* ���ϸ�: assignment0501.c

 * ����: ���� ��ǥ�� �Է� �޾� ��ũ������ ���� ���� ���� ������ �˻��ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int l = 0, t = 0, r = 0, b = 0;
	int x = 0, y = 0;


	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &l, &t);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &r, &b);
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);


	if ((x >= l && x <= r) && (y >= t && y <= b))
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}


	return 0;
}