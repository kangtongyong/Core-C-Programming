/* ���ϸ�: assignment0206.c

 * ����:�� ����� �����ϰ� �ϰ� ���õ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�� ������� S, M, L �� ���� ���� �� �ϳ��� �Է¹޴´�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
// S,M,L �� ������ ������ �Է½� ��� ��µǾ�� �ϴ°�??
#include <stdio.h> 

int main(void)
{
	char size;

	printf("�� ������(S,M,L)? ");
	scanf("%c", &size);

	printf("%c ����� �����߽��ϴ�.", size);

	return 0;
}