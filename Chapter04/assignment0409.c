/* ���ϸ�: assignment0409.c

 * ����: �������� ����ð��� �� ������ �Է¹޾� 
		 �� �ð� �� �� �� ������ ����ϴ� ���α׷�.

 * �ۼ���: 202511224 ������

 * ��¥: 2025.04.09

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

	printf("����ð�(��)? ");
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

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, minute, second);

	return;
}