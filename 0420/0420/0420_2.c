#include <stdio.h>

/*
날짜를 관리하는 프로그램
1. 오늘날짜를 저장할 수 있다.
2. 다음 날짜로 변경할 수 있다.
3. 날짜를 출력할 수 있다.
*/

//step3) 구조체를 배움

//1. 날짜라는 타입을 정의 == int : 무엇을? 얼마만큼의 크기로?  정수를 4Byte

//구조체 타입 정의
//타입키워드 : struct tagdate == int 
//멤버리스트 : 정수를 3개 저장하는 타입 => 12Byte
struct tagdate{
	
	int year;
	int month;
	int day;

};

void input_today(struct tagdate *d){
	(*d).year = 2020;
	(*d).month = 4;
	(*d).day = 20;
}

void print_date(struct tagdate d){
	printf("%04d-%02d-%02d\n", d.year, d.month, d.day);
}

void change_nextday(struct tagdate* d){
	(*d).day = (*d).day + 1;
}


int main(){
	//변수 선언
	struct tagdate  d1;  //정수3개를 저장할 수 있는 공간 생성 

	//오늘날짜를 저장
	input_today(&d1);

	//날짜를 출력
	print_date(d1);

	//다음날짜로 변경
	change_nextday(&d1);

	//날짜를 출력
	print_date(d1);

	return 0;
}
