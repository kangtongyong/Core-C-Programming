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
	contact1001 c1 = { "홍길동", "0102345678", MAN, 2025 };
	contact1001 c2 = { "홍길동", "0102345678", MAN, 2025 };
	contact1001 c3 = { "김길동", "0102345678", MAN, 2025 };

	printContact(c1);
	printContact(c2);
	printContact(c3);

	printContact(c1);
	printContactPtr(&c2);


	int result1 = isEqualContact(c1, c2);
	int result2 = isEqualContactPtr(&c2, &c3);

	printf("c1과 c2는 %s\n", result1 ? "같습니다" : "다릅니다");
	printf("c2과 c3는 %s\n", result2 ? "같습니다" : "다릅니다");

	return;
}
