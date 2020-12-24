#include <stdio.h>
#include <stdlib.h> //exam5
#include <time.h> //exam5

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

void exam1(){

	//1. 변수 선언
	int num;
	int arr[3]; // 배열변수

	//2. 변수 초기화(대입)
	num = 10;
	arr[0] = 20;
	arr[1] = 30;
	arr[2] = 40;

	//2.2 변수 초기화(입력 - scanf_s)
	printf(">> 정수 입력 : ");
	scanf_s("%d", &num);

	getchar();

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[0]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[1]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[2]);





	//3. 변수 출력
	printf("정수 출력 : %d\n", num);
	printf("배열 출력 : %d\n", arr[0]);
	printf("배열 출력 : %d\n", arr[1]);
	printf("배열 출력 : %d\n", arr[2]);

}

//3개의 정수를 저장 할 수 있는  num이라는 이름의
//배열 변수 선언, 사용자 입력을 통해 정수 3개를 입력
//받아라 저장된 정수의 합을 result 변수에 저장해라
//결과를 출력하시오.
void exam2(){

	//변수선언
	int num[3];
	int result;

	//입력
	printf(">> 정수 입력 : ");
	scanf_s("%d", &num[0]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &num[1]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &num[2]);

	//계산
	result = num[0] + num[1] + num[2];

	//출력
	printf("합계 : %d\n", result);

}

//3번미션
//4개의 정수를 저장 할 수 있는  arr이라는 이름의
//배열 변수 선언, 사용자 입력을 통해 정수 3개를 입력
//받아라 저장된 정수의 합을 result 변수에 저장해라
//저장된 정수의 평균의 결과를 average변수에 저장해라
//결과를 출력하시오. (단 평균은 소숫점 1자리까지)
void exam3(){

	//변수선언
	int arr[4];
	int result = 0;
	float average = 0;

	//정수입력
	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[0]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[1]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[2]);

	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[3]);

	//arr 배열의 합계
	result = arr[0] + arr[1] + arr[2] + arr[3];

	//arr 합계의 평균
	//average = result / 4.0f;
	average = (float)result / 4;

	//결과
	printf("합계 : %d\n", result);
	printf("평균 : %.1f\n", average);
}

//랜드 설명용
// rand에 커서올리고 F1 누르고 헤더파일 선언부 가져오기
// #include <stdlib.h>
void exam5(){

	//실행시킬때마다의 시간으로 키를 설정함
	//#include <time.h>
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++){
		// 0 ~ 정해진 MAX 까지
		// 0 ~ 99사이의 값으로 난수를 얻고 싶어.(나머지 연산자)
		//int r = rand() % 100; //랜덤 값을 100으로 나누면 됨.
		
		//ex)1부터 99사이의 값으로 난수를 얻고 싶어
		int r = (rand() % 99) + 1; // 1 ~ 100

		printf("%d\n", r);
	}

}

//100개의 정수를 저장할 수있는 arr이름의 배열 변수선언
//사용자 입력을 통해서 정수 100개를 입력받아라.

// MAXDATA ==> 1000으로 치환
#define MAXDATA 1000

void exam4(){

	int arr[MAXDATA];

	//랜덤함수
	srand((unsigned)time(NULL));

	//배열과 for문 -> i변수는 배열의 인덱스를 이용하는 용도로만;
	//난수를 이용해 배열의 모든 정수를 초기화함.
	for (int i = 0; i < MAXDATA; i++){ // 0 ~ 99

		arr[i] = rand() % 100;

	}
	//전체 출력(순회) (기억하고있기)
	// 순회 : 이코드가 가지고 있는 모든 코드를 출력
	for (int i = 0; i < MAXDATA; i++){

		// 20개씩 개행처리 i가 0이 아닐때
		if (i % 20 == 0 && i != 0)
			printf("\n");

		// 3칸짜리 arr[i] 출력
		printf("%3d", arr[i]);

	}
}

//정수를 1000개 저장 할 수 있는 arrnum 배열을 선언하고,
//1~99사이의 난수값을 발생시켜 초기화 하시오,
//모든 배열에 저장된 요소의 합과 평균을 출력하시오. (단 평균은 소숫점 1자리까지)
//사용자로부터 1~99사이의 값을 입력받아
//해당 값이 배열에 몇개 저장되어있는지 확인해보시오.

#define MAXDATA1 1000
void exam6(){

	//1. 변수선언
	int arrnum[MAXDATA1];
	int sum = 0;
	double average = 0.0;

	//rand 함수
	srand((unsigned)time(NULL));

	//2. 초기화
	for (int i = 0; i < MAXDATA1; i++){

		arrnum[i] = rand() % 99 + 1;

	}

	//3. 연산
	for (int i = 0; i < MAXDATA1; i++){
		sum = sum + arrnum[i];
	}

	average = (double)sum / MAXDATA1;

	//4. 결과 출력
	printf("합계 : %d\n", sum);
	printf("평균 : %.1f\n", average);

	//==============================================
	int number;
	int count = 0;

	printf("정수 입력(1~99) : ");
	scanf_s("%d", &number);

	for (int i = 0; i < MAXDATA1; i++){
		if (arrnum[i] == number){
			count++;
		}
	}

	printf("찾은 정수의 갯수는 : %d\n", count);
}