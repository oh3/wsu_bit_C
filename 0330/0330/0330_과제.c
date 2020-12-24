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
	exam11();

}

//문제 1
//n이 3과 5의 배수이다
void exam1(){
	
	int n = 3;

	//n이 3과 5의 배수이다
	if (n % 3 == 0 && n % 5 == 0)
		printf("조건에 만족.\n");
	else
		printf("조건에 위배됨\n");

}

//문제 1.1
// ch가 대문자이다
void exam2(){

	char ch = 'a';

	if (ch >= 'A' && ch <= 'Z'){
		printf("대문자 입니다\n");
	}else
	printf("대문자가 아닙니다.");
}

//문제 1.2
//n이 -5보다 작거나 5보다 크다
void exam3(){

	int n = 7;

	if (n < -5 || n > 5)
		printf("조건에 만족");
	else
		printf("조건에 불만족");

}

//문제 1.3
//n이 홀수가 아니다.
void exam4(){

	int n = 1;

	if (n % 2 == 0) // 짝수
		printf("짝수 입니다.\n");
	else
		printf("홀수입니다.\n");

}

//문제2
//2. 자격증 시험에는 보통 과락이 있습니다. 일정 점수 이상이면 성공이고 아니라면 실패입니다.
//낙제 점수는 언제나 60점입니다. 시험 성적을 입력 받고 합격인지 불합격인지 출력하세요.
void exam5(){

	int score;

	score = 61;

	if (score >= 60){
		printf("점수 :%d\n", score);
		printf("결과 : 합격\n");
	}
	else
		printf("불합격\n");
}

//문제3
//3. 양의 정수 세 개를 입력 받고, 이들의 합이 삼각형의 내각이 될 수 있는지 검사하세요.
//(삼각형의 내각의 합은 180을 넘을 수 없다.)
void exam6(){

	int num1;
	int num2;
	int num3;
	int hap = 0;

	printf("정수 입력 (3개) : ");
	scanf_s("%d", &num1);
	getchar();

	scanf_s("%d", &num2);
	getchar();

	scanf_s("%d", &num3);
	getchar();

	hap = num1 + num2 + num3;

	if (hap <= 180)
		printf("결과 : 가능");
	else
		printf("결과 : 불가능\n");

}

//문제 4
//정수 N이 짝수인지 홀수인지 검사하세요.
void exam7(){

	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	if (n % 2 == 0){
		printf("정수 : %d\n", n);
		printf("결과 : 짝수\n");
	}else
		printf("결과 : 홀수\n");
}
//문제5
// 정수 5개를 입력받아서 음수와 양수의 합계를 출력하세요.
void exam8(){

	int num1, num2, num3, num4, num5;
	int hap1 = 0;
	int hap2 = 0;

	printf("정수 5개 입력 : ");
	scanf_s("%d", &num1);
	getchar();

	scanf_s("%d", &num2);
	getchar();

	scanf_s("%d", &num3);
	getchar();

	scanf_s("%d", &num4);
	getchar();

	scanf_s("%d", &num5);
	getchar();

	if (num1 > 0)			hap1 = hap1 + num1;
	else					hap2 = hap2 + num1;

	if (num2 > 0)			hap1 = hap1 + num2;
	else					hap2 = hap2 + num2;
	
	if (num3 > 0)			hap1 = hap1 + num3;
	else					hap2 = hap2 + num3;

	if (num4 > 0)			hap1 = hap1 + num4;
	else					hap2 = hap2 + num4;

	if (num5 > 0)			hap1 = hap1 + num5;
	else					hap2 = hap2 + num5;
	

	printf("정수(5개) : %d %d %d %d %d\n", num1, num2, num3, num4, num5);
	printf("음수 합계 : %d\n", hap1);
	printf("양수 합계 : %d\n", hap2);

}

//문제 6번
//우리나라는 섭씨 온도를 사용합니다. 
//섭씨 온도가 들어오면 화씨 온도로
//화씨 온도가 들어오면 섭씨 온도로 변환하는 코드를 작성하세요.
//온도의 유형은 문자로, 온도는 정수로 처리합니다.
void exam9(){

}

//문제 7번
// ch가 대문자라면 소문자로 , 소문자라면 대문자로 변경하세요.
void exam10(){


}

//문제 8번
//학점을 계산하는 문제입니다.학생의 성적은 0점부터 100점까지 있습니다.
//90점 이상이면 A, 80점 이상이면 B 70점이상이면 C 60점 이상이면 D, 나머지는 모두 F
//학점입니다
void exam11(){

	int score;

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90){
		printf("점수 : %d\n",score);
		printf("학점 : A \n");
	}
	else if (score >= 80){
		printf("점수 : %d\n", score);
		printf("학점 : B \n");
	}
	else if (score >= 70){
		printf("점수 : %d\n", score);
		printf("학점 : C \n");
	}
	else if (score >= 60){
		printf("점수 : %d\n", score);
		printf("학점 : D \n");
	}
	else
		printf("F");

}


