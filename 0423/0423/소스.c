//�ҽ�.c
#include <stdio.h>

//�̷��� ������ �ִٴ°� �˷���
extern int g_num;		//��������
static int g_snum = 0;	//������������

int main(){

	g_num = 12;
	
	return 0;
}

void foo(){
	
	g_num = 11;
}