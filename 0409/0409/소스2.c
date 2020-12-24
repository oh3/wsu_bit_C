//함수의 매개변수와 전달인자.
#include <stdio.h>


//main함수에서는 아직 정의되지않은 3개의 함수를 호출하고있다.
//에러가 없도록 세개의 함수를 정의하시오.(코드는 없어도됨)
void fun1(int n1, int* n2);void fun2(int n1, int n2);void fun3(int* n1, int* n2);void fun4(int* n1, int* n2);

void main(){

	int num = 10;
	int arr[5] = { 1, 2, 3, 4, 5 };

							// 차수
	fun1(num, &num);		// 0 , 1

	fun2(arr[2], arr[4]);	// 0 , 0

	fun3(&arr[1], &arr[3]);	// 1, 1

	fun4(arr, arr + 3);		// 1, 1

}

void fun1(int n1, int* n2){}void fun2(int n1, int n2){}void fun3(int* n1, int* n2){}void fun4(int* n1, int* n2){}