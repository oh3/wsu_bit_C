//함수
#include <stdio.h>

//미션 : 한줄에 N개의 *을 출력한다.
//		단, 필요에 의해 여러줄을 출력할 수 있다.

//반복적인 기능 ==> 함수
//step1 : 지금까지 배운 문법을 갖고 해결.

//step2 : 반복적인 기능 ==> 함수
//		 함수의 기능을 재사용 ==> 함수 호출

//미션 2 한줄에 *을 20개 출력
//		  그 다음 한 줄에는 *을 10개 출력하시오.

//step1 : 또 다른 함수들을 만들면서 해결

/*
void printchar(int n);

void main(){

	printchar(20); //함수 호출시 정보를 전달..!!! 
	printchar(100);
}


//함수의 정의 --> 정의문을 메인문에서 호출
void printchar(int n){

	for (int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");

}
*/

//step2 : 함수를 호출 할 때 내가 필요한 정보를 전달.
/*
void printchar(int n);

void main(){

	printchar(20); //함수 호출시 정보를 전달..!!! 
	printchar(100);
}


//함수의 정의 --> 정의문을 메인문에서 호출
void printchar(int n){

	for (int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");

}
*/


/*
void printchar(char c,int n);

void main(){

	printchar('^', 20); //함수 호출시 정보를 전달..!!! 
	printchar('.',100);
}


//함수의 정의 --> 정의문을 메인문에서 호출
void printchar(char c, int n){

	for (int i = 0; i < n; i++){
		printf("%c",c);
	}
	printf("\n");

}
*/

//==============================================
//foo 함수는 총 3개의 변수를 생성한다.
//그 중 2개의 변수를 매개변수라 한다.
//그 중 1개의 변수를 지역변수라 한다.
// 이 모든 변수는 foo의 stack메모리에 저장된다.


//따라서 foo를 호출 하려면 반드시 int type 2개를 전달해야한다.

		//매개변수
void foo(int n1, int n2){

	//지역변수
	int n3;

}

void main(){

	foo(int n1, int n2);

	printf("foo", foo);

	n3;
}