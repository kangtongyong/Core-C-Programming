#include <stdio.h>
#include <string.h>
#include "contact1001.h"


// isEqualContact()
// ��ȯ��: ���� ������ 1(ture)��ȯ, �׷��� ������ 0�� ��ȯ
// �Է�: ���� �� Contact ��


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
	//�̸�: 000
	//����: 00000000000
	//����: �� Ȥ ��
	//����: 000

	printf("�̸�: %s \n", ct.name);
	printf("����: %s \n", ct.phone);
	printf("����: %s \n", ct.gender == MAN ? "����" : "����");
	printf("�⵵: %d \n", ct.year);
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
	//�̸�: 000
	//����: 00000000000
	//����: �� Ȥ ��
	//����: 000

	printf("�̸�: %s \n", ct->name);
	printf("����: %s \n", ct->phone);
	printf("����: %s \n", ct->gender == MAN ? "����" : "����");
	printf("�⵵: %d \n", ct->year);
}