/* ���ϸ�: assignment0416.c

 * ����: red, green, blue������ 3�� �Է¹޾Ƽ�
		 rgb������ ����� ����ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0416(void);
unsigned int Rgbcolor(unsigned char r, unsigned char g, unsigned char b);

int main(void)
{
	ass0416();

	return 0;
}

int ass0416(void)
{
	// ���� ����
	unsigned char red = 0, green = 0, blue = 0;
	unsigned int rgb = 0;

	// %hhu = ��ȣ ���� ���� Ÿ���� �Է� �ޱ� ���� ���� ������ 
	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	// rgb�� �������(blue, green, red)����
	rgb = Rgbcolor(red, green, blue);

	// ���� (blue(2), green(2), red(2))���
	printf("RGB Ʈ���÷�: %06X", rgb);

	return 0;
}

unsigned int Rgbcolor(unsigned char r, unsigned char g, unsigned char b)
{
	unsigned int color = 0;


	color = b << 16 | g << 8 | r;

	return color;
}