#include <stdio.h>

void exam1();

//ġȯ
//��ó����(���������Ͱ� ����� �ϱ� �� ���� ó���ϴ°�)
#define EXAM1 void eaxm1();
#define MSG1 "���ڿ�����"

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

	printf("%s, 0x%p\n", "���ڿ�����");
	printf("%s\n", MSG1);
	
}

void exam2(){

	char arr[10] = { "abcdefg" };

	//%s : �ּҺ��� '\0' ���ö� ���� ����ϴ� ���ڿ� ��¼���
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
	//���ڿ� 4���� ����Ǿ� �ִ� 2���� �迭
	char arr[4][5] = { "abcd",					   "efhg",					   "ijkl",					   "mnop" };

	//0���� ���� : ����
	printf("%c\n", arr[0][2]); //c
	printf("%c\n", arr[2][1]); //j

	//1���� ���� : ���ڿ�
	printf("%s\n", arr[0]); //abcd
	printf("%s\n", arr[2]); //ijkl
}


void exam5(){}void mystrcpy(char* s1, char* s2){	int i;	for (i = 0; s2[i] != '\0'; i++)	{		s1[i] = s2[i];	}	s1[i] = '\0';}void exam6(){	char arr1[10] = { "abc" };	char arr2[10] = { "ABCDEFG" };	mystrcpy(arr2, arr1);	printf("%s\n", arr2);}

void exam7(){	int num1 = 10;	int num2 = 20;	//�������� ���� ������ ���� ������ �� ����.... 	const int* pn;	pn = &num1;				printf("%d\n", *pn);	pn = &num2;				printf("%d\n", *pn);	// *pn = 11;		//error}//�Լ� ���� ����(������, �ּҰ�����)//�� : �ִ°�//�ּҰ� : ���� �ּҰ� ���״� �� ���� ������ ��...void setnum1(int* n)	{ *n = 10; }void printnum1(int n)	{ printf("%d\n", n); }void setarr(char* arr, int idx, char ch){	arr[idx] = ch;}void printarr(const char* arr){	//	arr[0] = 'A';   //error	for (int i = 0; i < 5; i++)	{		printf("%c\t", arr[i]);	}	printf("\n");}void exam8(){	int num1;	setnum1(&num1);	printnum1(num1);	//===========================	char arr[5] = { 'a', 'b', 'c', 'd', 'e' };	setarr(arr, 2, 'C');	//�ּҰ�����	printarr(arr);			//���� ������ �Ұ���}
