/* 파일명: assignment0415.c

 * 내용: 환전수수료를 1.75 가정
		 입력받은 기준율과 우대율과 따라 달러 구매를 금액을 계산한다.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

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
	// 환율 ,매매기준율, 우대율, 달러
	double rate = 0.0, exrate = 0.0, preferential = 0.0, dollar = 0.0;


	printf("원/달러 매매기준율? ");
	scanf("%lf", &exrate);
	printf("환율우대율(0~100%)? ");
	scanf("%lf", &preferential);


	// 환율 = 매매기준욜 * (환전수수료율 =  1.75% ) * (1 - 환전우대율 / 100)
	// 퍼센트(%) 값을 0~1 사이의 **실수(decimal)**로 변환
	// 전체(1.0)에서 우대율만큼을 뺀 나머지 = 실제 적용할 수수료 비율
	rate = exrate * 0.0175 * (1 - preferential / 100);

	printf("달러 살 때 환율은 %.6lf입니다\n", exrate + rate);

	printf("구입할 달러(USD)? ");
	scanf("%lf", &dollar);

	//달러, 달러 * (매매기준율 + 환율)
	printf("USD %.2lf ==> KRW %.2lf", dollar, dollar * (exrate + rate));

	return 0;
}