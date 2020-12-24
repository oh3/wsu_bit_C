//Entry Point 함수
// 반드시 문법적으로 필요한 함수
// 프로그램의 시작은 여기서부터이다.
#include<stdio.h>	//h 헤더파일 : 소스코드에 필요한 정보를 갖고 있는 파일
					//				printf 함수의 선언문을 갖고 있다.

void fun1();
void fun2();
void foo();

void main(){
	// 미리 만들어서 제공되는 함수 -> 라이브러리 함수
	printf("main()\n"); // print 이름의 함수 호출

	fun1();
}

void fun1(){
	printf("fun1()\n");
}

void fun2(){
	printf("fun2()\n");
}

void poo(){

}