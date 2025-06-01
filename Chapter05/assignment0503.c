/* 파일명: assignment0503.c

 * 내용: 거스름돈을 입력받아 금액에 맞게 각각 몇 개 필요한지 구하여 출력. 10원 미만 단위 절사.

 * 작성자: 202511224 양현인

 * 날짜: 2025.04.29

*/

#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money;

	printf("거스름돈? ");
	scanf("%d", &money);

	printf("거스름돈 (10원미만 절사): %d\n", (money / 10) * 10);

	if (0 != (money / 50000)) // money >=로 한번에 해결
	{
		printf("   50000원 %d장\n", money / 50000);
		money %= 50000;
	}
	if (0 != (money / 10000))
	{
		printf("   10000원 %d장\n", money / 10000);
		money %= 10000;
	}
	if (0 != (money / 5000))
	{
		printf("    5000원 %d장\n", money / 5000);
		money %= 5000;
	}
	if (0 != (money / 1000))
	{
		printf("    1000원 %d장\n", money / 1000);
		money %= 1000;
	}
	if (0 != (money / 100))
	{
		printf("     100원 %d개\n", money / 100);
		money %= 100;
	}
	if (0 != (money / 10))
	{
		printf("      10원 %d개\n", money / 10);
		money %= 10;
	}

	return 0;
}