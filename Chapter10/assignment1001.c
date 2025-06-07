/* 파일명: assignment1001.c

 * 내용: 아이디와 패스워드를 관리하기 위한 Login구조체를 정의, Login
		 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 출력하는 프로그램.

 * 작성자: 양현인

 * 날짜: 2025.06.05.

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