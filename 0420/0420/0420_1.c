#include <stdio.h>

/*
��¥�� �����ϴ� ���α׷�
1. ���ó�¥�� ������ �� �ִ�.
2. ���� ��¥�� ������ �� �ִ�.
3. ��¥�� ����� �� �ִ�.
*/

//step2) �Լ����� ���.
void input_today(int *y, int *m, int *d){

	*y = 2020;
	*m = 4;
	*d = 20;
	
}

void print_date(int y, int m, int d){

	printf("%04d-%02d-%02d \n", y, m, d);

}

void change_nextday(int *y, int *m, int *d){

	*d = *d + 1;

}


int main(){

	//���� ����
	int year;
	int month;
	int day;

	//���ó�¥�� ����
	input_today(&year, &month, &day);

	//��¥�� ���
	print_date(year, month, day);

	//������¥�� ����
	change_nextday(&year, &month, &day);

	//��¥�� ���
	print_date(year, month, day);

	return 0;
}