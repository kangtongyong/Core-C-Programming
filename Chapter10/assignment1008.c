/* ���ϸ�: assignment1008.c

 * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� ����,(�� ��ǰ���� ��ǰ��, ����, ��� ����)
		 ����ü�� �Ű������� ���޹޾� ��ǰ������ ����ϴ� �Լ��� ����,
		 �ְ�ü ������ ������ ��ǰ��, ���� ��� �Է¹޾� ����ϴ� ���α׷�.

 * �ۼ���: ������

 * ��¥: 2025.06.05.

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

	printf("��ǰ��? ");
	scanf("%s", menu01.name);
	printf("����? ");
	scanf("%d", &menu01.price);
	printf("���? ");
	scanf("%d", &menu01.num);

	print_product(&menu01);


	return 0;
}

void print_product(Product* menu01)
{
	printf("[%s %d�� ���:%d]\n", menu01->name, menu01->price, menu01->num);

	return;
}