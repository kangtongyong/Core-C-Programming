/* 파일명: assignment0704.c

 * 내용: 특정 값으로 초기화된 정수형 배열에 대해서 배열의 원소 중 최댓값과 최소값을 찾아서 인덱스의 값과 함께 출력하는 프로그램.

 * 작성자: 양현인

 * 날짜: 2025.05.28.

 */

#include <stdio.h>

int assi04(void);
void Max(int arr[], int size);
void Least(int arr[], int size);

int main(void)
{
	assi04();

	return 0;
}

int assi04(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("배열: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	Max(arr, size);
	Least(arr, size);

	return 0;
}


void Max(int arr[], int size)
{
	int i;
	int a = arr[0];
	int b = 0;

	for (i = 1; i < size; i++)
	{
		if ((arr[i]) > a)
		{
			a = arr[i];
			b = i;
		}
	}

	printf("최댓값: 인덱스=%d, 값=%d\n", b, a);

	return;
}

void Least(int arr[], int size)
{
	int i;
	int a = arr[0];
	int b = 0;

	for (i = 1; i < size; i++)
	{
		if ((arr[i]) < a)
		{
			a = arr[i];
			b = i;
		}
	}

	printf("최솟값: 인덱스=%d, 값=%d\n", b, a);

	return;
}