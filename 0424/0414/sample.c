//sample.c

#include <stdio.h>
#include <string.h>
#include "sample.h"

//���� ����  : �Լ� �ۿ� ����� ���� 
/*ȸ������
ȸ����ȣ(����), �̸�(���ڿ�), ����(����), ��ȭ��ȣ(���ڿ�)
ȸ����ȣ�� -1�̸� �ش� �ε����� �����Ͱ� ���°����� �Ǵ�!
ȸ����ȣ�� �迭�� �ε��� +1�� ������ �ڵ� �����ȴ�. 
*/
int g_number[DATAMAX];			//ȸ����ȣ
char g_name[20][DATAMAX];		//�̸� 
char g_gender[DATAMAX];			//����
char g_phone[20][DATAMAX];		//��ȭ��ȣ

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_number[i] = -1;
	}
}

void sample_printall()
{	
	printf("ȸ����ȣ\t�̸�\t����\t��ȭ��ȣ\n");
	printf("----------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		if( g_number[i] != -1)
			printf("[%02d]\t\t%s\t%s\t%s\n", g_number[i],g_name[i],
				g_gender[i] =='m'?"��":"��", g_phone[i]);
	}
}

/*
������ġ�� ���尪�� �Է¹ް�(����� �ʱ�ȭ) �����迭�� ����(����)
����� ����Ͻÿ�.(������)
����ó��:
  1) ����ڰ� �Է��� �ε����� ������ ���� ���� ��� 
      ��ġ :����ڰ� �ε����� �Է��� �� ~ ���� �� 
  2) ����ڰ� �Է��� �ε����� ��ġ�� �����Ͱ� �����ϴ� ���
     -1�̸� ����X, -1�� �ƴϸ� ���� 
*/
void sample_insert()
{
	int idx;
	char name[20], phone[20];
	char gender;

	printf("������ġ(0~%d) : ", DATAMAX-1);
	scanf_s("%d", &idx);
	getchar();
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("�߸��� �ε����� �Է��ϼ̽��ϴ�.\n");
		return;
	}
	else
	{
		if (g_number[idx] != -1)
		{
			printf("�����Ͱ� �����մϴ�.\n");
			return;
		}
	}
	printf("�̸� : ");
	gets_s(name, sizeof(name));

	printf("����(m or f) : ");
	scanf_s("%c", &gender, sizeof(char));
	getchar();

	printf("��ȭ��ȣ : ");
	gets_s(phone, sizeof(phone));

	//���ڿ��� ��������� ������ ���� �ٸ� ����� �ִ�. 
	strcpy_s(g_name[idx], sizeof(g_name[idx]), name); //string.h
	g_gender[idx] = gender;
	g_number[idx] = idx + 1;
	strcpy_s(g_phone[idx], sizeof(g_phone[idx]), phone);

	printf("����Ǿ����ϴ�.\n");
}

void sample_select()
{
	//�˻��� ȸ��ID�� �Է¹޴´�.
	int number;
	printf("ȸ��ID �Է� : ");
	scanf_s("%d", &number);

	//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ���Ѵ�.
	//����, �����ϸ� �Ʒ��� ���� ����Ѵ�.
	//     1��° �ε��� -> 10
	//       ��ã������ "���ڰ� �����ϴ�." ���
	for (int i = 0; i < DATAMAX; i++)  // 4  3 -1  0 3 2 .....
	{
		if (g_number[i] == number)  // 3
		{
			printf("[%d��° �ε���]\n", i);
			printf("ȸ�� ��ȣ : %d\n", g_number[i]);
			printf("�̸�      : %s\n", g_name[i]);
//			printf("����      : %c\n", g_gender[i]);
			printf("����      : %s\n", (g_gender[i] == 'm' ? "��" : "��"));
			printf("��ȭ��ȣ  : %s\n", g_phone[i]);
			return;
		}
	}
	printf("�ش� ��ȣ�� �����ϴ�.\n");
}

void sample_update()
{
	//�˻��� ȸ���̸��� �Է¹޴´�.(O)
	char phone[20];
	char name[20];
	printf("ȸ�� �̸��� �Է�");
	gets_s(name, sizeof(name)); //����Ű�� �����ͼ� '\0'���ڷ� ����..

	for (int i = 0; i < DATAMAX; i++)  
	{
		//���ڿ� ���Լ�
		//strcmp ù��°���ڰ� ũ�ٸ���, ���ٸ� 0, �۴ٸ� ���� 
		if (strcmp(g_name[i],name)==0)	//�迭�� �̸��� �� : �̰� ������ 0��ȯ
		{
			//������ �����͸� �Է¹ް� �迭�� ����
			//��ȭ��ȣ�� �Է¹ް� ��ȭ��ȣ�� �����ϼ���.(insert)
			printf("��ȭ��ȣ : ");
			gets_s(phone, sizeof(phone));

			strcpy_s(g_phone[i], sizeof(g_phone[i]), phone);

			printf("����Ǿ����ϴ�.\n");

			return;
		}
	}
	printf("���ڰ� �����ϴ�.\n");
}

void sample_delete()
{
	//�˻��� ȸ��ID�� �Է¹޴´�.
	int number;
	printf("ȸ��ID �Է� : ");
	scanf_s("%d", &number);

	for (int i = 0; i < DATAMAX; i++)  
	{
		if (g_number[i] == number)
		{
			g_number[i] = -1;
			//�̸�, ��ȭ��ȣ�� ����  "" �� ����...
			strcpy_s(g_name[i], sizeof(g_name[i]), " ");
			strcpy_s(g_phone[i], sizeof(g_phone[i]), " ");

			printf("�����Ǿ����ϴ�.\n");
			return;
		}
	}
	printf("���ڰ� �����ϴ�.\n");
}
