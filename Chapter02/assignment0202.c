/* ���ϸ�: assignment0202.c

 * ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

 */

#define _CRT_SECURE_NO_WARNINGS
/* scanf ���� �ݵ�� #include <stdio.h> ���� 
   #define _CRT_SECURE_NO_WARNINGS ����ؾ��� */
#include <stdio.h>

int main(void)
{
	int num;
	float x;

	printf("��ȣ? ");
	scanf("%d", &num);
	printf("����? ");
	scanf("%f", &x);


	printf("%d�� �л��� ������ %f�Դϴ�. ", num, x);

	return 0;
}