/* 파일명: assignment1008.c

 * 내용: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구초체를 정의,(각 제품별로 제품명, 가격, 재고를 저장)
		 구조체를 매개변수로 전달받아 제품정보를 출력하는 함수를 정의,
		 주고체 변수를 선언후 제품명, 가격 재고를 입력받아 출력하는 프로그램.

 * 작성자: 양현인

 * 날짜: 2025.06.05.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define P_SIZE 20

typedef struct contact
{
	char name[P_SIZE];
	int price;
	int num;
}Product;

int assignment1008(void);
void print_product(Product* menu01);

int main(void)
{
	assignment1008();

	return 0;
}

int assignment1008(void)
{
	Product menu01;

	printf("제품명? ");
	scanf("%s", menu01.name);
	printf("가격? ");
	scanf("%d", &menu01.price);
	printf("재고? ");
	scanf("%d", &menu01.num);

	print_product(&menu01);


	return 0;
}

void print_product(Product* menu01)
{
	printf("[%s %d원 재고:%d]\n", menu01->name, menu01->price, menu01->num);

	return;
}