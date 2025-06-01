/* 파일명: assignment0706.c

 * 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램

 * 작성자: 양현인

 * 날짜: 2025.05.28

 */

#include <stdio.h>

int assi06(void);
void A(double arr[], int size);

int main(void)
{
	assi06();
	return 0;
}

int assi06(void)
{
	double arr[10] = { 1.3, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("배열: ");

	for (i = 0; i < size; i++)
	{
		printf("%.1f ", arr[i]);
	}

	printf("\n");
	A(arr, size);

	return 0;
}


void A(double arr[], int size)
{
	int i;

	printf("역순: ");

	for (i = size - 1; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}

	return;
}