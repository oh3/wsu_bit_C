#include <stdio.h>

//step1) 매개변수 X, 리턴 X
//Hello Worldfmf 출력하는 exam1이라는 함수

/*
void exam1();


void main(){

	exam1();
}

void exam1(){

	printf("Hello World\n");

}
*/

//step2) 매개변수 O, 리턴 O
//정수 2개를 전달받아 그 합을 반환하는 exam1 함수

/*
int exam1(int n1, int n2);

void main()
{
	int num1 = 10;
	int num2 = 20;
	int result;

	result = exam1(num1, num2);  //<=================

	printf("합의 결과 : %d\n", result);
}

int exam1(int n1, int n2)
{
	int result;

	result = n1 + n2;

	return result;
}
*/

//정수 3개를 전달받아 그 합을 반환하는 getsum 함수

/*
int getsum(int n1, int n2, int n3);

void main(){

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int result;

	result = getsum(num1, num2, num3);

	printf("합의 결과 : %d\n", result);

}

int getsum(int n1, int n2, int n3){

	int result;

	result = n1 + n2 + n3;

	return result;
}
*/

//정수 3개와 정수의 갯수를 전달받아 평균을 반환하는 getaverage 함수
/*
float getaverage(int n1, int n2, int n3);

void main(){

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	float result;

	result = getaverage(num1, num2, num3);

	printf("평균의 결과 : %2.f\n", result);
	
}

float getaverage(int n1, int n2, int n3){

	int sum;
	int avg;

	sum = n1 + n2 + n3;

	(float)avg = (float)sum / 3;

	return avg;

}
*/

//문자 1개를 전달받아 대문자라면 1을 소문자라면 0을 반환하는 itbigchar 함수

/*
int isbigchar(char ch);

void main(){


}

int isbigchar(char ch)
{
	int num;
	if (ch >= 'a' && ch <= 'z')
		num = 0;
	else if (ch >= 'A' && ch <= 'Z')
		num = 1;

	return num;
}

*/