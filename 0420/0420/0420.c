#include <stdio.h>

/*
��¥�� �����ϴ� ���α׷�
1. ���ó�¥�� ������ �� �ִ�.
2. ���� ��¥�� ������ �� �ִ�.
3. ��¥�� ����� �� �ִ�.
*/

//step1) �Լ� �� ���� �н��� ����

int main(){

	//���� ����
	int year;
	int month;
	int day;

	//���ó�¥�� ����
	year = 2020;
	month = 4;
	day = 20;

	//��¥�� ���
	printf("%04d-%02d-%02d \n", year, month, day);

	//������¥�� ����
	day = day + 1;

	printf("%04d-%02d-%02d \n", year, month, day);

	return 0;
}