/* ���ϸ�: assignment0415.c

 * ����: ȯ�������Ḧ 1.75 ����
		 �Է¹��� �������� ������� ���� �޷� ���Ÿ� �ݾ��� ����Ѵ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0415(void);


int main(void)
{
	ass0415();

	return 0;
}

int ass0415(void)
{
	// ȯ�� ,�Ÿű�����, �����, �޷�
	double rate = 0.0, exrate = 0.0, preferential = 0.0, dollar = 0.0;


	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &exrate);
	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &preferential);


	// ȯ�� = �Ÿű��ؿ� * (ȯ���������� =  1.75% ) * (1 - ȯ������� / 100)
	// �ۼ�Ʈ(%) ���� 0~1 ������ **�Ǽ�(decimal)**�� ��ȯ
	// ��ü(1.0)���� �������ŭ�� �� ������ = ���� ������ ������ ����
	rate = exrate * 0.0175 * (1 - preferential / 100);

	printf("�޷� �� �� ȯ���� %.6lf�Դϴ�\n", exrate + rate);

	printf("������ �޷�(USD)? ");
	scanf("%lf", &dollar);

	//�޷�, �޷� * (�Ÿű����� + ȯ��)
	printf("USD %.2lf ==> KRW %.2lf", dollar, dollar * (exrate + rate));

	return 0;
}