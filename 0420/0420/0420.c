#include <stdio.h>

/*
날짜를 관리하는 프로그램
1. 오늘날짜를 저장할 수 있다.
2. 다음 날짜로 변경할 수 있다.
3. 날짜를 출력할 수 있다.
*/

//step1) 함수 전 까지 학습한 상태

int main(){

	//변수 선언
	int year;
	int month;
	int day;

	//오늘날짜를 저장
	year = 2020;
	month = 4;
	day = 20;

	//날짜를 출력
	printf("%04d-%02d-%02d \n", year, month, day);

	//다음날짜로 변경
	day = day + 1;

	printf("%04d-%02d-%02d \n", year, month, day);

	return 0;
}