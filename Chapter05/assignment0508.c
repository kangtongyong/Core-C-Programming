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
	char a;
	long b = 0, c = 0;

	printf("��Ʈ �����? ");
	scanf("%i %c %i", &b, &a, &c);


	switch (a)
	{
	case '&':
		printf("%X %c %X = %X", b, a, c, b & c);
		break;
	case '|':
		printf("%X %c %X = %X", b, a, c, b | c);
		break;
	case '^':
		printf("%X %c %X = %X", b, a, c, b ^ c);
		break;
	default:
		printf("��Ʈ �����ڸ� ����� �ּ���.\n");
		break;
	}


	return 0;
}