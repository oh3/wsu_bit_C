#include <stdio.h>

//�л� ���� ����ü
typedef struct tagstudent{

	char name[20];
	int grad;	//1~4
	int kor;
	int eng;
	int mat;

	float average;

}student;

//����� �Է¹޾� ����ϴ� �Լ�
void inputstudent(student *pstu);
//����Լ�
void calaverage(student* pstu);
//����Լ�
void printstu(student* pstu);

int main(){

	//����ü �л����� ������
	student stu1;

	//�Է� �޴� �Լ�
	inputstudent(&stu1);
	calaverage(&stu1);
	printstu(&stu1);
	
	return 0;
}

//����� �Է¹޾� ����ϴ� �Լ�
void inputstudent(student *pstu){

	printf("�̸� : ");		scanf_s("%s", pstu->name, sizeof(pstu->name));
	printf("�г�(1~4) : ");	scanf_s("%d", &pstu->grad);
	printf("���� : ");		scanf_s("%d", &pstu->kor);
	printf("���� : ");		scanf_s("%d", &pstu->eng);
	printf("���� : ");		scanf_s("%d", &pstu->mat);
}

//��� �Լ�
void calaverage(student* pstu){

//��� �Լ�
void printstu(const student* pstu){

