//�Լ��� �Ű������� ��������.
#include <stdio.h>


//main�Լ������� ���� ���ǵ������� 3���� �Լ��� ȣ���ϰ��ִ�.
//������ ������ ������ �Լ��� �����Ͻÿ�.(�ڵ�� �����)
void fun1(int n1, int* n2);void fun2(int n1, int n2);void fun3(int* n1, int* n2);void fun4(int* n1, int* n2);

void main(){

	int num = 10;
	int arr[5] = { 1, 2, 3, 4, 5 };

							// ����
	fun1(num, &num);		// 0 , 1

	fun2(arr[2], arr[4]);	// 0 , 0

	fun3(&arr[1], &arr[3]);	// 1, 1

	fun4(arr, arr + 3);		// 1, 1

}

void fun1(int n1, int* n2){}void fun2(int n1, int n2){}void fun3(int* n1, int* n2){}void fun4(int* n1, int* n2){}