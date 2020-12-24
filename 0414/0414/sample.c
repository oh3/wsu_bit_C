//sample.c

#include <stdio.h>

#include "sample.h"

//���� ����  : �Լ� �ۿ� ����� ���� 
int g_arr[DATAMAX];

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_arr[i] = -1;
	}
}

void sample_printall()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%5d", i);
	}
	printf("\n");
	printf("---------------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%5d", g_arr[i]);
	}
	printf("\n");
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
	int idx, data;

	printf("������ġ(0~%d) : ", DATAMAX - 1);
	scanf_s("%d", &idx);
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("�߸��� �ε����� �Է��ϼ̽��ϴ�.\n");
		return;
	}
	else
	{
		if (g_arr[idx] != -1)
		{
			printf("�����Ͱ� �����մϴ�.\n");
			return;
		}
	}

	printf("���尪 : ");
	scanf_s("%d", &data);

	g_arr[idx] = data;

	printf("����Ǿ����ϴ�.\n");
}

void sample_select()
{
	//�˻��ϰ��� �ϴ� ���ڸ� �Է¹޴´�.
	int number;

	printf("���� �Է� :");
	scanf_s("%d", &number);

	//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ���Ѵ�.
	//����, �����ϸ� �Ʒ��� ���� ����Ѵ�.
	//     1��° �ε��� -> 10
	//       ��ã������ "���ڰ� �����ϴ�." ���
	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){
			printf("%d��° �ε��� -> %d\n", i, g_arr[i]);
			return;
		}
	}
	printf("���ڰ� �����ϴ�.\n");
}

void sample_update()
{
	//�˻��ϰ��� �ϴ� ���ڸ� �Է¹޴´�.
	int number;

	printf("���� �Է� :");
	scanf_s("%d", &number);
	//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ���Ѵ�.
	//����, �����ϸ� �Ʒ��� ���� ����Ѵ�.
	//     ����ڷκ��� ������ ���� �Է¹޴´�.
	//     �Է¹��� ���� ã�� �迭�� �ε��� ��ġ�� �����Ѵ�.
	//      ��ã������ "���ڰ� �����ϴ�." ���
	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){
			
			int temp;
			printf("������ ���ڸ� �Է� : ");
			scanf_s("%d", &temp);

			g_arr[i] = temp;

			printf("����Ǿ����ϴ�.");

			return;
		}
	}
	printf("���ڰ� �����ϴ�.\n");
}

void sample_delete()
{
	//�˻��ϰ��� �ϴ� ���ڸ� �Է¹޴´�.
	int number;

	printf("���� �Է� :");
	scanf_s("%d", &number);
	//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ���Ѵ�.
	//����, �����ϸ� �Ʒ��� ���� ����Ѵ�.
	//      �ش� �迭�� �ε����� ����� ���� -1�� �����Ѵ�.
	//      ��ã������ "���ڰ� �����ϴ�." ���

	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){

			g_arr[i] = -1;

			return;
		}
	}
	printf("���ڰ� �����ϴ�.\n");
}
