/* ���ϸ�: assignment0204.c

 * ����: �ð��� ��, ��, �ʷ� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
         ���� ��� 1�� 1�� 1�ʴ� "01:01:01"�� ����Ѵ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	int a;
	int b;
	int	c;

	printf("��? ");
	scanf("%d", &a);
	printf("��? ");
	scanf("%d", &b);
	printf("��? ");
	scanf("%d", &c);

	//%02d ���� 0�� ���ڸ��� 0���� ���, 2�� ��ü �������� 2�ڸ��� ���
	printf("�Է��� �ð���  %02d:%02d:%02d�Դϴ�.", a, b, c);

	return 0;
}