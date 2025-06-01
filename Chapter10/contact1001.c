#include <stdio.h>
#include <string.h>
#include "contact1001.h"


// isEqualContact()
// 반환값: 만약 같으면 1(ture)반환, 그렇지 않으면 0을 반환
// 입력: 비교할 두 Contact 값


int isEqualContact(contact1001 a, contact1001 b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContact(contact1001 ct)
{
	//이름: 000
	//전번: 00000000000
	//성별: 남 혹 여
	//연도: 000

	printf("이름: %s \n", ct.name);
	printf("전번: %s \n", ct.phone);
	printf("성별: %s \n", ct.gender == MAN ? "남자" : "여자");
	printf("년도: %d \n", ct.year);
}

int isEqualContactPtr(contact1001 *a, contact1001 *b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContactPtr(contact1001 *ct)
{
	//이름: 000
	//전번: 00000000000
	//성별: 남 혹 여
	//연도: 000

	printf("이름: %s \n", ct->name);
	printf("전번: %s \n", ct->phone);
	printf("성별: %s \n", ct->gender == MAN ? "남자" : "여자");
	printf("년도: %d \n", ct->year);
}