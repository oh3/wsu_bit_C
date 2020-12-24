#include <stdio.h>

void exam1();

//치환
//전처리기(인터프리터가 디버깅 하기 전 먼저 처리하는것)
#define EXAM1 void eaxm1();
#define MSG1 "문자열정의"

EXAM1	//==> void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();

void mystrcpy(char* s1, char* s2);

int main(){

	exam7();

	return 0;

}

void exam1(){

	int n1, n2;

	printf("0x%p, Ox%p\n", &n1, &n2);

	printf("%s, 0x%p\n", "문자열정의");
	printf("%s\n", MSG1);
	
}

void exam2(){

	char arr[10] = { "abcdefg" };

	//%s : 주소부터 '\0' 나올때 까지 출력하는 문자열 출력서식
	printf("%s\n", arr);		// abcdefg
	printf("%c\n", arr[3]);		// d
	printf("%s\n", arr + 2);	// cedfg
	printf("%c\n", *(arr + 2)); // c

}

void exam3(){

	char arr[10] = { "abc\0def\0" };
	printf("%s\n", arr);	//abc
	printf("%s\n", arr + 4);//def

}

void exam4(){
	//문자열 4개가 저장되어 있는 2차원 배열
	char arr[4][5] = { "abcd",					   "efhg",					   "ijkl",					   "mnop" };

	//0차원 관점 : 문자
	printf("%c\n", arr[0][2]); //c
	printf("%c\n", arr[2][1]); //j

	//1차원 관점 : 문자열
	printf("%s\n", arr[0]); //abcd
	printf("%s\n", arr[2]); //ijkl
}


void exam5(){}void mystrcpy(char* s1, char* s2){	int i;	for (i = 0; s2[i] != '\0'; i++)	{		s1[i] = s2[i];	}	s1[i] = '\0';}void exam6(){	char arr1[10] = { "abc" };	char arr2[10] = { "ABCDEFG" };	mystrcpy(arr2, arr1);	printf("%s\n", arr2);}

void exam7(){	int num1 = 10;	int num2 = 20;	//역참조를 통한 원본의 값을 변경할 수 없다.... 	const int* pn;	pn = &num1;				printf("%d\n", *pn);	pn = &num2;				printf("%d\n", *pn);	// *pn = 11;		//error}//함수 인자 전달(값전달, 주소값전달)//값 : 주는것//주소값 : 내가 주소값 줄테니 내 값을 변경해 줘...void setnum1(int* n)	{ *n = 10; }void printnum1(int n)	{ printf("%d\n", n); }void setarr(char* arr, int idx, char ch){	arr[idx] = ch;}void printarr(const char* arr){	//	arr[0] = 'A';   //error	for (int i = 0; i < 5; i++)	{		printf("%c\t", arr[i]);	}	printf("\n");}void exam8(){	int num1;	setnum1(&num1);	printnum1(num1);	//===========================	char arr[5] = { 'a', 'b', 'c', 'd', 'e' };	setarr(arr, 2, 'C');	//주소값전달	printarr(arr);			//절대 값전달 불가능}
