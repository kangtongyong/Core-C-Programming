/* ���ϸ�: assignment0402.c

 * ����: ȭ�� �µ��� �Ǽ��� �Է¹޾�
		 ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0402(void);
double Celcius(double f);

int main(void)
{
	assignment0402();

	return 0;
}


/* �Լ� �̸� : assignment0402
   �Լ� ��� : ȭ�� �Է�, ���� �µ� ��� �Լ� ȣ��, ���� �µ� ���
   ��ȯ�� :  0��ȯ
*/

int assignment0402(void)
{
	//1. ���� ����
	double fahrenheit = 0.0, celcius2 = 0.0;

	//2. ȭ�� �µ� �Է¹ޱ�
	printf("ȭ���µ�?");
	scanf("%lf", &fahrenheit);

	//3. �Լ� ȣ��
	celcius2 = Celcius(fahrenheit);

	//4. ���
	printf("%.2lf F = %.2lf C", fahrenheit, celcius2);

	return 0;
}


/* �Լ� �̸� : Celcius
   �Լ� ��� : ȭ�� �µ��� �Է¹޾� ������� ���
   ��ȯ�� : ���� �µ� ��ȯ
*/

double Celcius(double f)
{
	//1. �µ� ���� ����
	double celcius = 0.0;

	//2. �µ� ���
	celcius = (f - 32.0) * 5.0 / 9.0;

	//3.��갪 ��ȯ
	return celcius;
}