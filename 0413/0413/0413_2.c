//�Ű����� ���޹��

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

	exam1(num1, &num1);		//��, �ּҰ�

	printf("%d\n", num1);	//10

	return 0;
}

void exam1(int n1, int *n2){

	*n2 = 20;

}
*/

//���� 3���� ������ ���޹޾� �հ� ����� ��ȯ(out para)�ϴ� cal �Լ�

void cal(int n1, int n2, int n3, int size, int* sum, float* aver);

int main(){
	
	int num1 = 10, num2 = 22, num3 = 31;
	int sum;
	float avg;

	cal(num1, num2, num3, 3, &sum, &avg);

	printf("�� : %d\n", sum);
	printf("��� : %.1f\n", avg);

	return 0;
}

void cal(int n1, int n2, int n3, int size, int* sum, float* aver){

	*sum = n1 + n2 + n3;
	*aver = (float)*sum / size;
}



