//매개변수 전달방법

/*
CV
CA
*/

#include <stdio.h>

/*
void exam1(int n1, int *n2);

int main(){

	int num1 = 10;
	printf("%d\n", num1);	//10

	exam1(num1, &num1);		//값, 주소값

	printf("%d\n", num1);	//10

	return 0;
}

void exam1(int n1, int *n2){

	*n2 = 20;

}
*/

//정수 3개와 갯수를 전달받아 합과 평균을 반환(out para)하는 cal 함수

void cal(int n1, int n2, int n3, int size, int* sum, float* aver);

int main(){
	
	int num1 = 10, num2 = 22, num3 = 31;
	int sum;
	float avg;

	cal(num1, num2, num3, 3, &sum, &avg);

	printf("합 : %d\n", sum);
	printf("평균 : %.1f\n", avg);

	return 0;
}

void cal(int n1, int n2, int n3, int size, int* sum, float* aver){

	*sum = n1 + n2 + n3;
	*aver = (float)*sum / size;
}



