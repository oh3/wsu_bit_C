//0325�� 
#include <stdio.h>
/*
1. ���� ����(������ ������� ����)
2. ����� ������ �ʱ�ȭ
	- ���� ����( = )
	- ����� �Է�
3. ���
*/
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main(){

	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();

}

//����ڷκ��� ���̸� �Է¹޴� ���α׷�
//printf : ����(%) �� ������� ����ϴ� �Լ�
//scanf_s : ����(%)�� ������� �Է� �޴��Լ�

void exam1(){

	int age;

	age = 20;
	
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
		
	printf("���� : %d\n", age);
	

}

//����ڷκ��� �����Ը� �������� 2�� �Է¹޾Ƽ� ����� ����ϼ���.
//[ȭ����°��]
// ù��° ������ 10.1, �ι�° ������ 20.2
//��� : 10.1, 20.2


void exam2(){

	double a;
	double b;

	printf("ù��° ������ �Է� :");
	scanf_s("%lf", &a);
	printf("%lf\n",a);

	printf("�ι�° ������ �Է� :");
	scanf_s("%lf", &b);
	printf("%lf\n", b);
	
}

//����
//����ڷκ��� ������ 2���� �������� �޾Ƽ� ����� ����ϼ���.
//ù��° ���� : (A)
//�ι�° ���� : (B)
void exam3(){
	
	char ch1;
	char ch2;

	printf("ù��° ���ڸ� �Է����ּ��� : ");
	scanf_s("%c", &ch1, sizeof(ch1));
	
	printf("�ι�° ���ڸ� �Է����ּ��� : ");
	scanf_s("%c", &ch2, sizeof(ch2));
	
	printf("��� : %c, %c\n", ch1, ch2);

}

void exam4(){

	char ch1, ch2, ch3, ch4;

	printf("����1 : ");
	ch1 = getchar();
	getchar(); // ����Ű�� ������
		
	printf("����2 : ");
	ch2 = getchar();
	getchar();

	printf("����3 : ");
	ch3 = getchar();
	getchar();

	printf("����4 : ");
	ch4 = getchar();
	getchar();

	printf("%c, %c, %c, %c\n", ch1, ch2, ch3, ch4);

}


//���ڿ� ���� �����
void exam5(){

	char str1[20]; // �迭, char 20���� ������ �� �ִ� ����
	char str2[20];

	printf("���ڿ� 1 :");
	gets_s(str1, sizeof(str1));

	printf("���ڿ� 2 :");
	gets_s(str2, sizeof(str2));

	puts("�����");
	puts(str1);
	puts(str2);
	
}

//����� ����
void exam6(){

	// 1. ���ϴ� Ÿ���� ������ ����..
	char name[20];
	char subject[20]; // �а�
	int age;
	char gender;	// m or f
	float weight;	//

	// 2. �Է��� ���� �ʱ�ȭ
	printf("�̸� :");
	gets_s(name, sizeof(name));

	printf("�а� : ");
	scanf_s("%s", subject, sizeof(subject));	//?

	printf("���� : ");
	scanf_s("%d", &age);
	getchar(); // ���͸� ����

	printf("����(m or f) : ");
	scanf_s("%c", &gender);

	printf("������ : ");
	scanf_s("%f", &weight);

	//3. ��� ���
	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", subject);
	printf("���� : %d\n", age);
	printf("���� : %c\n", gender);
	printf("������ : %.1f\n", weight);
	//printf("������ : %.1f\n", weight); // �Ҽ��� 1�ڸ�����

}