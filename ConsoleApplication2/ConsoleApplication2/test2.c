//Entry Point �Լ�
// �ݵ�� ���������� �ʿ��� �Լ�
// ���α׷��� ������ ���⼭�����̴�.
#include<stdio.h>	//h ������� : �ҽ��ڵ忡 �ʿ��� ������ ���� �ִ� ����
					//				printf �Լ��� ������ ���� �ִ�.

void fun1();
void fun2();
void foo();

void main(){
	// �̸� ���� �����Ǵ� �Լ� -> ���̺귯�� �Լ�
	printf("main()\n"); // print �̸��� �Լ� ȣ��

	fun1();
}

void fun1(){
	printf("fun1()\n");
}

void fun2(){
	printf("fun2()\n");
}

void poo(){

}