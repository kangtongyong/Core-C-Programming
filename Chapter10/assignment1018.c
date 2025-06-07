/* ���ϸ�: assignment1018.c

 * ����: �÷��̸���Ʈ ����� �����ϴ� ���α׷�, ��ϵ� Song ����ü �迭�� ���� ��,
		 ��ü �� ����� �����ְ� ����ڷκ��� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�.
		 �뷡�� �߰��� ������ �� ��ϰ� ��ü ��� �ð��� �������� ����ϴ� ���α׷�.
		 (�÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.)

 * �ۼ���:

 * ��¥: 2025.06.05.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define S_SIZE 40

typedef struct contact
{
	int num;
	char name[S_SIZE];
	char art[S_SIZE];
	char music[S_SIZE];
	int time;
}Song;

int assignment1018(void);

int main(void)
{
	assignment1018();

	return 0;
}

int assignment1018(void)
{
	Song song[] = {
		{ 1, "thank u, next", "Ariana Grande",  "pop",  208 },
		{ 2, "Attention",  "Charli Puth",  "pop",  211 },
		{ 3, "�� ���� ����",  "�ں���",  "ballad",  316 },
		{ 4, "How LOng",  "Charlie Puth",  "pop",  198 },
		{ 5, "I'm Fine",  "��ź�ҳ��",  "hip-hop",  209 },
		{ 6, "����",  "��ź�ҳ��",  "hip-hop",  274 },
		{ 7, "Awake",  "��ź�ҳ��",  "ballad",  226 },
		{ 8, "�Ƴ���",  "MINO",  "hip-hop",  241 }
	};

	Song* playlist[5] = { NULL };

	int i, j;
	int answer;
	int count = 0;
	int all_time = 0;

	//�뷡 ��� ���
	printf("       ����              ��Ƽ��Ʈ              �帣           ����ð�\n");
	for (i = 0; i < 8; i++)
	{
		printf("%2d:    %-14s    %-18s    %-10s    %4d��\n", song[i].num, song[i].name, song[i].art, song[i].music, song[i].time);
	}
	printf("\n");

	//��Ի��� 5���� �ݺ�
	for (i = 0; i < 5; i++)
	{
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &answer);
		printf("\n");

		if (answer == 0)
		{
			break;
		}

		if (answer >= 1 && answer <= 8)
		{
			playlist[count] = &song[answer - 1];
			all_time += song[answer - 1].time;

			//���� � �Է� �޾Ҵ��� ī��Ʈ
			count++;

			printf("<< �÷��̸���Ʈ >>\n\n");
			//ī��Ʈ ��ŭ �ݺ�
			for (j = 0; j < count; j++)
			{
				printf("%-15s          %-15s       %-8s       %d��\n", playlist[j]->name, playlist[j]->art, playlist[j]->music, playlist[j]->time);
			}
			printf("�� ����ð� : %d��\n\n", all_time);

			//5���� �� ä�� ��� ���
			if (i == 4)
			{
				printf("�÷��̸���Ʈ�� �� á���ϴ�. ���α׷��� �����մϴ�.\n");
			}
		}
		else
		{
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			i--;
		}

	}
	return 0;
}