#include <stdio.h>

//step1) �Ű����� X, ���� X
//Hello Worldfmf ����ϴ� exam1�̶�� �Լ�

/*
void exam1();


void main(){

	exam1();
}

void exam1(){

	printf("Hello World\n");

}
*/

//step2) �Ű����� O, ���� O
//���� 2���� ���޹޾� �� ���� ��ȯ�ϴ� exam1 �Լ�

/*
int exam1(int n1, int n2);

void main()
{
	int num1 = 10;
	int num2 = 20;
	int result;

	result = exam1(num1, num2);  //<=================

	printf("���� ��� : %d\n", result);
}

int exam1(int n1, int n2)
{
	int result;

	result = n1 + n2;

	return result;
}
*/

//���� 3���� ���޹޾� �� ���� ��ȯ�ϴ� getsum �Լ�

/*
int getsum(int n1, int n2, int n3);

void main(){

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int result;

	result = getsum(num1, num2, num3);

	printf("���� ��� : %d\n", result);

}

int getsum(int n1, int n2, int n3){

	int result;

	result = n1 + n2 + n3;

	return result;
}
*/

//���� 3���� ������ ������ ���޹޾� ����� ��ȯ�ϴ� getaverage �Լ�
/*
float getaverage(int n1, int n2, int n3);

void main(){

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	float result;

	result = getaverage(num1, num2, num3);

	printf("����� ��� : %2.f\n", result);
	
}

float getaverage(int n1, int n2, int n3){

	int sum;
	int avg;

	sum = n1 + n2 + n3;

	(float)avg = (float)sum / 3;

	return avg;

}
*/

//���� 1���� ���޹޾� �빮�ڶ�� 1�� �ҹ��ڶ�� 0�� ��ȯ�ϴ� itbigchar �Լ�

/*
int isbigchar(char ch);

void main(){


}

int isbigchar(char ch)
{
	int num;
	if (ch >= 'a' && ch <= 'z')
		num = 0;
	else if (ch >= 'A' && ch <= 'Z')
		num = 1;

	return num;
}

*/