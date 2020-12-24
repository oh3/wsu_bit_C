//app.c

#include <stdio.h>
#include <stdlib.h>		//system()
#include <conio.h>      //_getch();

#include "app.h"
#include "sample.h"

//�Լ��� ���Ǻ�
//�ʱ�ȭ ��� 
void app_init()
{
	logo();

	sample_init();
}

//���� ��� 
void app_run()
{
	char idx;
	while (1)
	{
		system("cls");
		sample_printall();
		idx = menuprint();
		switch (idx)
		{
		case '1':	sample_insert();		break;
		case '2':	sample_select();		break;
		case '3':	sample_update();		break;
		case '4':	sample_delete();		break;
		case '5':   return;
		}
		system("pause");
	}
}

//���� ó�� ���
void app_exit()
{
	ending();
}

void logo()
{
	system("cls");	//"cls" : ȭ���� ����� ��ɾ�
	printf("*****************************************************\n");
	printf(" ��ۺ�Ʈ �ܱ� ??�� C��� ����\n");
	printf(" �Լ��� �迭�� �̿��� ȸ�� ���� ���α׷�\n");
	printf(" 2020�� 04�� 16��\n");
	printf(" ccm\n");
	printf("*****************************************************\n");
	system("pause");	//"pause" : ��� ���� ��ɾ�
}

void ending()
{
	system("cls");
	printf("*****************************************************\n");
	printf(" ���α׷��� �����մϴ�.\n");
	printf("*****************************************************\n");
	system("pause");
}

char menuprint()
{
	printf("*****************************************************\n");
	printf("[1] �� ��(insert)\n");
	printf("[2] �� ��(select)\n");
	printf("[3] �� ��(update)\n");
	printf("[4] �� ��(delete)\n");
	printf("[5] ����\n");
	printf("*****************************************************\n");
	
//	char idx;
//	idx = _getch();		//Ư���� ������ ���� �Է��Լ�
//	return idx;			//ȭ�鿡 ���� ����� X
	return _getch();	//����Ű ���� ���۷� ����
}