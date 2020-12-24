#include <stdio.h>
#include <stdlib.h>

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

//문제 1번
//다음 배열들의 크기는 몇 바이트인가? Sizeof 연산자를 활용하여 결과를 출력 하시오
//(실제 크기는 sizeof 연산자를 이용해 구할 수 있다.)
void exam1(){

	//배열 선언
	int p1[5];
	int p2[3][5];

	char p3[20];
	char p4[2][20];

	//출력
	printf("%d byte \n", sizeof(p1));
	printf("%d byte \n", sizeof(p2));
	printf("%d byte \n", sizeof(p3));
	printf("%d byte \n", sizeof(p4));

}

//문제 2번
void exam2(){

	//변수 선언
	int num[4] = { 1, 2, 3, 4 };

	// 0번째 인덱스 값 출력
	printf("0번째 인덱스의 값 : %d\n", num[0]);

	// 2번째 인덱스 값 출력
	printf("2번째 인덱스의 값 : %d\n", num[2]);

	//변수 선언
	char arr1[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	char arr2[5] = { 'A', 'B', 'C', 'D', 'E' };

	//arr1에 저장된 문자 'e' 출력
	printf("arr1 : %c\n", arr1[4]);
	
	//arr2에 저장된 문자 'C' 출력
	printf("arr2: %c\n", arr2[2]);

	//arr1[2] 문자와 arr2[3]번째 문자가 같은가???
	if (arr1[2] == arr2[3]){
		printf("동일하다\n");
	}else{
		printf("다르다\n");
	}

}

//문제3
//정수 10개를 저장하는 arr1라는 이름의 배열을 선언하고, 1차원 배열을 모두 0으로 초기화
//그리고 저장 결과를 한 줄에 출력할 것
void exam3(){

	//배열 선언
	int arr1[10];
	int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
	char c[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int d = 0;
	int e = 0;
	int f = 0;

	for (int i = 0; i < 10; i++){

		arr1[i] = 0;

		printf("arr1[%d] : %d\n",i, arr1[i]);
	}

	for (int i = 0; i < 10; i++){
		printf("arr2[%d] : %d\n", i,arr2[i]);
	}

	for (c[f] == c[0]; f <= 25; f++)
	{
		printf("%c ", c[f]);
	}
	printf("\n");
	system("pause");

}

//문제 4
void exam4(){

	int arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
	
	printf("첨자 : ");

	for (int i = 0; i < 12; i++){	
		printf("%2d " ,arr[i]);
	}

	srand((unsigned)time(NULL));

	printf("\n");
	printf("요소 : ");
	for (int i = 0; i < 12; i++){

		//ex)1부터 99사이의 값으로 난수를 얻고 싶어
		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}
	
}

//문제 5
// XX
void exam5(){

	int arr[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	printf("첨자 : ");

	for (int i = 0; i < 12; i++){
		printf("%2d ", arr[i]);
	}

	srand((unsigned)time(NULL));

	printf("\n");
	printf("요소 : ");
	for (int i = 0; i < 12; i++){

		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}

	printf("\n");
	printf("변환 : ");

	for (int i = 0; i < 12; i++){

		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}



}

void exam6(){


}