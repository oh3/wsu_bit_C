// 소스.c
/*
주석(컴파일러에는 안보이는 문장들..)

프로그램
1) 데이터 : 원하는 데이터 모양(형식)을 생성
2) 기능 : 생성된 데이터 값을 저장(대입연산, 사용자입력)
		  데이터 값을 출력 print
*/




#include <stdio.h> // 헤더파일, 코드를 작성할 때 필요한
					//			함수의 선언부를 갖고 있는 파일

// exam 선언
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();

// 메인함수
void main(){
	
	//exam 호출
	exam5();
}
// 타입, 형식이 무엇이 있을까?
void exam1(){

	//1. 생성 ---------------------------------------------------
	int num;	//저장소 생성 - 정수(타입,형식)를 저장 할 수 있는
				//저장 공간을 생성, 그 공간의 이름을 num 이라함.
	//정수를 저장할 수 있는 num1이라는 이름의 공간을 생성하시오.
	int num1;

	//2. 저장 ---------------------------------------------------
	//2.1 대입연산( = : 대입연산자 )
	//		L value = R value;
	//		L value : 저장소,	R value : 저장값

	num = 10;
	num1 = 20;

	//3. 출력
	// " " : 문자열
	// printf 함수는 문자열을 출력하는 기능.
	// %d : 서식 => 뒤에 오는 값을 치환
	// \n : 개행문자 (줄바꿈)
	printf("정수 출력 : %d,%d\n", num,num1); // 출력 : 정수 출력 : 10

}
//정수를 저장 할 수 있는 number라는 이름의 공간을 생성 하고,
//그 공간에 1을 저장하시오, 그리고 출력하시오
void exam2(){
	
	int number;

	number = 1;
	printf("number => %d\n", number);

	number = 11;
	printf("number => %d\n", number);

}
/*
C프로그램에서 제공되는 타입(형식) 은?
- 정수 : int		,10				, %d
- 문자 : char		, 'a', '1'		, %c
- 실수 : dobule		, 10.1	-10.1	, %lf
*/
/*
정수를 저장할 수 있는 num 이라는 이름의 저장공간 생성
문자를 저장할 수 있는 ch 라는 이름의 저장 공간 생성
실수를 저장할 수 있는 dnumber 라는 이름의 저장 공간 생성

num에는 10을 ch에는 문자 a를 dnumber에는 12.234를 각각 저장
다음과 같이 출력하시오
출력예)


*/

void exam3(){
	
	int num;
	char ch;
	double dnumber;

	num = 10;
	ch = 'a';
	dnumber = 12.234;

	printf("num => %d\n", num);
	printf("ch => %c\n", ch);
	printf("dnumber => %f\n", dnumber);
	
}

/*
10진수	1	2	3	4	5	6	7	8	9	10
8진수	01	02	03	04	05	06	07	010	011	012
16진수	0x1	0x2	0x3	0x4	0x5	0x6	0x7	0x8	0x9	a	b	c	d	f	10
*/
void exam4(){

	int num = 65;
	char ch = 'A';	//65

	//정수와 문자간에는 교차사용이 가능하다
	//단, 문자로 표현할수있는 범위는 0~127 까지의
	//아스키코드 값에서 가능하다.
	printf("%d, %d\n", num, ch);		//65, 65
	printf("%c, %c\n", num, ch);		//A, A

	const int NUM = 10;
//	NUM =10;	//error;


}

void exam5(){

	//1. 변수 선언
	int num1 = 10;
	int num2;
	const int NUM3 = 30; // 반드시 선언과 동시에 초기화

	//2. 변수 초기화(선언된 변수에 최초로 값을 저장)
	num2 = 20;
	num1 = num1 = num2;

	//3. 저장 값 출력
	printf("%d, %d, %d\n", num1, num2, NUM3); //30, 20, 30

}

