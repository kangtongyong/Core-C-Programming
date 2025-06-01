/* 파일명: assignment0402.c

 * 내용: 화씨 온도를 실수로 입력받아
		 섭시 온도로 변환해서 출력하는 프로그램을 작성하시오.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

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


/* 함수 이름 : assignment0402
   함수 기능 : 화씨 입력, 섭씨 온도 계산 함수 호출, 섭씨 온도 출력
   반환값 :  0반환
*/

int assignment0402(void)
{
	//1. 변수 설정
	double fahrenheit = 0.0, celcius2 = 0.0;

	//2. 화씨 온도 입력받기
	printf("화씨온도?");
	scanf("%lf", &fahrenheit);

	//3. 함수 호출
	celcius2 = Celcius(fahrenheit);

	//4. 출력
	printf("%.2lf F = %.2lf C", fahrenheit, celcius2);

	return 0;
}


/* 함수 이름 : Celcius
   함수 기능 : 화씨 온도를 입력받아 운동에너지 계산
   반환값 : 섭씨 온도 반환
*/

double Celcius(double f)
{
	//1. 온도 변수 설정
	double celcius = 0.0;

	//2. 온도 계산
	celcius = (f - 32.0) * 5.0 / 9.0;

	//3.계산값 반환
	return celcius;
}