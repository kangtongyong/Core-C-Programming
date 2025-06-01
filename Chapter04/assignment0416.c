/* 파일명: assignment0416.c

 * 내용: red, green, blue순서로 3개 입력받아서
		 rgb색상을 만들어 출력하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

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
	// 색상 정보
	unsigned char red = 0, green = 0, blue = 0;
	unsigned int rgb = 0;

	// %hhu = 부호 없는 정수 타입을 입력 받기 위한 형식 지정자 
	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	// rgb에 순서대로(blue, green, red)대입
	rgb = Rgbcolor(red, green, blue);

	// 이후 (blue(2), green(2), red(2))출력
	printf("RGB 트루컬러: %06X", rgb);

	return 0;
}

unsigned int Rgbcolor(unsigned char r, unsigned char g, unsigned char b)
{
	unsigned int color = 0;


	color = b << 16 | g << 8 | r;

	return color;
}