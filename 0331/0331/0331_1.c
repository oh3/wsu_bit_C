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

}

//����1 
//1���� 10 ������ ������ �հ踦 ���ϼ���.
//(for, while, do~while�� ����մϴ�.)
void exam1(){
	
	int sum = 0;
	
	//for ���� �̿��� �հ�
	for (int i = 1; i <= 10; i++){
		sum = sum + i;
	}
	printf("for���� �̿��� �հ� : %d\n", sum);

	//=================================================================
	int i2 = 1;
	int sum2 = 0;

	while (i2 <= 10){
		sum2 = sum2 + i2;
		i2++;
	}
	printf("while���� �̿��� �հ� : %d\n", sum2);


	//=================================================================
	int i3 = 1;
	int sum3 = 0;

	do {
		sum3 = sum3 + i3;
		i3++;
	} while (i3 <= 10);

	printf("do ~ while ���� �̿��� �հ� : %d\n", sum3);

}

//���� 2
//1���� 100������ Ȧ�� �հ踦 ���ϼ���.
//for���� i���� �̵��� + 2��ŭ�̵���Ű�� ���� ���ϰ�
//While ���� i���� �ϳ��� �̵���Ű��, if������ Ȧ������ �˻��ؼ� �հ踦 ���ϼ���.
void exam2(){

	int sumi = 0;

	int j = 1;
	int sumj = 0;

	int k = 1;
	int sumk = 0;

	for (int i = 1; i < 100; i = i + 2)
	{
		sumi = sumi + i;
	}
	printf("�հ�(for) : %d\n", sumi);

	while (j < 100)
	{
		sumj = sumj + j;
		j = j + 2;
	}
	printf("�հ�(while) : %d\n", sumj);

	do
	{
		sumk = sumk + k;
		k = k + 2;
	} while (k < 100);
	printf("�հ�(do while) : %d\n", sumk);
}

//����3
//0�� �Է��� �������� �հ踦 ����ϼ���.(���ϴ� �ݺ����� ����Ͽ� ������ ��)
void exam3(){

	int num;
	int sum = 0;

	while (1){ // 1: �� => ���ѷ���
		printf("����(����:0) : ");
		scanf_s("%d", &num);
		sum = sum + num;

		//���ǿ� �����ϸ� while���� ����
		if (num == 0){
			//break; �ݺ����� �����ϴ� Ű����
			
			break;
		}// if ��
	}// while ��
	printf("�հ� : %d\n", sum);
}

//����4
//���ĺ� �빮�ڸ� ����ϼ���.�׸��� �������� ����ϼ���.
void exam4(){

	char a;

	for (a = 'A'; a < 'Z'; a++)
	{
		printf("%c ", a);
	}
	printf("%c\n", a);

	for (a = 'Z'; a > 'A'; a--)
	{
		printf("%c ", a);
	}
	printf("%c\n", a);
}


//���� 5
//�α����� �䳻���ϴ�. ��ȣ�� 1234�̰�, ��ȣ�� ��ġ�� �� ���� �Է��� �޽��ϴ�.
void exam5(){

	int num;
	while (1){
		printf("��ȣ : \n");
		scanf_s("%d", &num);

		//���ǿ� �����ϸ� while���� ����
		if (num == 1234){
			printf("��ȣ ��ġ\n");
			break;
		}else
			printf("��ȣ ����ġ\n");
			continue;
	}
}

//���� 6
//�������� ����ϼ���. ����� ���� Ű����κ��� �Է� �޽��ϴ�.
void exam6(){

	int i; //��
	int j = 0; //��

	printf("��<2-9> : ");
	scanf_s("%d", &i);

	printf("\n");
	for (int j = 1; j <= 9; j++){
		printf("%d * %d = %d\n", i, j, (i*j));
	}
}

//���� 7
void exam7(){
	
}

void exam8(){
	
}

void exam9(){

}

void exam10(){

}