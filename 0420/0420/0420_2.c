#include <stdio.h>

/*
��¥�� �����ϴ� ���α׷�
1. ���ó�¥�� ������ �� �ִ�.
2. ���� ��¥�� ������ �� �ִ�.
3. ��¥�� ����� �� �ִ�.
*/

//step3) ����ü�� ���

//1. ��¥��� Ÿ���� ���� == int : ������? �󸶸�ŭ�� ũ���?  ������ 4Byte

//����ü Ÿ�� ����
//Ÿ��Ű���� : struct tagdate == int 
//�������Ʈ : ������ 3�� �����ϴ� Ÿ�� => 12Byte
struct tagdate{
	
	int year;
	int month;
	int day;

};

void input_today(struct tagdate *d){
	(*d).year = 2020;
	(*d).month = 4;
	(*d).day = 20;
}

void print_date(struct tagdate d){
	printf("%04d-%02d-%02d\n", d.year, d.month, d.day);
}

void change_nextday(struct tagdate* d){
	(*d).day = (*d).day + 1;
}


int main(){
	//���� ����
	struct tagdate  d1;  //����3���� ������ �� �ִ� ���� ���� 

	//���ó�¥�� ����
	input_today(&d1);

	//��¥�� ���
	print_date(d1);

	//������¥�� ����
	change_nextday(&d1);

	//��¥�� ���
	print_date(d1);

	return 0;
}
