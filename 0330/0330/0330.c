#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();


void main(){
	
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();

}

//����1) Ư�� ������ �����ϰų� �������� �ʴ� ����
//		if��
void exam1(){

	int jumsu;

	jumsu = 80;

	//������ 90���� ũ�ٸ� "ũ��"?
	if (jumsu > 90);
	printf("ũ��\n");

}

//����2) 2���� ������ ��Ȳ�� ���� ���������� ����ϴ±���
//���� -> ���ھ�? ���ھ�?
// if ~ else
void exam2(){

	char gender;

	gender = 'f'; // 'f'

	//�񱳿����� == ���
	if (gender == 'm')
		printf("����\n");
	else
		printf("����\n");


}

//����3) 3�� �̻��� ������ ��Ȳ�� ���� ���������� ����ϴ� ����
// jumsu�� 'A','B','C'...
void exam3(){

	int jumsu;
	char ch;

	jumsu = 82;

	if (jumsu >= 90 && jumsu <= 100)
		ch = 'A';
	else if (jumsu >= 80 && jumsu < 90)
		ch = 'B';
	else if (jumsu >= 70 && jumsu < 79)
		ch = 'C';
	else
		ch = 'F';
		
	printf("%d������ ������ %c�Դϴ�.\n", jumsu, ch);
}

//���� Ư�� ������ �����ϴ� ������ ������ �����ϰ��� �ϴ� ���?
//����ڷκ��� �����ڸ� �Է¹޾� �Ʒ��� ���� ó���Ͻÿ�.
//���� �빮�ڶ�� �빮���Դϴ�. ������ ����ϰ�, �ҹ��ڷ� ����..
//�ҹ��ڶ�� �ҹ����Դϴ�. ������ ����ϰ�, �빮�ڷ� ����...
void exam4()
{
	char ch;

	printf("������ �Է� : ");
	scanf_s("%c", &ch, sizeof(ch));

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("�빮�� �Դϴ�\n");
		ch = ch + ('a' - 'A'); //ch = ch + 32
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("�ҹ��� �Դϴ�\n");
		ch = ch - ('a' - 'A');
	}
	printf("������ ����� %c\n", ch);
}

void exam5(){

	char ch = 'B';

	switch(ch){
		case 'A':
			printf("1\n");
			printf("2\n");
			printf("3\n");
			break;
		case 'B':
			printf("4\n");
			printf("5\n");
			break;
		case 'C':
			printf("6\n");
			break;
	}
}