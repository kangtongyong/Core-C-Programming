/* ���ϸ�: assignment1001.c

 * ����: ���̵�� �н����带 �����ϱ� ���� Login����ü�� ����, Login
		 ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� ����ϴ� ���α׷�.

 * �ۼ���: ������

 * ��¥: 2025.06.05.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STR_SIZE 20

typedef struct contact
{
	char name[STR_SIZE];
	char password[STR_SIZE];
}Login;


int assignment1001(void);
void IDPtr(Login* user);
void PasswordPtr(Login* user);


int main(void)
{
	assignment1001();

	return 0;
}

int assignment1001(void)
{
	Login user;

	printf("ID? ");
	scanf("%s", user.name);
	printf("Password? ");
	scanf("%s", user.password);

	IDPtr(&user);
	PasswordPtr(&user);

	return 0;
}

void IDPtr(Login* user)
{

	printf("ID: %s\n", user->name);

	return;
}

void PasswordPtr(Login* user)
{
	int i;
	char star = '*';

	printf("PW: ");
	for (i = 0; user->password[i] != '\0'; i++)
	{
		printf("%c", star);
	}
	printf("\n");

	return;
}