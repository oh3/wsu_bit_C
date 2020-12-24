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

}

//문제1 
//1부터 10 까지의 정수의 합계를 구하세요.
//(for, while, do~while을 사용합니다.)
void exam1(){
	
	int sum = 0;
	
	//for 문을 이용한 합계
	for (int i = 1; i <= 10; i++){
		sum = sum + i;
	}
	printf("for문을 이용한 합계 : %d\n", sum);

	//=================================================================
	int i2 = 1;
	int sum2 = 0;

	while (i2 <= 10){
		sum2 = sum2 + i2;
		i2++;
	}
	printf("while문을 이용한 합계 : %d\n", sum2);


	//=================================================================
	int i3 = 1;
	int sum3 = 0;

	do {
		sum3 = sum3 + i3;
		i3++;
	} while (i3 <= 10);

	printf("do ~ while 문을 이용한 합계 : %d\n", sum3);

}

//문제 2
//1부터 100까지의 홀수 합계를 구하세요.
//for문은 i값의 이동을 + 2만큼이동시키며 합을 구하고
//While 문은 i값을 하나씩 이동시키고, if문으로 홀수인지 검사해서 합계를 구하세요.
void exam2(){

	int sumi = 0;

	int j = 1;
	int sumj = 0;

	int k = 1;
	int sumk = 0;

	for (int i = 1; i < 100; i = i + 2)
	{
		sumi = sumi + i;
	}
	printf("합계(for) : %d\n", sumi);

	while (j < 100)
	{
		sumj = sumj + j;
		j = j + 2;
	}
	printf("합계(while) : %d\n", sumj);

	do
	{
		sumk = sumk + k;
		k = k + 2;
	} while (k < 100);
	printf("합계(do while) : %d\n", sumk);
}

//문제3
//0을 입력할 때까지의 합계를 계산하세요.(원하는 반복문을 사용하여 구현할 것)
void exam3(){

	int num;
	int sum = 0;

	while (1){ // 1: 참 => 무한루프
		printf("정수(종료:0) : ");
		scanf_s("%d", &num);
		sum = sum + num;

		//조건에 만족하면 while문을 종료
		if (num == 0){
			//break; 반복문을 종료하는 키워드
			
			break;
		}// if 끝
	}// while 끝
	printf("합계 : %d\n", sum);
}

//문제4
//알파벳 대문자를 출력하세요.그리고 역순으로 출력하세요.
void exam4(){

	char a;

	for (a = 'A'; a < 'Z'; a++)
	{
		printf("%c ", a);
	}
	printf("%c\n", a);

	for (a = 'Z'; a > 'A'; a--)
	{
		printf("%c ", a);
	}
	printf("%c\n", a);
}


//문제 5
//로그인을 흉내냅니다. 암호는 1234이고, 암호가 일치할 때 까지 입력을 받습니다.
void exam5(){

	int num;
	while (1){
		printf("암호 : \n");
		scanf_s("%d", &num);

		//조건에 만족하면 while문을 종료
		if (num == 1234){
			printf("암호 일치\n");
			break;
		}else
			printf("암호 불일치\n");
			continue;
	}
}

//문제 6
//구구단을 출력하세요. 출력할 단은 키보드로부터 입력 받습니다.
void exam6(){

	int i; //단
	int j = 0; //곱

	printf("단<2-9> : ");
	scanf_s("%d", &i);

	printf("\n");
	for (int j = 1; j <= 9; j++){
		printf("%d * %d = %d\n", i, j, (i*j));
	}
}

//문제 7
void exam7(){
	
}

void exam8(){
	
}

void exam9(){

}

void exam10(){

}