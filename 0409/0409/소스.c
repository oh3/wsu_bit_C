#include <stdio.h>

//�Լ��� �Ű������� ��������
//main�Լ������� ���� ���ǵ������� 3���� �Լ��� ȣ���ϰ��ִ�.
//������ ������ ������ �Լ��� �����Ͻÿ�.(�ڵ�� �����)

void fun_add(int n1, int n2);
void fun_div(int n1, int n2);
void fun_cal(int n1, int n2, char oper);

void main(){

	int n1 = 10, n2 = 20;
	char oper = '+';

	fun_add(n1, n2);
	fun_div(n1, n2);

	printf("\n");

	fun_cal(n1, n2, '+');
	fun_cal(n1, n2, '-');
	fun_cal(n1, n2, '*');
	fun_cal(n1, n2, '/');

}

//���ϱ�
void fun_add(int n1, int n2){

	int result = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, result);

}

//������
void fun_div(int n1, int n2){	float result = (float)n1 / n2;	printf("%d / %d = %f\n", n1, n2, result);}

//����
void fun_cal(int n1, int n2, char oper){

	float result = 0;

	switch (oper){
	case '+': (float)result = n1 + n2; break;
	case '-': (float)result = n1 - n2; break;
	case '*': (float)result = n1 * n2; break;
	case '/': (float)result = n1 / n2; break;
	default: printf("�߸��� �������Դϴ�.\n");
			return; // <======== ***** �Լ��� �����ϴ� Ű����
	}

	printf("%d %c %d = %.1f\n", n1, oper, n2, result);

}