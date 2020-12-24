#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();


void main(){
	
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();

}

//구문1) 특정 문장을 실행하거나 실행하지 않는 구조
//		if문
void exam1(){

	int jumsu;

	jumsu = 80;

	//점수가 90보다 크다면 "크다"?
	if (jumsu > 90);
	printf("크다\n");

}

//구문2) 2개의 문장을 상황에 따라서 선택적으로 출력하는구조
//질문 -> 남자야? 여자야?
// if ~ else
void exam2(){

	char gender;

	gender = 'f'; // 'f'

	//비교연산자 == 사용
	if (gender == 'm')
		printf("남자\n");
	else
		printf("여자\n");


}

//구문3) 3개 이상의 문장을 상황에 따라서 선택적으로 출력하는 구조
// jumsu가 'A','B','C'...
void exam3(){

	int jumsu;
	char ch;

	jumsu = 82;

	if (jumsu >= 90 && jumsu <= 100)
		ch = 'A';
	else if (jumsu >= 80 && jumsu < 90)
		ch = 'B';
	else if (jumsu >= 70 && jumsu < 79)
		ch = 'C';
	else
		ch = 'F';
		
	printf("%d점수의 학점은 %c입니다.\n", jumsu, ch);
}

//만약 특정 조건을 만족하는 문장을 여러개 실행하고자 하는 경우?
//사용자로부터 영문자를 입력받아 아래와 같이 처리하시오.
//만약 대문자라면 대문자입니다. 문장을 출력하고, 소문자로 변경..
//소문자라면 소문자입니다. 문장을 출력하고, 대문자로 변경...
void exam4()
{
	char ch;

	printf("영문자 입력 : ");
	scanf_s("%c", &ch, sizeof(ch));

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("대문자 입니다\n");
		ch = ch + ('a' - 'A'); //ch = ch + 32
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("소문자 입니다\n");
		ch = ch - ('a' - 'A');
	}
	printf("변경한 결과는 %c\n", ch);
}

void exam5(){

	char ch = 'B';

	switch(ch){
		case 'A':
			printf("1\n");
			printf("2\n");
			printf("3\n");
			break;
		case 'B':
			printf("4\n");
			printf("5\n");
			break;
		case 'C':
			printf("6\n");
			break;
	}
}