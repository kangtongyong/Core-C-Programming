/* ���ϸ�: assignment0203.c

 * ����: ��¥�� ��, ��, �Ϸ� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ��, ��, ���� ������ �Է¹޴´�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
/* scanf ���� �ݵ�� #include <stdio.h> ����
   #define _CRT_SECURE_NO_WARNINGS ����ؾ��� */
#include <stdio.h>

int main(void)

{
	int a;
	int b;
	int c;

	printf("��? ");
	scanf("%d", &a);
	printf("��? ");
	scanf("%d", &b);
	printf("��? ");
	scanf("%d", &c);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", a, b, c);

	return 0;
}