#include <stdio.h>	
#include "contact.h"


void testContact(void);

int main(void)
{
	testContact();

	return 0;
}

void testContact()
{
	contact1001 c1 = { "ȫ�浿", "0102345678", MAN, 2025 };
	contact1001 c2 = { "ȫ�浿", "0102345678", MAN, 2025 };
	contact1001 c3 = { "��浿", "0102345678", MAN, 2025 };

	printContact(c1);
	printContact(c2);
	printContact(c3);

	printContact(c1);
	printContactPtr(&c2);


	int result1 = isEqualContact(c1, c2);
	int result2 = isEqualContactPtr(&c2, &c3);

	printf("c1�� c2�� %s\n", result1 ? "�����ϴ�" : "�ٸ��ϴ�");
	printf("c2�� c3�� %s\n", result2 ? "�����ϴ�" : "�ٸ��ϴ�");

	return;
}
