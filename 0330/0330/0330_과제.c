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
	exam11();

}

//���� 1
//n�� 3�� 5�� ����̴�
void exam1(){
	
	int n = 3;

	//n�� 3�� 5�� ����̴�
	if (n % 3 == 0 && n % 5 == 0)
		printf("���ǿ� ����.\n");
	else
		printf("���ǿ� �����\n");

}

//���� 1.1
// ch�� �빮���̴�
void exam2(){

	char ch = 'a';

	if (ch >= 'A' && ch <= 'Z'){
		printf("�빮�� �Դϴ�\n");
	}else
	printf("�빮�ڰ� �ƴմϴ�.");
}

//���� 1.2
//n�� -5���� �۰ų� 5���� ũ��
void exam3(){

	int n = 7;

	if (n < -5 || n > 5)
		printf("���ǿ� ����");
	else
		printf("���ǿ� �Ҹ���");

}

//���� 1.3
//n�� Ȧ���� �ƴϴ�.
void exam4(){

	int n = 1;

	if (n % 2 == 0) // ¦��
		printf("¦�� �Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");

}

//����2
//2. �ڰ��� ���迡�� ���� ������ �ֽ��ϴ�. ���� ���� �̻��̸� �����̰� �ƴ϶�� �����Դϴ�.
//���� ������ ������ 60���Դϴ�. ���� ������ �Է� �ް� �հ����� ���հ����� ����ϼ���.
void exam5(){

	int score;

	score = 61;

	if (score >= 60){
		printf("���� :%d\n", score);
		printf("��� : �հ�\n");
	}
	else
		printf("���հ�\n");
}

//����3
//3. ���� ���� �� ���� �Է� �ް�, �̵��� ���� �ﰢ���� ������ �� �� �ִ��� �˻��ϼ���.
//(�ﰢ���� ������ ���� 180�� ���� �� ����.)
void exam6(){

	int num1;
	int num2;
	int num3;
	int hap = 0;

	printf("���� �Է� (3��) : ");
	scanf_s("%d", &num1);
	getchar();

	scanf_s("%d", &num2);
	getchar();

	scanf_s("%d", &num3);
	getchar();

	hap = num1 + num2 + num3;

	if (hap <= 180)
		printf("��� : ����");
	else
		printf("��� : �Ұ���\n");

}

//���� 4
//���� N�� ¦������ Ȧ������ �˻��ϼ���.
void exam7(){

	int n;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	if (n % 2 == 0){
		printf("���� : %d\n", n);
		printf("��� : ¦��\n");
	}else
		printf("��� : Ȧ��\n");
}
//����5
// ���� 5���� �Է¹޾Ƽ� ������ ����� �հ踦 ����ϼ���.
void exam8(){

	int num1, num2, num3, num4, num5;
	int hap1 = 0;
	int hap2 = 0;

	printf("���� 5�� �Է� : ");
	scanf_s("%d", &num1);
	getchar();

	scanf_s("%d", &num2);
	getchar();

	scanf_s("%d", &num3);
	getchar();

	scanf_s("%d", &num4);
	getchar();

	scanf_s("%d", &num5);
	getchar();

	if (num1 > 0)			hap1 = hap1 + num1;
	else					hap2 = hap2 + num1;

	if (num2 > 0)			hap1 = hap1 + num2;
	else					hap2 = hap2 + num2;
	
	if (num3 > 0)			hap1 = hap1 + num3;
	else					hap2 = hap2 + num3;

	if (num4 > 0)			hap1 = hap1 + num4;
	else					hap2 = hap2 + num4;

	if (num5 > 0)			hap1 = hap1 + num5;
	else					hap2 = hap2 + num5;
	

	printf("����(5��) : %d %d %d %d %d\n", num1, num2, num3, num4, num5);
	printf("���� �հ� : %d\n", hap1);
	printf("��� �հ� : %d\n", hap2);

}

//���� 6��
//�츮����� ���� �µ��� ����մϴ�. 
//���� �µ��� ������ ȭ�� �µ���
//ȭ�� �µ��� ������ ���� �µ��� ��ȯ�ϴ� �ڵ带 �ۼ��ϼ���.
//�µ��� ������ ���ڷ�, �µ��� ������ ó���մϴ�.
void exam9(){

}

//���� 7��
// ch�� �빮�ڶ�� �ҹ��ڷ� , �ҹ��ڶ�� �빮�ڷ� �����ϼ���.
void exam10(){


}

//���� 8��
//������ ����ϴ� �����Դϴ�.�л��� ������ 0������ 100������ �ֽ��ϴ�.
//90�� �̻��̸� A, 80�� �̻��̸� B 70���̻��̸� C 60�� �̻��̸� D, �������� ��� F
//�����Դϴ�
void exam11(){

	int score;

	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score >= 90){
		printf("���� : %d\n",score);
		printf("���� : A \n");
	}
	else if (score >= 80){
		printf("���� : %d\n", score);
		printf("���� : B \n");
	}
	else if (score >= 70){
		printf("���� : %d\n", score);
		printf("���� : C \n");
	}
	else if (score >= 60){
		printf("���� : %d\n", score);
		printf("���� : D \n");
	}
	else
		printf("F");

}


