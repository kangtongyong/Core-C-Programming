/* ���ϸ�: assignment1003.c

 * ����: ���̵� �Է¹޾� Login ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������
		 ��ϵ� �е���带 ���ؼ� ������ "�α��� ����" �̶�� ����ϴ� ���α׷�.

 * �ۼ���: ������

 * ��¥: 2025.06.05.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define L_SIZE 20


typedef struct contact
{
	char name[L_SIZE];
	char password[L_SIZE];
}Login;


int assignment1003(void);
int sameuser(Login* user, char A[], char B[], int Size);

int main(void)
{
	assignment1003();

	return 0;
}


int assignment1003(void)
{
	Login user[] = {
		{"guest", "idontknow"},
		{"Auest", "Adontknow"},
		{"Buest", "Bdontknow"},
		{"Cuest", "Cdontknow"},
		{"Duest", "Ddontknow"},
	};

	char a[20], b[20];
	int size = sizeof(user) / sizeof(user[0]);
	int i;

	// �Է� �Ǿ��ִ� ���� ������� �˷��ִ� �ڵ�(������ �߰�)
	for (i = 0; i < size; i++)
	{
		printf("%s %s\n", user[i].name, user[i].password);
	}

	while (1)
	{
		printf("ID? ");
		scanf("%s", a);

		// �������� .���Է��ϸ� ������ ��ó�� �Ǿ���� ���� ���� �ڵ�(������ �߰�?)
		if (a[0] == '.')
		{
			break;
		}

		printf("PW: ");
		scanf("%s", b);

		int result = sameuser(user, a, b, size);

		printf("%s\n", result ? "�α��� ����" : "�α��� ����");
	}

	return 0;
}

int sameuser(Login* user, char A[], char B[], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
	{
		if (strcmp(user[i].name, A) == 0 &&
			strcmp(user[i].password, B) == 0)
		{
			return 1;
		}
	}
	return 0;
}