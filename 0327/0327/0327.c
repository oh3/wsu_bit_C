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

void main(){

	//exam1();
	//exam2();
	exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();

}

//문제1.1
void exam1(){

	printf("* - * - * - * - * - * - * - * - * - * -\n");
	printf("이름 : 오상민\n");
	printf("나이 : 25\n");
	printf("전화번호 : 010-5653-0794\n");
	printf("* - * - * - * - * - * - * - * - * - * -\n");

}

//문제 1.2
void exam2(){

	printf("**************************************\n");
	printf("*\t이름 : 오상민\t\t\t*\n");
	printf("*\t나이 : 25\t\t\t*\n");
	printf("*\t전화번호 : 010-5653-0794\t*\n");
	printf("**************************************\n");


}

//문제 2
void exam3(){

	int a = 65;
	int b = 66;
	int c = 67;
	int d = 68;

	printf("************************************\n");
	printf("모음 \t 10진수 \t 16진수\n");
	printf("A \t %d \t\t 0x%x \n",a,a);
	printf("B \t %d \t\t 0x%x \n", b, b);
	printf("C \t %d \t\t 0x%x \n", c, c);
	printf("D \t %d \t\t 0x%x \n", d, d);
	printf("************************************\n");

}

// 문제 3
void exam4(){

	
	//가족 수 
	int a = 0;
	//연도
	int b = 0;
	//기록
	float c = 0;
	
	//학점
	char d; // C언어
	char e; // CPP 언어
	char f; // 자료구조
	
	
	printf("가족 수 : ");
	scanf_s("%d", &a);

	printf("당신의 가족 은 모두 %d명입니다.\n", a);

	printf("연도 : ");
	scanf_s("%d", &b);

	printf("기록 : ");
	scanf_s("%f", &c);

	printf("당신의 최고 기록은 %d년의 %.1f입니다.\n", b,c);
	getchar();

	printf("학점 입력(3개) :");
	scanf_s("%c", &d);
	getchar();

	scanf_s("%c", &e);
	getchar();

	scanf_s("%c", &f);
	getchar();
	
	putchar(d);
	putchar(e);
	putchar(f);

	printf("씨언어 : %c\n", d);
	printf("CPP언어 : %c\n", e);
	printf("자료구조 : %c\n", f);


}

//문제 4
void exam5(){

	char a = 1;
	int b = 4;
	float c = 4;
	double d = 8;

	printf("type \t size\n");
	printf("--------------\n");
	printf("char \t %d \n",a);
	printf("int \t %d \n",b);
	printf("float \t %.0f \n",c);
	printf("double \t %.0f \n",d);

}

//문제 5 (아스키코드)
void exam6(){

	char ch;
	int ch2;

	scanf_s("%c", &ch, sizeof(ch));
	printf("문자 : %c\n", ch);
	printf("값 : %d\n", ch);
	getchar();

	scanf_s("%d", &ch2);
	getchar();
	printf("정수 : %d\n", ch2);
	printf("문자 : %c\n", ch2);

}

//문제 6
void exam7(){

	int a;
	int b;
	int result;
	float result2;

	printf("정수1 :");
	scanf_s("%d", &a);

	printf("정수2 :");
	scanf_s("%d", &b);

	//더하기
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	//빼기
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	//곱하기
	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	//나누기
	result2 = (float)4.0 / 3;
	printf("%d / %d = %.1f \n", a, b, result2);
	
}

//문제 7번
void exam8(){

	//3개 정수
	int a;
	int b;
	int c;

	int hap;
	float avg;


	printf("학점 입력(3개) :");
	scanf_s("%d", &a);
	getchar();

	scanf_s("%d", &b);
	getchar();

	scanf_s("%d", &c);
	getchar();

	hap = a + b + c;
	printf("합 = %d\n", hap);

	(float)avg = hap / 3.0;
	printf("평균 = %.1f\n", avg);

	printf("결과 : 1\n");

}

//문제 8번
void exam9(){

	int a;
	int result;

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	result = a % 2;

	printf("결과 : %d\n",result);

}
