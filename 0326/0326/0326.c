#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();
void exam11();
void exam12();
void exam13();

void main(){
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();
	//exam10();
	//exam11();
	exam12();
	//exam13();
	
}

void exam1(){

	int a, b, c;

	a = 2000;
	b = 3000;

	c = a * b;

	printf("%d * %d = %d, \n", a, b, c);

}

void exam2(){

	//외형은 문자이지만 내부적으로 정수형태로 저장관리된다.
	char ch1 = 'A';

	ch1 = ch1 + 1;

	printf("아스키코드값 : %d, %c\n", ch1, ch1);

}

//증감연산자
void exam3(){
	
	//전치 : 구문안에서 먼저 연산.
	int a = 1;
	int b;

	// ++a 전치 연산
	b = ++a;	//b = 2;

	printf("%d, %d\n", a, b); //2, 2

	//후치 : 구문이 끝난 후 연산
	int a1 = 1;
	int b1;

	b1 = a1++; //b1 = 1;

	printf("%d, %d\n", a1, b1); // 2, 1
}

void exam4(){

	int a = 1;
	int b;

	//하나의 구문안에서 변수의 값은 동일하다.
	b = ++a + ++a + ++a; //b = 4 + 4 + 4
	//	1	   1	 1
	printf("%d, %d\n", a, b); //4, 12

	int a1 = 2;
	int b1;

	//후치
	b1 = a++ +  a++  + a++; // b1 = 1 + 1 + 1

	printf("%d, %d\n", a1, b1); // 

}

void exam5(){

	int a = 1;
	int b;

	b = ++a + a++ + ++a + ++a; // b = 4 + 4 + 4 + 4
		
	printf("%d, %d\n", a, b); // 5, 16
}

void exam6(){

	int number = 92; // 92;

	// 90보다 크거나 같고, 100보다 작거나 같으면  참인가?
	//int result = 90 <= number <= 100;
	int result = 90 <= number && number <= 100;
	printf("%d\n", result); // 1
	
}

//문제1) :
//사용자로부터 정수 값 2개를 입력받고 두 수의 곱의 결과를
//출력하시오
void exam7(){
	
	int num1, num2;
	int result;

	printf("첫번째 정수를 입력해주세요.");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력해주세요.");
	scanf_s("%d", &num2);

	result = num1 * num2; //<============ 3

	printf("%d * %d = %d\n",num1, num2, result);

}

//문제2)
//사용자로부터 문자를 2개 입력받고
//첫번째 문자가 크다면 1을, 작다면 0을
//출력하시오
void exam8(){

	char ch1, ch2;
	int result;
	
	printf("첫번째 문자입력 : ");
	scanf_s("%c", &ch1,sizeof(ch1)); 
	getchar(); //엔터키 빼줌

	printf("두번째 문자입력 : ");
	scanf_s("%c", &ch2, sizeof(ch2));

	result = ch1 > ch2;

	printf("%d\n", result);

}

//키보드로부터 입력 받은 정수 N을 5로 나눈 몫과 나머지는 얼마입니까?
void exam9(){
	
	int key; 
	int b = 5;

	int mok; // 몫
	float c = 0; // 나머지

	printf("정수 : ");
	scanf_s("%d", &key);
	
	mok = key / b;
	
	printf("몫 : %d\n", mok);
	printf("나머지 : %.0f\n", c);

}

//다음은 원의 둘레를 구하는 공식입니다.
//반지름을 입력받아서 원의 둘레를 구하시오.
//반지름은 정수이고, 파이는 3.1416입니다.
//계산 결과는 소수점 두 자리 까지 합니다.
//공식) 원 둘레 = 2 * 파이 * 반지름
//출력) 반지름 : 10
//		  면적 : 316.16
void exam10(){

	int ban; //반지름
	double result = 0; // 원의 둘레

	printf("반지름 입력 : ");
	scanf_s("%d", &ban);

	//공식
	result = 2 * 3.1416 * ban;

	//결과
	printf("반지름 : %d\n", ban);
	printf("면적 : %.2fl\n", result);

}

//다음은 섭씨를 화씨로 변환하는 공식입니다.
//입력받은 섭씨 온도는 화씨로 몇도입니까?
//입력은 정수로, 출력은 소수점 한자리까지 출력합니다.
//공식) F(화씨) = C(섭씨) * (9 / 5) + 32
//출력) 섭씨 : 23
//      화씨 : 73.4
void exam11(){

	int sup;
	float hwa;
	scanf_s("%d", &sup);

	//공식
	hwa = sup * (9.0 / 5) + 32;

	printf("섭씨 : %d\n",sup);
	printf("화씨 : %.1f\n",hwa);
	
}
//키보드로부터 소문자를 입력 받아 대문자로 변환하여 출력하세요.
// 출력) 입력(소문자) : a
//		 변환(대문자) : A
void exam12(){

	/*
	char ch[2];

	scanf_s("%c",&ch[2]);

	printf("입력 : %c\n", ch[2]);

	ch[2] = 'A';

	printf("변환 : %c", ch[2]);

	return 0;
	*/
	char a;
	char result;
	printf("입력(소문자) : ");
	scanf_s("%c", &a);

	result = a - 32;

	printf("변환 대문자 : %c", result);

}

//키보드로부터 세 개의 정수를 입력받고, 그 합과 평균을 출력하세요.
//출력 ) 정수1 : 10
//출력 ) 정수2 : 20
//출력 ) 정수3 : 30
//출력 ) ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
// 합계 : 60
// 평균 : 20
void exam13(){

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	int hap = 0;
	double avg = 0;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	hap = num1 + num2 + num3;
	avg = hap / 3.0;

	printf("정수1 : %d\n", num1);
	printf("정수2 : %d\n", num2);
	printf("정수3 : %d\n", num3);
	printf("===================\n");
	printf("합계 : %d\n", hap);
	printf("평균 : %.1lf\n", avg);

}