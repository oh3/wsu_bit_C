#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();
void exam11();
void exam12();
void exam13();

void main(){
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();
	//exam10();
	//exam11();
	exam12();
	//exam13();
	
}

void exam1(){

	int a, b, c;

	a = 2000;
	b = 3000;

	c = a * b;

	printf("%d * %d = %d, \n", a, b, c);

}

void exam2(){

	//������ ���������� ���������� �������·� ��������ȴ�.
	char ch1 = 'A';

	ch1 = ch1 + 1;

	printf("�ƽ�Ű�ڵ尪 : %d, %c\n", ch1, ch1);

}

//����������
void exam3(){
	
	//��ġ : �����ȿ��� ���� ����.
	int a = 1;
	int b;

	// ++a ��ġ ����
	b = ++a;	//b = 2;

	printf("%d, %d\n", a, b); //2, 2

	//��ġ : ������ ���� �� ����
	int a1 = 1;
	int b1;

	b1 = a1++; //b1 = 1;

	printf("%d, %d\n", a1, b1); // 2, 1
}

void exam4(){

	int a = 1;
	int b;

	//�ϳ��� �����ȿ��� ������ ���� �����ϴ�.
	b = ++a + ++a + ++a; //b = 4 + 4 + 4
	//	1	   1	 1
	printf("%d, %d\n", a, b); //4, 12

	int a1 = 2;
	int b1;

	//��ġ
	b1 = a++ +  a++  + a++; // b1 = 1 + 1 + 1

	printf("%d, %d\n", a1, b1); // 

}

void exam5(){

	int a = 1;
	int b;

	b = ++a + a++ + ++a + ++a; // b = 4 + 4 + 4 + 4
		
	printf("%d, %d\n", a, b); // 5, 16
}

void exam6(){

	int number = 92; // 92;

	// 90���� ũ�ų� ����, 100���� �۰ų� ������  ���ΰ�?
	//int result = 90 <= number <= 100;
	int result = 90 <= number && number <= 100;
	printf("%d\n", result); // 1
	
}

//����1) :
//����ڷκ��� ���� �� 2���� �Է¹ް� �� ���� ���� �����
//����Ͻÿ�
void exam7(){
	
	int num1, num2;
	int result;

	printf("ù��° ������ �Է����ּ���.");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է����ּ���.");
	scanf_s("%d", &num2);

	result = num1 * num2; //<============ 3

	printf("%d * %d = %d\n",num1, num2, result);

}

//����2)
//����ڷκ��� ���ڸ� 2�� �Է¹ް�
//ù��° ���ڰ� ũ�ٸ� 1��, �۴ٸ� 0��
//����Ͻÿ�
void exam8(){

	char ch1, ch2;
	int result;
	
	printf("ù��° �����Է� : ");
	scanf_s("%c", &ch1,sizeof(ch1)); 
	getchar(); //����Ű ����

	printf("�ι�° �����Է� : ");
	scanf_s("%c", &ch2, sizeof(ch2));

	result = ch1 > ch2;

	printf("%d\n", result);

}

//Ű����κ��� �Է� ���� ���� N�� 5�� ���� ��� �������� ���Դϱ�?
void exam9(){
	
	int key; 
	int b = 5;

	int mok; // ��
	float c = 0; // ������

	printf("���� : ");
	scanf_s("%d", &key);
	
	mok = key / b;
	
	printf("�� : %d\n", mok);
	printf("������ : %.0f\n", c);

}

//������ ���� �ѷ��� ���ϴ� �����Դϴ�.
//�������� �Է¹޾Ƽ� ���� �ѷ��� ���Ͻÿ�.
//�������� �����̰�, ���̴� 3.1416�Դϴ�.
//��� ����� �Ҽ��� �� �ڸ� ���� �մϴ�.
//����) �� �ѷ� = 2 * ���� * ������
//���) ������ : 10
//		  ���� : 316.16
void exam10(){

	int ban; //������
	double result = 0; // ���� �ѷ�

	printf("������ �Է� : ");
	scanf_s("%d", &ban);

	//����
	result = 2 * 3.1416 * ban;

	//���
	printf("������ : %d\n", ban);
	printf("���� : %.2fl\n", result);

}

//������ ������ ȭ���� ��ȯ�ϴ� �����Դϴ�.
//�Է¹��� ���� �µ��� ȭ���� ��Դϱ�?
//�Է��� ������, ����� �Ҽ��� ���ڸ����� ����մϴ�.
//����) F(ȭ��) = C(����) * (9 / 5) + 32
//���) ���� : 23
//      ȭ�� : 73.4
void exam11(){

	int sup;
	float hwa;
	scanf_s("%d", &sup);

	//����
	hwa = sup * (9.0 / 5) + 32;

	printf("���� : %d\n",sup);
	printf("ȭ�� : %.1f\n",hwa);
	
}
//Ű����κ��� �ҹ��ڸ� �Է� �޾� �빮�ڷ� ��ȯ�Ͽ� ����ϼ���.
// ���) �Է�(�ҹ���) : a
//		 ��ȯ(�빮��) : A
void exam12(){

	/*
	char ch[2];

	scanf_s("%c",&ch[2]);

	printf("�Է� : %c\n", ch[2]);

	ch[2] = 'A';

	printf("��ȯ : %c", ch[2]);

	return 0;
	*/
	char a;
	char result;
	printf("�Է�(�ҹ���) : ");
	scanf_s("%c", &a);

	result = a - 32;

	printf("��ȯ �빮�� : %c", result);

}

//Ű����κ��� �� ���� ������ �Է¹ް�, �� �հ� ����� ����ϼ���.
//��� ) ����1 : 10
//��� ) ����2 : 20
//��� ) ����3 : 30
//��� ) �ѤѤѤѤѤѤѤѤѤѤѤ�
// �հ� : 60
// ��� : 20
void exam13(){

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	int hap = 0;
	double avg = 0;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	hap = num1 + num2 + num3;
	avg = hap / 3.0;

	printf("����1 : %d\n", num1);
	printf("����2 : %d\n", num2);
	printf("����3 : %d\n", num3);
	printf("===================\n");
	printf("�հ� : %d\n", hap);
	printf("��� : %.1lf\n", avg);

}