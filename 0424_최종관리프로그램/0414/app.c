//app.c

#include "std.h"

//�Լ��� ���Ǻ�
//�ʱ�ȭ ��� 
void app_init()
{
	logo();
	con_init();
	con_file_load();
}

//���� ��� 
void app_run()
{
	char idx;
	while (1)
	{
		system("cls");
		con_selectall();
		idx = menuprint();
		switch (idx)
		{
		case '1':	con_insert();		break;
		case '2':	con_select();		break;
		case '3':	con_update();		break;
		case '4':	con_delete();		break;
		case '5':   return;
		}
		system("pause");
	}
}

//���� ó�� ���
void app_exit()
{
	ending();
	con_file_save();
}

void logo()
{
	system("cls");	//"cls" : ȭ���� ����� ��ɾ�
	printf("*****************************************************\n");
	printf(" ��ۺ�Ʈ �ܱ� ??�� C��� ����\n");
	printf(" ����ü�� �̿��� ȸ�� ���� ���α׷�\n");
	printf(" 2020�� 04�� 24��\n");
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