//start.c

/*
#       : 전처리 키워드(컴파일러보다 먼저 처리)
include : 포함하다(뒤에 오는 파일을 복사해서 붙혀넣기)
app.h   : 파일의 이름
=> 전처리 과정이 끝나면 해당 문장은 사라진다.
*/

#include <stdio.h>
#include "app.h"

int main()
{
	app_init();
	app_run();
	app_exit();

	return 0;
}
