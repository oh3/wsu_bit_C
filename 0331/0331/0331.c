#include <stdio.h>

//횟수가 정해져 있는 경우
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
//횟수가 정해져 있지 않은 경우
void exam6();

void main(){

	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();

}

//반복문 while
//초기값, 증감, 조건
void exam1(){

	int i = 0; // 초기값

	while (i < 5){ // 조건이 참이면 while을 실행
		//===========================
		printf("[%d],Hello World\n",i);
		//===========================
		i++;		//증감
	}

}

// 1의자리 홀수만 출력( 10보다 작은 값을 출력할때 까지 )
void exam2(){

	int i = 1; // 초기값

	while (i < 10){ // 조건이 참이면 while을 실행
		//===========================
		printf("[%d] ", i);
		//===========================
		i = i+ 2;		//증감
	}
}

//1부터 10까지 합을 구해라
void exam3(){

	//합계
	int sum = 0;

	//초기값
	int i = 1;
	while (i <= 10){
		//========================
		printf("%d", i);
		sum = sum + i;
		//========================
		i++;
	}

	printf("합의 결과 : %d", sum);
}

// do-while문
void exam4(){

	int i = 1;

	do {
		//==================
		printf("hello World\n");
		//==================
		i++;
	} while (i < 10);


}

//초기문 -> [조건 -> 구문실행 -> 증감] -> 조건 -> 구문실행
//-> 증감 -> 조건 [
void exam5(){

	for (int i = 0; i <= 10; i++){
		printf("[%2d],Hello World\n", i);
	}

}

//사용자로부터 0을 입력할때 까지 반복해서 정수를 입력 받아라.
void exam6(){

	int num;
	while (1){ // 1: 참 => 무한루프
		printf(">> 정수 입력 : ");
		scanf_s("%d", &num);

		//조건에 만족하면 while문을 종료
		if (num == 0){
			//break; 반복문을 종료하는 키워드
			break;
		}
	}

}