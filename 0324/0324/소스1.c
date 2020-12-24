//0325일 
#include <stdio.h>
/*
1. 변수 선언(데이터 저장공간 생성)
2. 선언된 변수를 초기화
	- 대입 연산( = )
	- 사용자 입력
3. 출력
*/
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main(){

	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();

}

//사용자로부터 나이를 입력받는 프로그램
//printf : 서식(%) 을 기반으로 출력하는 함수
//scanf_s : 서식(%)을 기반으로 입력 받는함수

void exam1(){

	int age;

	age = 20;
	
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
		
	printf("나이 : %d\n", age);
	

}

//사용자로부터 몸무게를 연속으로 2번 입력받아서 결과를 출력하세요.
//[화면출력결과]
// 첫번째 몸무게 10.1, 두번째 몸무게 20.2
//결과 : 10.1, 20.2


void exam2(){

	double a;
	double b;

	printf("첫번째 몸무게 입력 :");
	scanf_s("%lf", &a);
	printf("%lf\n",a);

	printf("두번째 몸무게 입력 :");
	scanf_s("%lf", &b);
	printf("%lf\n", b);
	
}

//문자
//사용자로부터 영문자 2개를 연속으로 받아서 결과를 출력하세요.
//첫번째 문제 : (A)
//두번째 문제 : (B)
void exam3(){
	
	char ch1;
	char ch2;

	printf("첫번째 문자를 입력해주세요 : ");
	scanf_s("%c", &ch1, sizeof(ch1));
	
	printf("두번째 문자를 입력해주세요 : ");
	scanf_s("%c", &ch2, sizeof(ch2));
	
	printf("결과 : %c, %c\n", ch1, ch2);

}

void exam4(){

	char ch1, ch2, ch3, ch4;

	printf("문자1 : ");
	ch1 = getchar();
	getchar(); // 엔터키를 빼버림
		
	printf("문자2 : ");
	ch2 = getchar();
	getchar();

	printf("문자3 : ");
	ch3 = getchar();
	getchar();

	printf("문자4 : ");
	ch4 = getchar();
	getchar();

	printf("%c, %c, %c, %c\n", ch1, ch2, ch3, ch4);

}


//문자열 전용 입출력
void exam5(){

	char str1[20]; // 배열, char 20개를 저장할 수 있는 공간
	char str2[20];

	printf("문자열 1 :");
	gets_s(str1, sizeof(str1));

	printf("문자열 2 :");
	gets_s(str2, sizeof(str2));

	puts("결과값");
	puts(str1);
	puts(str2);
	
}

//입출력 정리
void exam6(){

	// 1. 원하는 타입의 변수를 선언..
	char name[20];
	char subject[20]; // 학과
	int age;
	char gender;	// m or f
	float weight;	//

	// 2. 입력을 통한 초기화
	printf("이름 :");
	gets_s(name, sizeof(name));

	printf("학과 : ");
	scanf_s("%s", subject, sizeof(subject));	//?

	printf("나이 : ");
	scanf_s("%d", &age);
	getchar(); // 엔터를 제거

	printf("성별(m or f) : ");
	scanf_s("%c", &gender);

	printf("몸무게 : ");
	scanf_s("%f", &weight);

	//3. 결과 출력
	printf("이름 : %s\n", name);
	printf("학과 : %s\n", subject);
	printf("나이 : %d\n", age);
	printf("성별 : %c\n", gender);
	printf("몸무게 : %.1f\n", weight);
	//printf("몸무게 : %.1f\n", weight); // 소수점 1자리까지

}