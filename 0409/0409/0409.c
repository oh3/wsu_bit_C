//�Լ�
#include <stdio.h>

//�̼� : ���ٿ� N���� *�� ����Ѵ�.
//		��, �ʿ信 ���� �������� ����� �� �ִ�.

//�ݺ����� ��� ==> �Լ�
//step1 : ���ݱ��� ��� ������ ���� �ذ�.

//step2 : �ݺ����� ��� ==> �Լ�
//		 �Լ��� ����� ���� ==> �Լ� ȣ��

//�̼� 2 ���ٿ� *�� 20�� ���
//		  �� ���� �� �ٿ��� *�� 10�� ����Ͻÿ�.

//step1 : �� �ٸ� �Լ����� ����鼭 �ذ�

/*
void printchar(int n);

void main(){

	printchar(20); //�Լ� ȣ��� ������ ����..!!! 
	printchar(100);
}


//�Լ��� ���� --> ���ǹ��� ���ι����� ȣ��
void printchar(int n){

	for (int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");

}
*/

//step2 : �Լ��� ȣ�� �� �� ���� �ʿ��� ������ ����.
/*
void printchar(int n);

void main(){

	printchar(20); //�Լ� ȣ��� ������ ����..!!! 
	printchar(100);
}


//�Լ��� ���� --> ���ǹ��� ���ι����� ȣ��
void printchar(int n){

	for (int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");

}
*/


/*
void printchar(char c,int n);

void main(){

	printchar('^', 20); //�Լ� ȣ��� ������ ����..!!! 
	printchar('.',100);
}


//�Լ��� ���� --> ���ǹ��� ���ι����� ȣ��
void printchar(char c, int n){

	for (int i = 0; i < n; i++){
		printf("%c",c);
	}
	printf("\n");

}
*/

//==============================================
//foo �Լ��� �� 3���� ������ �����Ѵ�.
//�� �� 2���� ������ �Ű������� �Ѵ�.
//�� �� 1���� ������ ���������� �Ѵ�.
// �� ��� ������ foo�� stack�޸𸮿� ����ȴ�.


//���� foo�� ȣ�� �Ϸ��� �ݵ�� int type 2���� �����ؾ��Ѵ�.

		//�Ű�����
void foo(int n1, int n2){

	//��������
	int n3;

}

void main(){

	foo(int n1, int n2);

	printf("foo", foo);

	n3;
}