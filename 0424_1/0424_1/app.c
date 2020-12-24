// app.c
//소스파일에는 함수의 정의부를 쓴다
#include "std.h"

void app_init(){	logo();	con_init();	con_file_load();}


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
			case '1': con_insert();  break;
			case '2': con_select();  break;
			case '3': con_update();  break;
			case '4': con_delete();  break;
		case '5': return;  break;
		}
		system("pause");
	}
}

void app_exit()
{
	ending();

}

void logo()
{
	system("cls");
	printf(" *****************************************\n");
	printf(" 우송비트 단기 ??차 C언어 과정\n");
	printf(" 구조체를 이용한 회원관리 프로그램\n");
	printf(" 2020년 04월 24일\n");
	printf(" ccm\n");
	printf(" *****************************************\n");
	system("pause");

}

void ending()
{
	system("cls");
	printf(" *****************************************\n");
	printf(" 프로그램을 종료합니다.\n");
	printf(" *****************************************\n");
	system("pause");
}

char menuprint()
{


	printf(" *****************************************\n");
	printf(" [1] 입력(insert)\n");
	printf(" [2] 검색(select)\n");
	printf(" [3] 수정(update)\n");
	printf(" [4] 삭제(delete)\n");
	printf(" [5] 종료\n");
	printf(" *****************************************\n");

	return _getch(); //엔터키 없이 버퍼로 전송
}