//소스.c
#include <stdio.h>

//이러한 변수가 있다는걸 알려줌
extern int g_num;		//전역변수
static int g_snum = 0;	//정적전역변수

int main(){

	g_num = 12;
	
	return 0;
}

void foo(){
	
	g_num = 11;
}