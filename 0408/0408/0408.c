#include <stdio.h>

int arr[10];
int initarr();
int Insertarr();
int printarr();
int deletearr();

void exam1();
void exam2();
void exam3();
void exam4();

void main(){

	int idx;
	while (1) {
		printf("[1]입력[2]전체출력[3] 삭제[4] 종료\n");
		scanf_s("%d", &idx);
		switch (idx)
		{
		case 1: Insertarr(); break;
		case 2: printarr(); break;
		case 3: deletearr(); break;
		case 4: return;
		}
	}

	//exam1();
	//exam2();
	//exam3();
	//exam4();

}

int initarr(){
	//반복문을 이용하여 arr 의 모든 값들을 0 으로 초기화 하는 함수를 구현한다.
	for (int i = 0; i < 10; i++)
		arr[i] = 0;

}

int printarr(){

	//printarr 라는 이름의 함수를 만들고, 배열의 모든 값들을 한 줄로 출력한다.
	for (int i = 0; i < 10; i++)
		printf(arr[i]);

}

int Insertarr(){
	
	int index; // 저장인덱스
	int savenum; //저장값

	//사용자로부터 인덱스 입력 받음
	printf(">> 인덱스 입력 : ");
	scanf_s("%d", &arr);

	//사용자로 부터 저장값을 입력 받음.
	printf(">> 저장값 입력 : ");
	scanf_s("%d", &savenum);

	//arr의 index에 저장값을 저장한다.
	arr[index] = savenum;

	//printarr 함수를 호출하여 결과를 확인한다.
	printarr;

}


int deletearr(){

	int index;
	
	printf(">> 배열의 인덱스 입력 : ");
	scanf_s("%d", index);

	arr[index] = 0;

	//printarr 함수를 호출하여 결과를 확인한다.
	printarr;;

}

//문제 1
//1. 다음 포인터 변수들의 정보를 작성하세요.(첫번째 작성한 내용을 참조할 것)
void exam1(){
	
	/*
	//			타입	값 /주소값	개수	메모리크기	차수
	int * data[2];  //int		주소	  2			8		 2
	char* p1;		//char		주소	  1			1		 1 
	char    **p2;	//char		주소	  1			1		 2
	int *p3[5];		//int		주소	  5			20		 2
	double *p4;		//double	주소	  1			8		 1
	*/

}

//문제2
//주석에 있는 코드를 작성하시오
void exam2(){
	
	
	//정수를 1개 저장할 수 있는 num 이라는 이름의 변수 선언
	int num;

	//num에 사용자 입력을 통해 값 저장
	printf(">> 사용자 입력 : ");
	scanf_s("%d", &num);

	//정수의 주소를 저장할 수 있는 pnum이라는 이름의 변수 선언
	int* pnum;

	//pnum 에 num의 주소를 저장
	pnum = &num;

	//num의 값과 num의 주소값 출력
	printf("num의 값 : %d\n", num);
	printf("num의 주소값 : %p\n", pnum);

	//pnum의 값과 pnum의 주소값 pnum의 역참조값을 출력
	printf("pnum의   값 : %d\n", pnum);
	printf("pnum의 역참조값 : %d\n", *pnum);

	//pnum의 역참조 문법을 이용해서 num의 값은 50으로 수정
	*pnum = 50;

	//num의 값 출력
	printf("num의 값 : %d\n", num);
	

	//=====================================================

	// 문자를 5개 저장할 수 있는 arr 배열변수를 선언하고, 선언과 동시에 a,b,c,d, e 의 문자로 초기화
	char arr[6] = { 'a', 'b', 'c', 'd', 'e' };

	//문자의 주소를 저장할 수 있는 pch1 이라는 이름의 변수 선언
	char* pch1;

	//문자의 주소를 저장할 수 있는 pch2 이라는 이름의 변수 선언
	char* pch2;

	//pch1에 arr 배열의 주소를 저장
	pch1 = arr;

	//pch2에 arr 배열의 인덱스 2의 주소를 저장
	pch2 = &arr[2];

	//arr 와 pch1를 이용하여 arr에 있는 b 문자를 각각 출력
	printf("arr : %c\n", arr[1]);
	printf("pch1 : %c\n", pch1[1]);

	//arr 와 pch2를 이용하여 arr에 있는 a 문자를 각각 출력
	printf("arr : %c\n", arr[0]);
	printf("pch2: %c\n", pch2[-2]);

	//pch1을 이용하여 arr에 저장된 d 를 대문자 D로 변경
	pch1[3] = 'D';
	printf("pch1[3] : %c\n", pch1[3]);

	//pch2를 이용하여 arr에 저장된 e 를 소문자 E로 변경
	pch2[1] = 'E';
	printf("pch2[1] : %c\n", pch2[1]);

	//arr를 이용하여 배열 전체 문자를 출력(for문 사용)
	pch2[1] = 'd';
	for (int i = 0; i < 5; i++)
		printf("%c\n", arr[i]); 

}

//문제3
//메모리 그림을 그리고, 출력 결과를 적으시오.
void exam3(){

	//a의 크기가 자유로운 배열 선언
	int a[] = { 2, 3, 4, 5, 6, 8 };

	printf("%d\n", sizeof(a));		//24
	printf("%d\n", sizeof (a[0]));  //4
	printf("%d\n", (*a + 5));		//7
	printf("%d\n", *(a + 4));		//6
	printf("%d\n", *a);				//2

}


//문제 4
//메모리의 그림을 그리고, 출력 결과를 적으시오
void exam4(){


	//a의 크기를 자동
	int arr[] = { 2, 3, 4, 5, 6, 8 };
	int *ip = arr;

	printf("%d\n", arr);	//2750740
	printf("%d\n", ip);		//2750740
	printf("%d\n", ip + 2); //2750748
	printf("%d\n", ip[2]);	//4
	printf("%d\n", *(arr + 1)); //3
	
}

//문제 5
//아래 코드를 작성하시오.(순차적으로 함수를 작성하고, main함수에서 호출하는 코드)
