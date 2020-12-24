#include <stdio.h>

/*
날짜를 관리하는 프로그램
1. 오늘날짜를 저장할 수 있다.
2. 다음 날짜로 변경할 수 있다.
3. 날짜를 출력할 수 있다.
*/

//step2) 함수까지 배움.
void input_today(int *y, int *m, int *d){

	*y = 2020;
	*m = 4;
	*d = 20;
	
}

void print_date(int y, int m, int d){

	printf("%04d-%02d-%02d \n", y, m, d);

}

void change_nextday(int *y, int *m, int *d){

	*d = *d + 1;

}


int main(){

	//변수 선언
	int year;
	int month;
	int day;

	//오늘날짜를 저장
	input_today(&year, &month, &day);

	//날짜를 출력
	print_date(year, month, day);

	//다음날짜로 변경
	change_nextday(&year, &month, &day);

	//날짜를 출력
	print_date(year, month, day);

	return 0;
}