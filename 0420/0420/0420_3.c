#include <stdio.h>
#include <string.h>

/*
struct tagstu Ÿ��Ű���带 ���� �л� ����ü ����

�ɹ�1 : char name[20];      //�̸�
�ɹ�2 : int  grad;          //�г�
�ɹ�3 : char subject[20];   //�а�
�ɹ�4 : int  number;        //�й�
*/

//����ü Ÿ�� ����
struct tagstu{

	char name[20];      //�̸�
	int grad;          //�г�
	char subject[20];   //�а�
	int number;        //�й�

};

//�л������� �Է�
void input_stu(struct tagstu* pstu){	strcpy_s((*pstu).name, sizeof((*pstu).name), "ȫ�浿");	(*pstu).grad = 1;	strcpy_s((*pstu).subject, sizeof((*pstu).subject), "��ǻ���а�");	(*pstu).number = 1234567;
}

//�л� ������ ���
void print_stu(struct tagstu d){

	printf("�̸� : %s\n", d.name);
	printf("�а� : %s\n", d.subject);
	printf("�г� : %d\n", d.grad);
	printf("�й� : %d\n", d.number);

}

//�г��� ����
void update_stu(struct tagstu* pstu, int grad){	(*pstu).grad = grad;}

//����� ����� ���
void print_stu1(char name[], int grad, char* subject, int number){

	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", subject);
	printf("�г� : %d\n", grad);
	printf("�й� : %d\n", number);

}


int main(){

	//���ι�
	struct tagstu stu1;

	//strcopy
	input_stu(&stu1);   //�л� ������ �Է�..(���ڿ��� ���ڿ� �Լ��� Ȱ��)

	print_stu(stu1);   //�л� ������ ���

	update_stu(&stu1, 3);  //�г��� �߰��� ����, ������ �г����� stu1�� ������ ����

	//����� ����� ���
	print_stu1(stu1.name, stu1.grad, stu1.subject, stu1.number);

	return 0;
}
