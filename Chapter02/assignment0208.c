/* ���ϸ�: assignment0208.c

 * ����: �Ǽ� 2���� �Է¹޾Ƽ� �հ� ���� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.03.31

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* 
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	*/
	float num1;
	float num2;
	// float num3;



	printf("�Ǽ� 2��? ");
	scanf("%f %f", &num1, &num2);

	// num3 = num1 + num2;

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f", num1, num2, num1 - num2);

	// printf("%f + %f = %f\n", num1, num2, num3);
	/*
	�޸𸮿� �ִ°Ÿ� cpu�� �Űܿ;��Ѵ�
	num3 = num3 + 111
	*/

	return 0;
}