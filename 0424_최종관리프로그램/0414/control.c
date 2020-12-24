//control.c

#include "std.h"

#define FILENAME	"memberlist.ccm"

//���� ����  : �Լ� �ۿ� ����� ���� 
member g_memlist[DATAMAX];

void con_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_memlist[i].flag = 0;
	}
}

void con_selectall()
{	
	printf("ȸ����ȣ\t�̸�\t����\t��ȭ��ȣ\n");
	printf("----------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];

		//�����Ͱ� ������ ���� ��� 
		if(mem.flag == 1)
			printf("[%2d]\t\t%s\t%s\t%s\n", 
				mem.number, mem.name,
				mem.gender =='m'?"��":"��", mem.phone);
	}
}

void con_insert()
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
		if (g_memlist[idx].flag == 1)
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
	strcpy_s(g_memlist[idx].name, sizeof(g_memlist[idx].name), name); //string.h
	g_memlist[idx].gender = gender;
	g_memlist[idx].number = idx + 1;
	strcpy_s(g_memlist[idx].phone, sizeof(g_memlist[idx].phone), phone);
	g_memlist[idx].flag = 1;

	printf("����Ǿ����ϴ�.\n");
}

void con_select()
{
	//�˻��� ȸ��ID�� �Է¹޴´�.
	int number;
	printf("ȸ��ID �Է� : ");
	scanf_s("%d", &number);

	//�˻� �˰��� 
	int idx = numbertoidx(number);
	if (idx == -1)
	{
		printf("�����Ͱ� �����ϴ�.\n");
		return;
	}

	printf("[%d��° �ε���]\n", idx);
	printf("ȸ�� ��ȣ : %d\n", g_memlist[idx].number);
	printf("�̸�      : %s\n", g_memlist[idx].name);
	printf("����      : %s\n", (g_memlist[idx].gender == 'm' ? "��" : "��"));
	printf("��ȭ��ȣ  : %s\n", g_memlist[idx].phone);
}

void con_update()
{
	//�˻��� ȸ���̸��� �Է¹޴´�.(O)	
	char name[20];
	printf("ȸ�� �̸��� �Է�");
	gets_s(name, sizeof(name)); //����Ű�� �����ͼ� '\0'���ڷ� ����..

	int idx = nametoidx(name);
	if (idx == -1)
	{
		printf("�����Ͱ� �����ϴ�.\n");
		return;
	}

	char phone[20];
	printf("��ȭ��ȣ : ");
	gets_s(phone, sizeof(phone));

	strcpy_s(g_memlist[idx].phone, sizeof(g_memlist[idx].phone), phone);
	printf("����Ǿ����ϴ�.\n");
}

void con_delete()
{
	//�˻��� ȸ��ID�� �Է¹޴´�.
	int number;
	printf("ȸ��ID �Է� : ");
	scanf_s("%d", &number);

	int idx = numbertoidx(number);
	if (idx == -1)
	{
		printf("�����Ͱ� �����ϴ�.\n");
		return;
	}

	g_memlist[idx].flag = 0;
	printf("�����Ǿ����ϴ�.\n");
}

int numbertoidx(int number)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];
		if (mem.flag ==1 &&  mem.number == number)
			return i;
	}
	return -1;
}

int nametoidx(const char* name)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];
		if (mem.flag == 1 && strcmp(mem.name, name) == 0 )
			return i;
	}
	return -1;
}

void con_file_save()
{
	//1.���� ����
	FILE* fp;
	errno_t retval = fopen_s(&fp, FILENAME, "wb");	//write + binary
	if (retval != 0)
	{
		printf("���� ���� ����\n");
		return;
	}

	//2.���� ����
	//�����ּ�,  ũ��( sizeof(g_memlist) * 1), ����������
	fwrite((char*)g_memlist, sizeof(g_memlist),1, fp);

	//3.���� �ݱ�
	fclose(fp);
}

void con_file_load()
{
	//1.���� ����
	FILE* fp;
	errno_t retval = fopen_s(&fp, FILENAME, "rb");	//read + binary
	if (retval != 0)
	{
		printf("���� ���� ����\n");
		return;
	}

	//2.���� ����
	//�����ּ�,  ũ��( sizeof(g_memlist) * 1), ����������
	fread((char*)g_memlist, sizeof(g_memlist), 1, fp);

	//3.���� �ݱ�
	fclose(fp);
}