/* ���ϸ�: assignment0207.c

 * ����:Ŀ�ǻ�����(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
// S,T,G �� ������ ������ �Է½� ��� ��µǾ�� �ϴ°�??       
// ����(���ϸ� 1�� 5�� �ٲٴ¹�)
#include <stdio.h>

int main(void)
{
	char size;
	int num;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, num);

	return 0;
}