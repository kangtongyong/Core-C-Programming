/* ���ϸ�: assignment0710.c

 * ����: 3 x 3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.05.28.

 */


#include <stdio.h>

int assi10(void);
void X(int x[][3], int x_size);
void Y(int y[][3], int y_size);
void XY(int x[][3], int y[][3], int x_size, int y_size);

int main(void)
{
	assi10();

	return 0;
}

int assi10(void)
{
	int x[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int x_size = sizeof(x) / sizeof(x[0]);
	int y[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
	int y_size = sizeof(y) / sizeof(y[0]);

	X(x, x_size);
	Y(y, y_size);
	XY(x, y, x_size, y_size);

	return 0;
}

void X(int x[][3], int x_size)
{
	int i, j;

	printf("x ���:\n");

	for (i = 0; i < x_size; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", x[i][j]);
		}
		printf("\n");
	}

	return;
}

void Y(int y[][3], int y_size)
{
	int i, j;

	printf("y ���:\n");

	for (i = 0; i < y_size; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", y[i][j]);
		}
		printf("\n");
	}

	return;
}

void XY(int x[][3], int y[][3], int x_size, int y_size)
{
	int i, j;

	printf("x + y ���:\n");

	for (i = 0; i < x_size; i++)
	{
		for (j = 0; j < y_size; j++)
		{
			printf(" %2d ", x[i][j] + y[i][j]);
		}
		printf("\n");
	}

	return;
}
