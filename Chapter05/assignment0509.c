/* ���ϸ�: assignment0508.c

 * ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��� �Ͻÿ�
		 (&, |, ^) �Է� 10, 8, 16������ ������ 16����

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h = 0, f = 0, c = 0, s = 0;
	int h_price = 4000, f_price = 2000, c_price = 1500, s_price = 6500;

	printf("�ܹ��� ����? ");
	scanf("%d", &h);
	printf("����Ƣ�� ����? ");
	scanf("%d", &f);
	printf("�ݶ� ����? ");
	scanf("%d", &c);

	here:
	if (h > 0 && f > 0 && c > 0)
	{
		s++, h--, f--, c--;
		goto here; //���ǹ��� ����Ѵ� �����̶� goto���
	}

	printf("\n");
	printf("��ǰ��      �ܰ�  ����     �ݾ�\n");

	if (s > 0)
	{
		printf("��Ʈ        6500   %d  %9d\n", s, s * s_price);
	}
	if (h > 0)
	{
		printf("�ܹ���      4000   %d  %9d\n", h, h * h_price);
	}
	if (f > 0)
	{
		printf("����Ƣ��    2000   %d  %9d\n", f, f * f_price);
	}
	if (c > 0)
	{
		printf("�ݶ�        1500   %d  %9d\n", c, c * c_price);
	}
	printf("-------------------------------\n");
	printf("�հ�                %11d\n", (s * s_price) + (h * h_price) + (f * f_price) + (c * c_price));

	return 0;
}