/* 파일명: assignment0409.c

 * 내용: 동영상의 재생시간을 초 단위로 입력받아 
		 몇 시간 몇 분 몇 초인지 출력하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.09

*/

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int ass0409(void);
void timeline(int s);

int main(void)
{
	ass0409();

	return 0;
}

int ass0409(void)
{
	int second = 0;

	printf("재생시간(초)? ");
	scanf("%d", &second);

	timeline(second);

	return 0;
}

void timeline(int s)
{
	int second = 0, minute = 0, hour = 0;

	hour = s / 3600;
	minute = (s / 3600) % 60;
	second = (s % 60) % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, second);

	return;
}