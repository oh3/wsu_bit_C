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

void main(){

	//exam1();
	//exam2();
	exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();

}

//����1.1
void exam1(){

	printf("* - * - * - * - * - * - * - * - * - * -\n");
	printf("�̸� : �����\n");
	printf("���� : 25\n");
	printf("��ȭ��ȣ : 010-5653-0794\n");
	printf("* - * - * - * - * - * - * - * - * - * -\n");

}

//���� 1.2
void exam2(){

	printf("**************************************\n");
	printf("*\t�̸� : �����\t\t\t*\n");
	printf("*\t���� : 25\t\t\t*\n");
	printf("*\t��ȭ��ȣ : 010-5653-0794\t*\n");
	printf("**************************************\n");


}

//���� 2
void exam3(){

	int a = 65;
	int b = 66;
	int c = 67;
	int d = 68;

	printf("************************************\n");
	printf("���� \t 10���� \t 16����\n");
	printf("A \t %d \t\t 0x%x \n",a,a);
	printf("B \t %d \t\t 0x%x \n", b, b);
	printf("C \t %d \t\t 0x%x \n", c, c);
	printf("D \t %d \t\t 0x%x \n", d, d);
	printf("************************************\n");

}

// ���� 3
void exam4(){

	
	//���� �� 
	int a = 0;
	//����
	int b = 0;
	//���
	float c = 0;
	
	//����
	char d; // C���
	char e; // CPP ���
	char f; // �ڷᱸ��
	
	
	printf("���� �� : ");
	scanf_s("%d", &a);

	printf("����� ���� �� ��� %d���Դϴ�.\n", a);

	printf("���� : ");
	scanf_s("%d", &b);

	printf("��� : ");
	scanf_s("%f", &c);

	printf("����� �ְ� ����� %d���� %.1f�Դϴ�.\n", b,c);
	getchar();

	printf("���� �Է�(3��) :");
	scanf_s("%c", &d);
	getchar();

	scanf_s("%c", &e);
	getchar();

	scanf_s("%c", &f);
	getchar();
	
	putchar(d);
	putchar(e);
	putchar(f);

	printf("����� : %c\n", d);
	printf("CPP��� : %c\n", e);
	printf("�ڷᱸ�� : %c\n", f);


}

//���� 4
void exam5(){

	char a = 1;
	int b = 4;
	float c = 4;
	double d = 8;

	printf("type \t size\n");
	printf("--------------\n");
	printf("char \t %d \n",a);
	printf("int \t %d \n",b);
	printf("float \t %.0f \n",c);
	printf("double \t %.0f \n",d);

}

//���� 5 (�ƽ�Ű�ڵ�)
void exam6(){

	char ch;
	int ch2;

	scanf_s("%c", &ch, sizeof(ch));
	printf("���� : %c\n", ch);
	printf("�� : %d\n", ch);
	getchar();

	scanf_s("%d", &ch2);
	getchar();
	printf("���� : %d\n", ch2);
	printf("���� : %c\n", ch2);

}

//���� 6
void exam7(){

	int a;
	int b;
	int result;
	float result2;

	printf("����1 :");
	scanf_s("%d", &a);

	printf("����2 :");
	scanf_s("%d", &b);

	//���ϱ�
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	//����
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	//���ϱ�
	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	//������
	result2 = (float)4.0 / 3;
	printf("%d / %d = %.1f \n", a, b, result2);
	
}

//���� 7��
void exam8(){

	//3�� ����
	int a;
	int b;
	int c;

	int hap;
	float avg;


	printf("���� �Է�(3��) :");
	scanf_s("%d", &a);
	getchar();

	scanf_s("%d", &b);
	getchar();

	scanf_s("%d", &c);
	getchar();

	hap = a + b + c;
	printf("�� = %d\n", hap);

	(float)avg = hap / 3.0;
	printf("��� = %.1f\n", avg);

	printf("��� : 1\n");

}

//���� 8��
void exam9(){

	int a;
	int result;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	result = a % 2;

	printf("��� : %d\n",result);

}
