//app.c

#include "std.h"

//함수의 정의부
//초기화 기능 
void app_init()
{
	logo();
	con_init();
	con_file_load();
}

//엔진 기능 
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

//종료 처리 기능
void app_exit()
{
	ending();
	con_file_save();
}

void logo()
{
	system("cls");	//"cls" : 화면을 지우는 명령어
	printf("*****************************************************\n");
	printf(" 우송비트 단기 ??차 C언어 과정\n");
	printf(" 구조체를 이용한 회원 관리 프로그램\n");
	printf(" 2020년 04월 24일\n");
	printf(" ccm\n");
	printf("*****************************************************\n");
	system("pause");	//"pause" : 잠깐 멈춤 명령어
}

void ending()
{
	system("cls");
	printf("*****************************************************\n");
	printf(" 프로그램을 종료합니다.\n");
	printf("*****************************************************\n");
	system("pause");
}

char menuprint()
{
	printf("*****************************************************\n");
	printf("[1] 입 력(insert)\n");
	printf("[2] 검 색(select)\n");
	printf("[3] 수 정(update)\n");
	printf("[4] 삭 제(delete)\n");
	printf("[5] 종료\n");
	printf("*****************************************************\n");
	
//	char idx;
//	idx = _getch();		//특수한 형태의 문자 입력함수
//	return idx;			//화면에 문자 출력을 X
	return _getch();	//엔터키 없이 버퍼로 전송
}