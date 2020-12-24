#include <stdio.h>

//함수의 매개변수와 전달인자
//main함수에서는 아직 정의되지않은 3개의 함수를 호출하고있다.
//에러가 없도록 세개의 함수를 정의하시오.(코드는 없어도됨)

void fun_add(int n1, int n2);
void fun_div(int n1, int n2);
void fun_cal(int n1, int n2, char oper);

void main(){

	int n1 = 10, n2 = 20;
	char oper = '+';

	fun_add(n1, n2);
	fun_div(n1, n2);

	printf("\n");

	fun_cal(n1, n2, '+');
	fun_cal(n1, n2, '-');
	fun_cal(n1, n2, '*');
	fun_cal(n1, n2, '/');

}

//더하기
void fun_add(int n1, int n2){

	int result = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, result);

}

//나누기
void fun_div(int n1, int n2){	float result = (float)n1 / n2;	printf("%d / %d = %f\n", n1, n2, result);}

//연산
void fun_cal(int n1, int n2, char oper){

	float result = 0;

	switch (oper){
	case '+': (float)result = n1 + n2; break;
	case '-': (float)result = n1 - n2; break;
	case '*': (float)result = n1 * n2; break;
	case '/': (float)result = n1 / n2; break;
	default: printf("잘못된 연산자입니다.\n");
			return; // <======== ***** 함수를 종료하는 키워드
	}

	printf("%d %c %d = %.1f\n", n1, oper, n2, result);

}