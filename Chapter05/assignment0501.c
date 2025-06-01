/* 파일명: assignment0501.c

 * 내용: 점의 좌표를 입력 받아 스크린상의 선택 영역 내의 점인지 검사하는 프로그램.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int l = 0, t = 0, r = 0, b = 0;
	int x = 0, y = 0;


	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &l, &t);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &r, &b);
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);


	if ((x >= l && x <= r) && (y >= t && y <= b))
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 외의 점입니다.");
	}


	return 0;
}